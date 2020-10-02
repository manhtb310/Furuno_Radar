#include "client.h"
#include "ui_client.h"
#include "NMEAParser.h"
static const int DEFAULT_PORT = 6789;


client::client(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::client)
{
    ui->setupUi(this);
    //Khoi tao cho cac dieu khien (widget)

    ui->spinBoxPort->setRange(1000,32767);

    ui->spinBoxPort->setValue(DEFAULT_PORT);

    ui->lineEditServer->setText("localhost");

    ui->lineEditNick->setText("manhtb2");

    //Khai bao socket va buffer du lieu

    socket = new QTcpSocket(this);

    buffer = new QBuffer(this);

    buffer->open(QIODevice::ReadWrite);

    connect(ui->btnOpen, SIGNAL(clicked()), this, SLOT(on_btnOpen_clicked()));


    //Dang ky signal/slot cho cac su kien

    //Su kien click nut Connect

    connect(ui->btnConnect, SIGNAL(clicked()), this, SLOT(toggleConnection()));

    //Su kien go message va enter (gui di)

    connect(ui->lineEditMsg, SIGNAL(returnPressed()), this, SLOT(sendMessage()));

    //Hoac click nut Send (gui di)

//    connect(ui->btnSend, SIGNAL(clicked()), this, SLOT(sendMessage()));
    connect(ui->btnSend, SIGNAL(clicked()), this, SLOT(Test()));

    //Su kien ket noi Socket thanh cong

    connect(socket, SIGNAL(connected()), this, SLOT(setConnected()));

    //Su kien ngat ket noi

    connect(socket, SIGNAL(disconnected()), this, SLOT(setDisconnected()));

    //Su kien san sang nhan du lieu

//    connect(socket, SIGNAL(readyRead()), this, SLOT(receiveMessage()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(Test()));


    //Ban dau chua ket noi

    setDisconnected();
}

class MyNMEAParser : public CNMEAParser {

    ///
    /// \brief This method is called whenever there is a parsing error.
    ///
    /// Redefine this method to capture errors.
    ///
    /// \param pCmd Pointer to NMEA command that caused the error. Please note that this parameter may be NULL of not completely defined. Use with caution.
    ///
    virtual void OnError(CNMEAParserData::ERROR_E nError, char *pCmd) {
        printf("ERROR for Cmd: %s, Number: %d\n", pCmd, nError);
    }

protected:
    ///
    /// \brief This method is redefined from CNMEAParserPacket::ProcessRxCommand(char *pCmd, char *pData)
    ///
    /// Here we are capturing the ProcessRxCommand to print out status. We also are looking for
    /// the GPGGA message and displaying some data from it.
    ///
    /// \param pCmd Pointer to the NMEA command string
    /// \param pData Comma separated data that belongs to the command
    /// \return Returns CNMEAParserData::ERROR_OK If successful
    ///
    virtual CNMEAParserData::ERROR_E ProcessRxCommand(char *pCmd, char *pData) {

        // Call base class to process the command
        CNMEAParser::ProcessRxCommand(pCmd, pData);

//        printf("Cmd: %s\nData: %s\n", pCmd, pData);

//        // Check if this is the GPGGA command. If it is, then display some data
//        if (strstr(pCmd, "GPGGA") != NULL) {
//            CNMEAParserData::GGA_DATA_T ggaData;
//            if (GetGPGGA(ggaData) == CNMEAParserData::ERROR_OK) {
//                printf("GPGGA Parsed!\n");
//                printf("   Time:                %02d:%02d:%02d\n", ggaData.m_nHour, ggaData.m_nMinute, ggaData.m_nSecond);
//                printf("   Latitude:            %f\n", ggaData.m_dLatitude);
//                printf("   Longitude:           %f\n", ggaData.m_dLongitude);
//                printf("   Altitude:            %.01fM\n", ggaData.m_dAltitudeMSL);
//                printf("   GPS Quality:         %d\n", ggaData.m_nGPSQuality);
//                printf("   Satellites in view:  %d\n", ggaData.m_nSatsInView);
//                printf("   HDOP:                %.02f\n", ggaData.m_dHDOP);
//                printf("   Differential ID:     %d\n", ggaData.m_nDifferentialID);
//                printf("   Differential age:    %f\n", ggaData.m_dDifferentialAge);
//                printf("   Geoidal Separation:  %f\n", ggaData.m_dGeoidalSep);
//                printf("   Vertical Speed:      %.02f\n", ggaData.m_dVertSpeed);
//            }
//        }

//        return CNMEAParserData::ERROR_OK;
        if (strstr(pCmd, "GPGGA") != NULL) {
            CNMEAParserData::GGA_DATA_T ggaData;
            if (GetGPGGA(ggaData) == CNMEAParserData::ERROR_OK) {
                qDebug() << ggaData.m_dLatitude;
//                ui->lineEditLat->setText(ggaData.m_dLatitude);
                qDebug() << ggaData.m_dLongitude;
//                ui->lineEditLat->setText(ggaData.m_dLatitude);
            }
        }
    }
};



client::~client()
{
    delete ui;
}

void client::setConnected()

{

    ui->lineEditServer->setEnabled(false);

    ui->spinBoxPort->setEnabled(false);

    ui->lineEditNick->setEnabled(true);

    ui->lineEditMsg->setEnabled(true);

    ui->textEditChat->setEnabled(true);

    ui->textEditChat->clear();

    ui->btnSend->setEnabled(true);

    ui->btnConnect->setText("Disconnect");

}

void client::setDisconnected()
{

    ui->lineEditServer->setEnabled(true);

    ui->spinBoxPort->setEnabled(true);

    ui->lineEditNick->setEnabled(false);

    ui->lineEditMsg->setEnabled(false);

    ui->textEditChat->setEnabled(false);

    ui->textEditChat->clear();

    ui->btnSend->setEnabled(false);

    ui->btnConnect->setText("Connect");

}

void client::toggleConnection()

{

    if(socket->state() == QAbstractSocket::UnconnectedState)

    {
        socket->connectToHost(ui->lineEditServer->text(), ui->spinBoxPort->value());
    }

    else

    {
        socket->disconnectFromHost();
    }

}

void client::sendMessage()

{

    // "<nick> message\n"

    QString nick = ui->lineEditNick->text().toLatin1();

    QString msg = ui->lineEditMsg->text().toLatin1();

    //socket->write("<" + nick + "> " + msg + "\n");

    socket->write("<" + ui->lineEditNick->text().toLatin1() + "> " + ui->lineEditMsg->text().toLatin1() + "\n");

    ui->lineEditMsg->clear();

}
void client::receiveMessage()

{

    // missing some checks for returns values for the sake of simplicity

    QString line2 = socket->readAll();
//    qint64 bytes = buffer->write(socket->readAll());

//    qDebug() << "Socket read All :" << line2 ;

//    // go back as many bytes as we just wrote so that it can be read
//    buffer->seek(buffer->pos() - bytes);
//    qDebug() << buffer->pos();

    // read only full lines, line by line
//    while (buffer->canReadLine())

//    {
//            QString line = buffer->readLine();
//            qDebug() << line ;

//            ui->textEditChat->append(line2.simplified());
//    }
    if (line2.size())
    {
            ui->textEditChat->append(line2.simplified());
            QList<QByteArray> data = line2.toLatin1().split(',');
            QString cmd = data.value(0);

            if (cmd =="$RATLL")
            {
                ui->lineEditLat->setText(data.value(2));
            }
            line2.clear();
    }


}

void client::on_btnOpen_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "/home", tr("Text (*.txt)"));
    QFile file(file_name);
    QTimer m_timer{this};
    QString line;

    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "title", "File not found");
    }
    QTextStream in (&file);
    int count = 0;

//    QString msg = ui->lineEditMsg->text().toLatin1();
//    socket->write("<" + ui->lineEditNick->text().toLatin1() + "> " + ui->lineEditMsg->text().toLatin1() + "\n");
    // Read line by line from text file
//    while (in.readLineInto(&line))
//    {
//        ui->textEditChat->setPlainText(text);
//    }
    while (!file.atEnd())
    {
        count += 1;
        QString msg = file.readLine();
        socket->write("<" + ui->lineEditNick->text().toLatin1() + "> " + msg.toLatin1() + "\n");
        m_timer.start(1000);
    }
    m_timer.stop();
    ui->textEditChat->setEnabled(true);
//    ui->textEditChat->setPlainText(text);
    ui->lineEditFilepath->setText((file_name));
}

void client::Test(void) {
    // Create a NMEA parser object
    MyNMEAParser NMEAParser;

    NMEAParser.ResetData();

    //
    // Define some NMEA test strings.
    //
//    const char * szGGASample = "$GPGGA,145416.00,3350.10959,N,11751.22870,W,1,09,0.85,70.3,M,-32.7,M,,*5B";
//    const char *szGGASample =  socket->readAll();
    const char *szGGASample = "$GPGGA,020258,2104.077,N,10548.625,E,0,0,,5,M,37,M";
    qDebug() << szGGASample;

    // Test Individual sentences
    NMEAParser.ProcessNMEABuffer((char *)szGGASample, (int)strlen(szGGASample));

}


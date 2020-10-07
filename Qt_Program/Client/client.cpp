#include "client.h"
#include "ui_client.h"
#include "NMEAParser.h"
#include "NMEAParserData.h"
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

    connect(ui->btnSend, SIGNAL(clicked()), this, SLOT(sendMessage()));
//    connect(ui->btnSend, SIGNAL(clicked()), this, SLOT(Test()));

    //Su kien ket noi Socket thanh cong

    connect(socket, SIGNAL(connected()), this, SLOT(setConnected()));

    //Su kien ngat ket noi

    connect(socket, SIGNAL(disconnected()), this, SLOT(setDisconnected()));

    //Su kien san sang nhan du lieu

    connect(socket, SIGNAL(readyRead()), this, SLOT(receiveMessage()));
//    connect(socket, SIGNAL(readyRead()), this, SLOT(Test()));


    //Ban dau chua ket noi

    setDisconnected();
}

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
    CNMEAParser nmea;
    QByteArray bytes = socket->readAll();
    char* Sample = bytes.data();
    qDebug() << Sample;
    QList<QByteArray> nmea_data = bytes.split(',');
    QString cmd = nmea_data.value(0);
    nmea.ProcessNMEABuffer((char *)Sample, (int)strlen(Sample));

    if (cmd == "$GPRMC")
    {
        CNMEAParserData::RMC_DATA_T rmcdata;
        nmea.GetGPRMC(rmcdata);
        ui->GPS_Lat->setText(QString::number(rmcdata.m_dLatitude));
        ui->GPS_LatDir->setText(QString(rmcdata.m_dLatDir));
        ui->GPS_Long->setText(QString::number(rmcdata.m_dLongitude));
        ui->GPS_LongDir->setText(QString(rmcdata.m_dLongDir));

        ui->GPS_Hour->setValue(rmcdata.m_nHour);
        ui->GPS_Minute->setValue(rmcdata.m_nMinute);
        ui->GPS_Second->setValue(rmcdata.m_nSecond);

        ui->GPS_Day->setValue(rmcdata.m_nDay);
        ui->GPS_Month->setValue(rmcdata.m_nMonth);
        ui->GPS_Year->setValue(rmcdata.m_nYear);
    }

    else if(cmd == "$GPGGA")
    {
        CNMEAParserData::GGA_DATA_T ggadata;
        nmea.GetGPGGA(ggadata);

        ui->GPS_Lat->setText(QString::number(ggadata.m_dLatitude));
        ui->GPS_LatDir->setText(QString(ggadata.m_dLatDir));
        ui->GPS_Long->setText(QString::number(ggadata.m_dLongitude));
        ui->GPS_LongDir->setText(QString(ggadata.m_dLongDir));

    }
    else if (cmd == "RATLL")
    {

    }

    nmea.ResetData();
    bytes.clear();

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
}


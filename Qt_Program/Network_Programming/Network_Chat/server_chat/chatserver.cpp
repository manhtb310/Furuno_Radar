#include "chatserver.h"
#include "ui_chatserver.h"

#include <QHostAddress>
#include <QTcpSocket>
#include <QBuffer>

static const int DEFAULT_PORT = 6789;
int port;
QHostAddress server_addr;


ChatServer::ChatServer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ChatServer)
{
    ui->setupUi(this);
    server = new QTcpServer();

    connect(server, SIGNAL(newConnection()), this, SLOT(addConnection()));
//    server_addr = QHostAddress::LocalHost; //Lay dia chi may host
//    connect(ui->btnSend, SIGNAL(clicked()), this , SLOT(sendMessage()));

    server_addr = QHostAddress(ui->lineEditIP->text()); //Lay dia chi may host

    port = DEFAULT_PORT; //Cong mac dinh

    ui->lineEditIP->setText(server_addr.toString()); //Hien dia chi nay len lineEdit
    ui->lineEditIP->isEnabled();
    ui->lineEditPort->setText(QString::number(port));

}


ChatServer::~ChatServer()
{
    delete ui;
}

void ChatServer::on_btnStart_clicked()
{
    port = ui->lineEditPort->text().toInt();
    // Listen to connection
    bool b =  server->listen(server_addr, port);
    if (b)
    {
        qDebug("server started");
        ui->btnStart->setEnabled(false);
        ui->btnStop->setEnabled(true);

    }
    else
    {
        qDebug("Server cannot start!! Check IP or Port");
    }
}
void ChatServer::on_btnStop_clicked()
{
    if(server->isListening())
    {
        server->close();
        ui->btnStart->setEnabled(true);
        ui->btnStop->setEnabled(false);
    }
}

void ChatServer::addConnection()
{
    QTcpSocket* connection = server->nextPendingConnection();
    qDebug() << connection ;

    connections.append(connection);
    QBuffer *buffer = new QBuffer(this);
    buffer->open(QIODevice::ReadWrite);
    buffers.insert(connection,buffer);

    connect(connection, SIGNAL(disconnected()), this, SLOT(removeConnection()));
//    connect(connection, SIGNAL(on_btnSend_clicked()), this , SLOT(on_btnSend_clicked()));
    connect(connection, SIGNAL(readyRead()), this , SLOT(receiveMessage()));
    connect(ui->btnSend, SIGNAL(clicked()), this , SLOT(sendMessage()));

}

void ChatServer::removeConnection()
{
    QTcpSocket* socket = static_cast<QTcpSocket*>(sender());
    QBuffer *buffer = buffers.take(socket);
    buffer->close();
    buffer->deleteLater();
    connections.removeAll(socket);
    socket->deleteLater();
}


void ChatServer::receiveMessage()
{
    QTcpSocket *socket = static_cast<QTcpSocket *>(sender());
    QByteArray line2 = ui->lineEditText->text().toUtf8();
    QBuffer *buffer = buffers.value(socket);
//    qDebug() << socket->readAll();
    qint64 bytes = buffer->write(socket->readAll());

    buffer->seek(buffer->pos() -bytes);
//    qDebug() << buffer;

    while (buffer->canReadLine())
    {
        QByteArray line = buffer->readLine();
        foreach (QTcpSocket *connection, connections)
        {
//            qDebug() << line;
            connection->write(line);
            ui->textEdit->append(line);
        }
//        qDebug() << buffer->canReadLine();
    }

}
void ChatServer::sendMessage()
{
    QByteArray line = ui->lineEditText->text().toLatin1();
    foreach (QTcpSocket *connection, connections)
    {
        QBuffer *buffer = buffers.value(connection);
        qint64 bytes = buffer->write(line);
        buffer->seek(buffer->pos() -bytes);

//        qDebug() << connection ;
//        emit connected();
        QByteArray line2 = buffer->readLine();
        connection->write(line2);
        ui->textEdit->append(line2);

        qDebug() << line2 ;
    }
    ui->lineEditText->clear();

}


//void ChatServer::on_btnSend_clicked()
//{
//    QByteArray line = ui->lineEditText->text().toLatin1();
//    foreach (QTcpSocket *connection, connections)
//    {
//        qDebug() << connection ;
//        connection->write(line);
//        qDebug() << line ;
//    }
//    ui->lineEditText->clear();

//}

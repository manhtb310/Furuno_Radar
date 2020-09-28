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
    server_addr = QHostAddress::LocalHost; //Lay dia chi may host
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
    connections.append(connection);
    QBuffer *buffer = new QBuffer(this);
    buffer->open(QIODevice::ReadWrite);
    buffers.insert(connection,buffer);

    connect(connection, SIGNAL(disconnected()), this, SLOT(removeConnection()));
    connect(connection, SIGNAL(readyRead()), this , SLOT(receiveMessage()));
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
    QBuffer *buffer = buffers.value(socket);
    qint64 bytes = buffer->write(socket->readAll());
    buffer->seek(buffer->pos() -bytes);

    while (buffer->canReadLine())
    {
        QByteArray line = buffer->readLine();
        foreach (QTcpSocket *connection, connections)
        {
            connection->write(line);
        }
    }
}

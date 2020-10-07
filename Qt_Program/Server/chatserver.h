#ifndef CHATSERVER_H
#define CHATSERVER_H

#include <QWidget>
#include <QTcpServer>
#include <QList>
#include <QHash>
#include <QMainWindow>
//#include <QtPositioning/qgeopositioninfosource.h>


QT_BEGIN_NAMESPACE
namespace Ui { class ChatServer; }
QT_END_NAMESPACE


class QBuffer;
class QTcpSocket;
class QFile;
class Qstring;
class QFileDialog;
class QTimer;

class ChatServer : public QMainWindow
{
    Q_OBJECT

public:
    ChatServer(QWidget *parent = nullptr);
    ~ChatServer();
    int minimumUpdateInterval() const;

public slots:
    virtual void startUpdates();
    virtual void stopUpdates();
private:
    QTcpServer *server;
    QList<QTcpSocket*> connections;
    QHash<QTcpSocket*, QBuffer*> buffers;
    Ui::ChatServer *ui;
    QFile *logFile;
    QTimer *timer;
private slots:
    void on_btnStop_clicked();
    void on_btnStart_clicked();
private slots:
    void addConnection(); //Xu ly khi co mot client ket noi den
    void removeConnection(); //Xu ly khi co mot client ngat ket noi
    void receiveMessage(); //Nhan thong diep tu cac client
    void sendMessage();
    void readNextPosition();
    void OpenFile();    // Doc duong dan log file
};
#endif // CHATSERVER_H

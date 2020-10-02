#ifndef CLIENT_H
#define CLIENT_H
#include <QtCore>
#include <QMainWindow>
#include <QWidget>
#include <QBuffer>
#include <QTcpSocket>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>


QT_BEGIN_NAMESPACE
namespace Ui { class client; }
QT_END_NAMESPACE


class QFile;
class QTextStream;
class QTimer;

class client : public QMainWindow
{
    Q_OBJECT

public:
    explicit client(QWidget *parent = 0);
    ~client();
private slots:
    void on_btnOpen_clicked();
private slots:
    void setConnected();
    void setDisconnected();
    void toggleConnection();
    void sendMessage();
    void receiveMessage();
    void Test();
private:
    Ui::client *ui;
    QBuffer *buffer;
    QTcpSocket *socket;


};
#endif // CLIENT_H

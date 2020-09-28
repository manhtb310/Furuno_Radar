#include "chatserver.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChatServer w;
    w.show();
    return a.exec();
}

/********************************************************************************
** Form generated from reading UI file 'chatserver.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATSERVER_H
#define UI_CHATSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatServer
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditIP;
    QLineEdit *lineEditPort;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChatServer)
    {
        if (ChatServer->objectName().isEmpty())
            ChatServer->setObjectName(QStringLiteral("ChatServer"));
        ChatServer->resize(800, 600);
        centralwidget = new QWidget(ChatServer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 70, 81, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 140, 91, 41));
        lineEditIP = new QLineEdit(centralwidget);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));
        lineEditIP->setGeometry(QRect(220, 74, 431, 31));
        lineEditPort = new QLineEdit(centralwidget);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));
        lineEditPort->setGeometry(QRect(220, 140, 431, 31));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(220, 210, 431, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnStart = new QPushButton(horizontalLayoutWidget);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnStart->sizePolicy().hasHeightForWidth());
        btnStart->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btnStart, 0, Qt::AlignLeft);

        btnStop = new QPushButton(horizontalLayoutWidget);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        sizePolicy.setHeightForWidth(btnStop->sizePolicy().hasHeightForWidth());
        btnStop->setSizePolicy(sizePolicy);
        btnStop->setMaximumSize(QSize(211, 78));

        horizontalLayout->addWidget(btnStop, 0, Qt::AlignRight);

        ChatServer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChatServer);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        ChatServer->setMenuBar(menubar);
        statusbar = new QStatusBar(ChatServer);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ChatServer->setStatusBar(statusbar);

        retranslateUi(ChatServer);

        QMetaObject::connectSlotsByName(ChatServer);
    } // setupUi

    void retranslateUi(QMainWindow *ChatServer)
    {
        ChatServer->setWindowTitle(QApplication::translate("ChatServer", "ChatServer", Q_NULLPTR));
        label->setText(QApplication::translate("ChatServer", "IP Address", Q_NULLPTR));
        label_2->setText(QApplication::translate("ChatServer", "Port Number", Q_NULLPTR));
        btnStart->setText(QApplication::translate("ChatServer", "Start", Q_NULLPTR));
        btnStop->setText(QApplication::translate("ChatServer", "Stop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChatServer: public Ui_ChatServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATSERVER_H

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
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditText;
    QPushButton *btnSend;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEditText_2;
    QPushButton *btnOpen;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChatServer)
    {
        if (ChatServer->objectName().isEmpty())
            ChatServer->setObjectName(QStringLiteral("ChatServer"));
        ChatServer->resize(908, 820);
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

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(70, 360, 671, 81));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditText = new QLineEdit(horizontalLayoutWidget_2);
        lineEditText->setObjectName(QStringLiteral("lineEditText"));

        horizontalLayout_2->addWidget(lineEditText);

        btnSend = new QPushButton(horizontalLayoutWidget_2);
        btnSend->setObjectName(QStringLiteral("btnSend"));

        horizontalLayout_2->addWidget(btnSend);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(70, 480, 671, 81));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEditText_2 = new QLineEdit(horizontalLayoutWidget_3);
        lineEditText_2->setObjectName(QStringLiteral("lineEditText_2"));

        horizontalLayout_3->addWidget(lineEditText_2);

        btnOpen = new QPushButton(horizontalLayoutWidget_3);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));

        horizontalLayout_3->addWidget(btnOpen);

        ChatServer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChatServer);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 908, 22));
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
        lineEditIP->setText(QApplication::translate("ChatServer", "127.0.0.1", Q_NULLPTR));
        btnStart->setText(QApplication::translate("ChatServer", "Start", Q_NULLPTR));
        btnStop->setText(QApplication::translate("ChatServer", "Stop", Q_NULLPTR));
        label_3->setText(QApplication::translate("ChatServer", "Message", Q_NULLPTR));
        btnSend->setText(QApplication::translate("ChatServer", "Send", Q_NULLPTR));
        label_4->setText(QApplication::translate("ChatServer", "Log File", Q_NULLPTR));
        btnOpen->setText(QApplication::translate("ChatServer", "Open", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChatServer: public Ui_ChatServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATSERVER_H

/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_client
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEditMsg;
    QPushButton *btnSend;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditServer;
    QSpinBox *spinBoxPort;
    QLabel *label_2;
    QLineEdit *lineEditNick;
    QPushButton *btnConnect;
    QTextEdit *textEditChat;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEditFilepath;
    QPushButton *btnOpen;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *client)
    {
        if (client->objectName().isEmpty())
            client->setObjectName(QStringLiteral("client"));
        client->resize(775, 687);
        centralwidget = new QWidget(client);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 480, 741, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEditMsg = new QLineEdit(horizontalLayoutWidget);
        lineEditMsg->setObjectName(QStringLiteral("lineEditMsg"));
        lineEditMsg->setMaximumSize(QSize(587, 25));

        horizontalLayout->addWidget(lineEditMsg);

        btnSend = new QPushButton(horizontalLayoutWidget);
        btnSend->setObjectName(QStringLiteral("btnSend"));

        horizontalLayout->addWidget(btnSend);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 741, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignHCenter);

        lineEditServer = new QLineEdit(gridLayoutWidget);
        lineEditServer->setObjectName(QStringLiteral("lineEditServer"));

        gridLayout->addWidget(lineEditServer, 0, 1, 1, 1);

        spinBoxPort = new QSpinBox(gridLayoutWidget);
        spinBoxPort->setObjectName(QStringLiteral("spinBoxPort"));

        gridLayout->addWidget(spinBoxPort, 0, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEditNick = new QLineEdit(gridLayoutWidget);
        lineEditNick->setObjectName(QStringLiteral("lineEditNick"));

        gridLayout->addWidget(lineEditNick, 2, 1, 1, 1);

        btnConnect = new QPushButton(gridLayoutWidget);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));

        gridLayout->addWidget(btnConnect, 2, 2, 1, 1);

        textEditChat = new QTextEdit(centralwidget);
        textEditChat->setObjectName(QStringLiteral("textEditChat"));
        textEditChat->setGeometry(QRect(20, 140, 741, 331));
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 560, 741, 81));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4, 0, Qt::AlignRight);

        lineEditFilepath = new QLineEdit(horizontalLayoutWidget_2);
        lineEditFilepath->setObjectName(QStringLiteral("lineEditFilepath"));

        horizontalLayout_2->addWidget(lineEditFilepath);

        btnOpen = new QPushButton(horizontalLayoutWidget_2);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));

        horizontalLayout_2->addWidget(btnOpen);

        client->setCentralWidget(centralwidget);
        menubar = new QMenuBar(client);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 775, 22));
        client->setMenuBar(menubar);
        statusbar = new QStatusBar(client);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        client->setStatusBar(statusbar);

        retranslateUi(client);

        QMetaObject::connectSlotsByName(client);
    } // setupUi

    void retranslateUi(QMainWindow *client)
    {
        client->setWindowTitle(QApplication::translate("client", "client", Q_NULLPTR));
        label_3->setText(QApplication::translate("client", "Message", Q_NULLPTR));
        btnSend->setText(QApplication::translate("client", "Send", Q_NULLPTR));
        label->setText(QApplication::translate("client", "Server", Q_NULLPTR));
        label_2->setText(QApplication::translate("client", "Client", Q_NULLPTR));
        btnConnect->setText(QApplication::translate("client", "Connect", Q_NULLPTR));
        label_4->setText(QApplication::translate("client", "  File log ", Q_NULLPTR));
        btnOpen->setText(QApplication::translate("client", "Open", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class client: public Ui_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H

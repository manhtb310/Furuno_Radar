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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_client
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *main;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditNick;
    QPushButton *btnConnect;
    QLabel *label;
    QLineEdit *lineEditServer;
    QSpinBox *spinBoxPort;
    QLabel *label_2;
    QTextEdit *textEditChat;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEditMsg;
    QPushButton *btnSend;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEditFilepath;
    QPushButton *btnOpen;
    QWidget *radar;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QLineEdit *RA_LatDir;
    QLabel *label_6;
    QLineEdit *RA_CMD;
    QLineEdit *RA_Angle;
    QLabel *label_9;
    QLineEdit *RA_Long;
    QLineEdit *RA_Measure;
    QLabel *label_8;
    QLineEdit *RA_Lat;
    QLabel *label_10;
    QLineEdit *lineEditDistance;
    QLabel *label_7;
    QLineEdit *RA_LongDir;
    QLabel *label_5;
    QWidget *gps;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_19;
    QLineEdit *GPS_Lat;
    QLineEdit *GPS_LatDir;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_20;
    QLineEdit *GPS_Long;
    QLineEdit *GPS_LongDir;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_21;
    QSpinBox *GPS_Hour;
    QSpinBox *GPS_Minute;
    QSpinBox *GPS_Second;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_22;
    QSpinBox *GPS_Day;
    QSpinBox *GPS_Month;
    QSpinBox *GPS_Year;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_23;
    QSpinBox *GPS_Zone1;
    QSpinBox *GPS_Zone2;
    QSpinBox *GPS_Zone3;
    QSpinBox *GPS_Zone4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *client)
    {
        if (client->objectName().isEmpty())
            client->setObjectName(QStringLiteral("client"));
        client->resize(771, 812);
        centralwidget = new QWidget(client);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 711, 761));
        main = new QWidget();
        main->setObjectName(QStringLiteral("main"));
        gridLayoutWidget = new QWidget(main);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 30, 671, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditNick = new QLineEdit(gridLayoutWidget);
        lineEditNick->setObjectName(QStringLiteral("lineEditNick"));

        gridLayout->addWidget(lineEditNick, 1, 1, 1, 1);

        btnConnect = new QPushButton(gridLayoutWidget);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));

        gridLayout->addWidget(btnConnect, 1, 2, 1, 1);

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

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        textEditChat = new QTextEdit(main);
        textEditChat->setObjectName(QStringLiteral("textEditChat"));
        textEditChat->setGeometry(QRect(10, 160, 631, 351));
        horizontalLayoutWidget = new QWidget(main);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 540, 661, 71));
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

        horizontalLayoutWidget_2 = new QWidget(main);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 620, 661, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEditFilepath = new QLineEdit(horizontalLayoutWidget_2);
        lineEditFilepath->setObjectName(QStringLiteral("lineEditFilepath"));

        horizontalLayout_2->addWidget(lineEditFilepath);

        btnOpen = new QPushButton(horizontalLayoutWidget_2);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));

        horizontalLayout_2->addWidget(btnOpen);

        tabWidget->addTab(main, QString());
        radar = new QWidget();
        radar->setObjectName(QStringLiteral("radar"));
        gridLayoutWidget_2 = new QWidget(radar);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 671, 631));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 10, 0, 1, 1);

        RA_LatDir = new QLineEdit(gridLayoutWidget_2);
        RA_LatDir->setObjectName(QStringLiteral("RA_LatDir"));

        gridLayout_2->addWidget(RA_LatDir, 4, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        RA_CMD = new QLineEdit(gridLayoutWidget_2);
        RA_CMD->setObjectName(QStringLiteral("RA_CMD"));

        gridLayout_2->addWidget(RA_CMD, 10, 1, 1, 1);

        RA_Angle = new QLineEdit(gridLayoutWidget_2);
        RA_Angle->setObjectName(QStringLiteral("RA_Angle"));

        gridLayout_2->addWidget(RA_Angle, 8, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 8, 0, 1, 1);

        RA_Long = new QLineEdit(gridLayoutWidget_2);
        RA_Long->setObjectName(QStringLiteral("RA_Long"));

        gridLayout_2->addWidget(RA_Long, 6, 1, 1, 1);

        RA_Measure = new QLineEdit(gridLayoutWidget_2);
        RA_Measure->setObjectName(QStringLiteral("RA_Measure"));

        gridLayout_2->addWidget(RA_Measure, 9, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 7, 0, 1, 1);

        RA_Lat = new QLineEdit(gridLayoutWidget_2);
        RA_Lat->setObjectName(QStringLiteral("RA_Lat"));

        gridLayout_2->addWidget(RA_Lat, 4, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 9, 0, 1, 1);

        lineEditDistance = new QLineEdit(gridLayoutWidget_2);
        lineEditDistance->setObjectName(QStringLiteral("lineEditDistance"));

        gridLayout_2->addWidget(lineEditDistance, 7, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);

        RA_LongDir = new QLineEdit(gridLayoutWidget_2);
        RA_LongDir->setObjectName(QStringLiteral("RA_LongDir"));

        gridLayout_2->addWidget(RA_LongDir, 6, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setTextFormat(Qt::AutoText);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 2, 1, 1, 2);

        tabWidget->addTab(radar, QString());
        gps = new QWidget();
        gps->setObjectName(QStringLiteral("gps"));
        horizontalLayoutWidget_3 = new QWidget(gps);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 20, 661, 61));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(horizontalLayoutWidget_3);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_3->addWidget(label_19);

        GPS_Lat = new QLineEdit(horizontalLayoutWidget_3);
        GPS_Lat->setObjectName(QStringLiteral("GPS_Lat"));

        horizontalLayout_3->addWidget(GPS_Lat);

        GPS_LatDir = new QLineEdit(horizontalLayoutWidget_3);
        GPS_LatDir->setObjectName(QStringLiteral("GPS_LatDir"));

        horizontalLayout_3->addWidget(GPS_LatDir);

        horizontalLayoutWidget_4 = new QWidget(gps);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 100, 661, 61));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(horizontalLayoutWidget_4);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_4->addWidget(label_20);

        GPS_Long = new QLineEdit(horizontalLayoutWidget_4);
        GPS_Long->setObjectName(QStringLiteral("GPS_Long"));

        horizontalLayout_4->addWidget(GPS_Long);

        GPS_LongDir = new QLineEdit(horizontalLayoutWidget_4);
        GPS_LongDir->setObjectName(QStringLiteral("GPS_LongDir"));

        horizontalLayout_4->addWidget(GPS_LongDir);

        horizontalLayoutWidget_5 = new QWidget(gps);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 180, 661, 61));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(horizontalLayoutWidget_5);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_5->addWidget(label_21);

        GPS_Hour = new QSpinBox(horizontalLayoutWidget_5);
        GPS_Hour->setObjectName(QStringLiteral("GPS_Hour"));

        horizontalLayout_5->addWidget(GPS_Hour);

        GPS_Minute = new QSpinBox(horizontalLayoutWidget_5);
        GPS_Minute->setObjectName(QStringLiteral("GPS_Minute"));

        horizontalLayout_5->addWidget(GPS_Minute);

        GPS_Second = new QSpinBox(horizontalLayoutWidget_5);
        GPS_Second->setObjectName(QStringLiteral("GPS_Second"));
        GPS_Second->setMaximum(2050);

        horizontalLayout_5->addWidget(GPS_Second);

        horizontalLayoutWidget_6 = new QWidget(gps);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 260, 661, 61));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(horizontalLayoutWidget_6);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_6->addWidget(label_22);

        GPS_Day = new QSpinBox(horizontalLayoutWidget_6);
        GPS_Day->setObjectName(QStringLiteral("GPS_Day"));

        horizontalLayout_6->addWidget(GPS_Day);

        GPS_Month = new QSpinBox(horizontalLayoutWidget_6);
        GPS_Month->setObjectName(QStringLiteral("GPS_Month"));

        horizontalLayout_6->addWidget(GPS_Month);

        GPS_Year = new QSpinBox(horizontalLayoutWidget_6);
        GPS_Year->setObjectName(QStringLiteral("GPS_Year"));

        horizontalLayout_6->addWidget(GPS_Year);

        horizontalLayoutWidget_7 = new QWidget(gps);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(10, 340, 661, 61));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(horizontalLayoutWidget_7);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_7->addWidget(label_23);

        GPS_Zone1 = new QSpinBox(horizontalLayoutWidget_7);
        GPS_Zone1->setObjectName(QStringLiteral("GPS_Zone1"));

        horizontalLayout_7->addWidget(GPS_Zone1);

        GPS_Zone2 = new QSpinBox(horizontalLayoutWidget_7);
        GPS_Zone2->setObjectName(QStringLiteral("GPS_Zone2"));

        horizontalLayout_7->addWidget(GPS_Zone2);

        GPS_Zone3 = new QSpinBox(horizontalLayoutWidget_7);
        GPS_Zone3->setObjectName(QStringLiteral("GPS_Zone3"));

        horizontalLayout_7->addWidget(GPS_Zone3);

        GPS_Zone4 = new QSpinBox(horizontalLayoutWidget_7);
        GPS_Zone4->setObjectName(QStringLiteral("GPS_Zone4"));

        horizontalLayout_7->addWidget(GPS_Zone4);

        tabWidget->addTab(gps, QString());
        client->setCentralWidget(centralwidget);
        menubar = new QMenuBar(client);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 771, 22));
        client->setMenuBar(menubar);
        statusbar = new QStatusBar(client);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        client->setStatusBar(statusbar);

        retranslateUi(client);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(client);
    } // setupUi

    void retranslateUi(QMainWindow *client)
    {
        client->setWindowTitle(QApplication::translate("client", "client", Q_NULLPTR));
        btnConnect->setText(QApplication::translate("client", "Connect", Q_NULLPTR));
        label->setText(QApplication::translate("client", "Server", Q_NULLPTR));
        label_2->setText(QApplication::translate("client", "Client", Q_NULLPTR));
        label_3->setText(QApplication::translate("client", "Message", Q_NULLPTR));
        btnSend->setText(QApplication::translate("client", "Send", Q_NULLPTR));
        label_4->setText(QApplication::translate("client", "  File log ", Q_NULLPTR));
        btnOpen->setText(QApplication::translate("client", "Open", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(main), QApplication::translate("client", "Main", Q_NULLPTR));
        label_11->setText(QApplication::translate("client", "ID CMD", Q_NULLPTR));
        label_6->setText(QApplication::translate("client", "Latitude(N/S)", Q_NULLPTR));
        label_9->setText(QApplication::translate("client", "North Angle", Q_NULLPTR));
        label_8->setText(QApplication::translate("client", "Distance", Q_NULLPTR));
        label_10->setText(QApplication::translate("client", "Thang do", Q_NULLPTR));
        label_7->setText(QApplication::translate("client", "Longitude (E/W)", Q_NULLPTR));
        label_5->setText(QApplication::translate("client", "BAN TIN TOA DO MUC TIEU", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(radar), QApplication::translate("client", "RADAR", Q_NULLPTR));
        label_19->setText(QApplication::translate("client", "Latitude (S/N)    ", Q_NULLPTR));
        label_20->setText(QApplication::translate("client", "Longitude (E/W)", Q_NULLPTR));
        label_21->setText(QApplication::translate("client", "UTC Time", Q_NULLPTR));
        label_22->setText(QApplication::translate("client", "Day", Q_NULLPTR));
        label_23->setText(QApplication::translate("client", "Local Zone", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(gps), QApplication::translate("client", "GPS", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class client: public Ui_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H

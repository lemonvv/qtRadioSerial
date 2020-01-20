/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QComboBox *comboBox_radioLanguage;
    QComboBox *comboBox_radioBrand;
    QComboBox *comboBox_radioYear;
    QComboBox *comboBox_radioMonth;
    QLineEdit *lineEdit_radioNumber;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_radioWriteNumber;
    QWidget *Tab2;
    QGroupBox *groupBox_4;
    QSpinBox *spinBox_h_1;
    QSpinBox *spinBox_h_2;
    QSpinBox *spinBox_h_3;
    QSpinBox *spinBox_h_4;
    QSpinBox *spinBox_h_5;
    QSpinBox *spinBox_h_6;
    QPushButton *pushButton_radioPwrHh;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QGroupBox *groupBox_5;
    QSpinBox *spinBox_l_1;
    QSpinBox *spinBox_l_2;
    QSpinBox *spinBox_l_3;
    QSpinBox *spinBox_l_4;
    QSpinBox *spinBox_l_5;
    QSpinBox *spinBox_l_6;
    QPushButton *pushButton_radioPwrLh;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QGroupBox *groupBox_6;
    QSpinBox *spinBox_h_7;
    QSpinBox *spinBox_h_8;
    QPushButton *pushButton_radioPwrHl;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QSpinBox *spinBox_h_9;
    QSpinBox *spinBox_h_10;
    QSpinBox *spinBox_h_11;
    QSpinBox *spinBox_h_12;
    QGroupBox *groupBox_7;
    QSpinBox *spinBox_l_7;
    QSpinBox *spinBox_l_8;
    QSpinBox *spinBox_l_9;
    QSpinBox *spinBox_l_10;
    QSpinBox *spinBox_l_11;
    QSpinBox *spinBox_l_12;
    QPushButton *pushButton_radioPwrLl;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QPushButton *pushButton_radioTestMode;
    QComboBox *comboBox_radioType;
    QPushButton *pushButton_radioReadPower;
    QGroupBox *groupBox;
    QComboBox *comboBox_serialPort;
    QComboBox *comboBox_serialBaud;
    QPushButton *pushButton_openSerial;
    QPushButton *pushButton_radioConfig;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_cleanRecv;
    QPushButton *pushButton_radioSave;
    QTextBrowser *textBrowser_serialRxBuf;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(650, 450);
        Widget->setMinimumSize(QSize(611, 450));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 70, 651, 221));
        tabWidget->setLayoutDirection(Qt::RightToLeft);
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 20, 651, 81));
        groupBox_2->setMinimumSize(QSize(611, 61));
        comboBox_radioLanguage = new QComboBox(groupBox_2);
        comboBox_radioLanguage->addItem(QString());
        comboBox_radioLanguage->addItem(QString());
        comboBox_radioLanguage->setObjectName(QStringLiteral("comboBox_radioLanguage"));
        comboBox_radioLanguage->setGeometry(QRect(60, 30, 71, 22));
        comboBox_radioLanguage->setLayoutDirection(Qt::LeftToRight);
        comboBox_radioBrand = new QComboBox(groupBox_2);
        comboBox_radioBrand->addItem(QString());
        comboBox_radioBrand->addItem(QString());
        comboBox_radioBrand->addItem(QString());
        comboBox_radioBrand->addItem(QString());
        comboBox_radioBrand->addItem(QString());
        comboBox_radioBrand->addItem(QString());
        comboBox_radioBrand->addItem(QString());
        comboBox_radioBrand->setObjectName(QStringLiteral("comboBox_radioBrand"));
        comboBox_radioBrand->setGeometry(QRect(170, 30, 81, 22));
        comboBox_radioBrand->setLayoutDirection(Qt::LeftToRight);
        comboBox_radioYear = new QComboBox(groupBox_2);
        comboBox_radioYear->setObjectName(QStringLiteral("comboBox_radioYear"));
        comboBox_radioYear->setGeometry(QRect(290, 30, 69, 22));
        comboBox_radioYear->setLayoutDirection(Qt::LeftToRight);
        comboBox_radioMonth = new QComboBox(groupBox_2);
        comboBox_radioMonth->addItem(QString());
        comboBox_radioMonth->addItem(QString());
        comboBox_radioMonth->addItem(QString());
        comboBox_radioMonth->addItem(QString());
        comboBox_radioMonth->addItem(QString());
        comboBox_radioMonth->addItem(QString());
        comboBox_radioMonth->addItem(QString());
        comboBox_radioMonth->addItem(QString());
        comboBox_radioMonth->addItem(QString());
        comboBox_radioMonth->addItem(QString());
        comboBox_radioMonth->addItem(QString());
        comboBox_radioMonth->addItem(QString());
        comboBox_radioMonth->setObjectName(QStringLiteral("comboBox_radioMonth"));
        comboBox_radioMonth->setGeometry(QRect(390, 30, 69, 22));
        comboBox_radioMonth->setLayoutDirection(Qt::LeftToRight);
        lineEdit_radioNumber = new QLineEdit(groupBox_2);
        lineEdit_radioNumber->setObjectName(QStringLiteral("lineEdit_radioNumber"));
        lineEdit_radioNumber->setGeometry(QRect(520, 30, 71, 20));
        lineEdit_radioNumber->setLayoutDirection(Qt::LeftToRight);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 31, 20));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 30, 31, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(270, 30, 16, 21));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(370, 30, 16, 21));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(470, 30, 41, 20));
        pushButton_radioWriteNumber = new QPushButton(tab);
        pushButton_radioWriteNumber->setObjectName(QStringLiteral("pushButton_radioWriteNumber"));
        pushButton_radioWriteNumber->setGeometry(QRect(560, 130, 75, 23));
        pushButton_radioWriteNumber->setLayoutDirection(Qt::LeftToRight);
        tabWidget->addTab(tab, QString());
        Tab2 = new QWidget();
        Tab2->setObjectName(QStringLiteral("Tab2"));
        groupBox_4 = new QGroupBox(Tab2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 0, 241, 91));
        spinBox_h_1 = new QSpinBox(groupBox_4);
        spinBox_h_1->setObjectName(QStringLiteral("spinBox_h_1"));
        spinBox_h_1->setGeometry(QRect(0, 30, 42, 22));
        spinBox_h_1->setLayoutDirection(Qt::LeftToRight);
        spinBox_h_2 = new QSpinBox(groupBox_4);
        spinBox_h_2->setObjectName(QStringLiteral("spinBox_h_2"));
        spinBox_h_2->setGeometry(QRect(40, 30, 42, 22));
        spinBox_h_2->setLayoutDirection(Qt::LeftToRight);
        spinBox_h_3 = new QSpinBox(groupBox_4);
        spinBox_h_3->setObjectName(QStringLiteral("spinBox_h_3"));
        spinBox_h_3->setGeometry(QRect(80, 30, 42, 22));
        spinBox_h_3->setLayoutDirection(Qt::LeftToRight);
        spinBox_h_4 = new QSpinBox(groupBox_4);
        spinBox_h_4->setObjectName(QStringLiteral("spinBox_h_4"));
        spinBox_h_4->setGeometry(QRect(120, 30, 42, 22));
        spinBox_h_4->setLayoutDirection(Qt::LeftToRight);
        spinBox_h_5 = new QSpinBox(groupBox_4);
        spinBox_h_5->setObjectName(QStringLiteral("spinBox_h_5"));
        spinBox_h_5->setGeometry(QRect(160, 30, 42, 22));
        spinBox_h_5->setLayoutDirection(Qt::LeftToRight);
        spinBox_h_6 = new QSpinBox(groupBox_4);
        spinBox_h_6->setObjectName(QStringLiteral("spinBox_h_6"));
        spinBox_h_6->setGeometry(QRect(200, 30, 42, 22));
        spinBox_h_6->setLayoutDirection(Qt::LeftToRight);
        pushButton_radioPwrHh = new QPushButton(groupBox_4);
        pushButton_radioPwrHh->setObjectName(QStringLiteral("pushButton_radioPwrHh"));
        pushButton_radioPwrHh->setGeometry(QRect(10, 60, 221, 23));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 10, 16, 16));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 10, 16, 16));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(90, 10, 16, 16));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(130, 10, 16, 16));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(170, 10, 16, 16));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(210, 10, 16, 16));
        groupBox_5 = new QGroupBox(Tab2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 90, 241, 91));
        spinBox_l_1 = new QSpinBox(groupBox_5);
        spinBox_l_1->setObjectName(QStringLiteral("spinBox_l_1"));
        spinBox_l_1->setGeometry(QRect(0, 30, 42, 22));
        spinBox_l_1->setLayoutDirection(Qt::LeftToRight);
        spinBox_l_2 = new QSpinBox(groupBox_5);
        spinBox_l_2->setObjectName(QStringLiteral("spinBox_l_2"));
        spinBox_l_2->setGeometry(QRect(40, 30, 42, 22));
        spinBox_l_2->setLayoutDirection(Qt::LeftToRight);
        spinBox_l_3 = new QSpinBox(groupBox_5);
        spinBox_l_3->setObjectName(QStringLiteral("spinBox_l_3"));
        spinBox_l_3->setGeometry(QRect(80, 30, 42, 22));
        spinBox_l_3->setLayoutDirection(Qt::LeftToRight);
        spinBox_l_4 = new QSpinBox(groupBox_5);
        spinBox_l_4->setObjectName(QStringLiteral("spinBox_l_4"));
        spinBox_l_4->setGeometry(QRect(120, 30, 42, 22));
        spinBox_l_4->setLayoutDirection(Qt::LeftToRight);
        spinBox_l_5 = new QSpinBox(groupBox_5);
        spinBox_l_5->setObjectName(QStringLiteral("spinBox_l_5"));
        spinBox_l_5->setGeometry(QRect(160, 30, 42, 22));
        spinBox_l_5->setLayoutDirection(Qt::LeftToRight);
        spinBox_l_6 = new QSpinBox(groupBox_5);
        spinBox_l_6->setObjectName(QStringLiteral("spinBox_l_6"));
        spinBox_l_6->setGeometry(QRect(200, 30, 42, 22));
        spinBox_l_6->setLayoutDirection(Qt::LeftToRight);
        pushButton_radioPwrLh = new QPushButton(groupBox_5);
        pushButton_radioPwrLh->setObjectName(QStringLiteral("pushButton_radioPwrLh"));
        pushButton_radioPwrLh->setGeometry(QRect(10, 60, 221, 23));
        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 10, 16, 16));
        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(50, 10, 16, 16));
        label_22 = new QLabel(groupBox_5);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(90, 10, 16, 16));
        label_23 = new QLabel(groupBox_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(130, 10, 16, 16));
        label_24 = new QLabel(groupBox_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(170, 10, 16, 16));
        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(210, 10, 16, 16));
        groupBox_6 = new QGroupBox(Tab2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(240, 0, 241, 91));
        spinBox_h_7 = new QSpinBox(groupBox_6);
        spinBox_h_7->setObjectName(QStringLiteral("spinBox_h_7"));
        spinBox_h_7->setGeometry(QRect(0, 30, 42, 22));
        spinBox_h_7->setLayoutDirection(Qt::LeftToRight);
        spinBox_h_8 = new QSpinBox(groupBox_6);
        spinBox_h_8->setObjectName(QStringLiteral("spinBox_h_8"));
        spinBox_h_8->setGeometry(QRect(40, 30, 42, 22));
        spinBox_h_8->setLayoutDirection(Qt::LeftToRight);
        pushButton_radioPwrHl = new QPushButton(groupBox_6);
        pushButton_radioPwrHl->setObjectName(QStringLiteral("pushButton_radioPwrHl"));
        pushButton_radioPwrHl->setGeometry(QRect(10, 60, 221, 23));
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 10, 16, 16));
        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(50, 10, 16, 16));
        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(90, 10, 16, 16));
        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(130, 10, 16, 16));
        label_18 = new QLabel(groupBox_6);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(170, 10, 16, 16));
        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(210, 10, 16, 16));
        spinBox_h_9 = new QSpinBox(groupBox_6);
        spinBox_h_9->setObjectName(QStringLiteral("spinBox_h_9"));
        spinBox_h_9->setGeometry(QRect(80, 30, 42, 22));
        spinBox_h_9->setLayoutDirection(Qt::LeftToRight);
        spinBox_h_10 = new QSpinBox(groupBox_6);
        spinBox_h_10->setObjectName(QStringLiteral("spinBox_h_10"));
        spinBox_h_10->setGeometry(QRect(120, 30, 42, 22));
        spinBox_h_10->setLayoutDirection(Qt::LeftToRight);
        spinBox_h_11 = new QSpinBox(groupBox_6);
        spinBox_h_11->setObjectName(QStringLiteral("spinBox_h_11"));
        spinBox_h_11->setGeometry(QRect(160, 30, 42, 22));
        spinBox_h_11->setLayoutDirection(Qt::LeftToRight);
        spinBox_h_12 = new QSpinBox(groupBox_6);
        spinBox_h_12->setObjectName(QStringLiteral("spinBox_h_12"));
        spinBox_h_12->setGeometry(QRect(200, 30, 42, 22));
        spinBox_h_12->setLayoutDirection(Qt::LeftToRight);
        groupBox_7 = new QGroupBox(Tab2);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(240, 90, 241, 91));
        spinBox_l_7 = new QSpinBox(groupBox_7);
        spinBox_l_7->setObjectName(QStringLiteral("spinBox_l_7"));
        spinBox_l_7->setGeometry(QRect(0, 30, 42, 22));
        spinBox_l_7->setLayoutDirection(Qt::LeftToRight);
        spinBox_l_8 = new QSpinBox(groupBox_7);
        spinBox_l_8->setObjectName(QStringLiteral("spinBox_l_8"));
        spinBox_l_8->setGeometry(QRect(40, 30, 42, 22));
        spinBox_l_8->setLayoutDirection(Qt::LeftToRight);
        spinBox_l_9 = new QSpinBox(groupBox_7);
        spinBox_l_9->setObjectName(QStringLiteral("spinBox_l_9"));
        spinBox_l_9->setGeometry(QRect(80, 30, 42, 22));
        spinBox_l_9->setLayoutDirection(Qt::LeftToRight);
        spinBox_l_10 = new QSpinBox(groupBox_7);
        spinBox_l_10->setObjectName(QStringLiteral("spinBox_l_10"));
        spinBox_l_10->setGeometry(QRect(120, 30, 42, 22));
        spinBox_l_10->setLayoutDirection(Qt::LeftToRight);
        spinBox_l_11 = new QSpinBox(groupBox_7);
        spinBox_l_11->setObjectName(QStringLiteral("spinBox_l_11"));
        spinBox_l_11->setGeometry(QRect(160, 30, 42, 22));
        spinBox_l_11->setLayoutDirection(Qt::LeftToRight);
        spinBox_l_12 = new QSpinBox(groupBox_7);
        spinBox_l_12->setObjectName(QStringLiteral("spinBox_l_12"));
        spinBox_l_12->setGeometry(QRect(200, 30, 42, 22));
        spinBox_l_12->setLayoutDirection(Qt::LeftToRight);
        pushButton_radioPwrLl = new QPushButton(groupBox_7);
        pushButton_radioPwrLl->setObjectName(QStringLiteral("pushButton_radioPwrLl"));
        pushButton_radioPwrLl->setGeometry(QRect(10, 60, 221, 23));
        label_26 = new QLabel(groupBox_7);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 10, 16, 16));
        label_27 = new QLabel(groupBox_7);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(50, 10, 16, 16));
        label_28 = new QLabel(groupBox_7);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(90, 10, 16, 16));
        label_29 = new QLabel(groupBox_7);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(130, 10, 16, 16));
        label_30 = new QLabel(groupBox_7);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(170, 10, 16, 16));
        label_31 = new QLabel(groupBox_7);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(210, 10, 16, 16));
        pushButton_radioTestMode = new QPushButton(Tab2);
        pushButton_radioTestMode->setObjectName(QStringLiteral("pushButton_radioTestMode"));
        pushButton_radioTestMode->setGeometry(QRect(560, 150, 75, 23));
        pushButton_radioTestMode->setLayoutDirection(Qt::LeftToRight);
        comboBox_radioType = new QComboBox(Tab2);
        comboBox_radioType->addItem(QString());
        comboBox_radioType->addItem(QString());
        comboBox_radioType->setObjectName(QStringLiteral("comboBox_radioType"));
        comboBox_radioType->setGeometry(QRect(560, 60, 69, 22));
        comboBox_radioType->setLayoutDirection(Qt::LeftToRight);
        pushButton_radioReadPower = new QPushButton(Tab2);
        pushButton_radioReadPower->setObjectName(QStringLiteral("pushButton_radioReadPower"));
        pushButton_radioReadPower->setGeometry(QRect(560, 100, 75, 23));
        tabWidget->addTab(Tab2, QString());
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 651, 61));
        groupBox->setMinimumSize(QSize(611, 61));
        comboBox_serialPort = new QComboBox(groupBox);
        comboBox_serialPort->setObjectName(QStringLiteral("comboBox_serialPort"));
        comboBox_serialPort->setGeometry(QRect(60, 20, 91, 22));
        comboBox_serialBaud = new QComboBox(groupBox);
        comboBox_serialBaud->addItem(QString());
        comboBox_serialBaud->addItem(QString());
        comboBox_serialBaud->addItem(QString());
        comboBox_serialBaud->addItem(QString());
        comboBox_serialBaud->setObjectName(QStringLiteral("comboBox_serialBaud"));
        comboBox_serialBaud->setGeometry(QRect(230, 20, 69, 22));
        pushButton_openSerial = new QPushButton(groupBox);
        pushButton_openSerial->setObjectName(QStringLiteral("pushButton_openSerial"));
        pushButton_openSerial->setGeometry(QRect(370, 20, 75, 23));
        pushButton_radioConfig = new QPushButton(groupBox);
        pushButton_radioConfig->setObjectName(QStringLiteral("pushButton_radioConfig"));
        pushButton_radioConfig->setGeometry(QRect(510, 20, 75, 23));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 31, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 20, 51, 20));
        pushButton_cleanRecv = new QPushButton(Widget);
        pushButton_cleanRecv->setObjectName(QStringLiteral("pushButton_cleanRecv"));
        pushButton_cleanRecv->setGeometry(QRect(560, 410, 75, 23));
        pushButton_radioSave = new QPushButton(Widget);
        pushButton_radioSave->setObjectName(QStringLiteral("pushButton_radioSave"));
        pushButton_radioSave->setGeometry(QRect(560, 370, 75, 23));
        textBrowser_serialRxBuf = new QTextBrowser(Widget);
        textBrowser_serialRxBuf->setObjectName(QStringLiteral("textBrowser_serialRxBuf"));
        textBrowser_serialRxBuf->setGeometry(QRect(0, 270, 551, 181));
        textBrowser_serialRxBuf->setMinimumSize(QSize(0, 0));

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        groupBox_2->setTitle(QApplication::translate("Widget", "\347\224\265\345\217\260\351\205\215\347\275\256", nullptr));
        comboBox_radioLanguage->setItemText(0, QApplication::translate("Widget", "\344\270\255\346\226\207", nullptr));
        comboBox_radioLanguage->setItemText(1, QApplication::translate("Widget", "English", nullptr));

        comboBox_radioBrand->setItemText(0, QApplication::translate("Widget", "\351\200\232\347\224\250", nullptr));
        comboBox_radioBrand->setItemText(1, QApplication::translate("Widget", "\344\270\255\346\265\267\350\276\276", nullptr));
        comboBox_radioBrand->setItemText(2, QApplication::translate("Widget", "\344\270\255\347\272\254", nullptr));
        comboBox_radioBrand->setItemText(3, QApplication::translate("Widget", "\346\213\223\346\231\256\345\272\267", nullptr));
        comboBox_radioBrand->setItemText(4, QApplication::translate("Widget", "\345\256\276\345\276\227", nullptr));
        comboBox_radioBrand->setItemText(5, QApplication::translate("Widget", "\345\205\211\350\260\261", nullptr));
        comboBox_radioBrand->setItemText(6, QApplication::translate("Widget", "\345\244\251\345\256\235", nullptr));

        comboBox_radioMonth->setItemText(0, QApplication::translate("Widget", "01", nullptr));
        comboBox_radioMonth->setItemText(1, QApplication::translate("Widget", "02", nullptr));
        comboBox_radioMonth->setItemText(2, QApplication::translate("Widget", "03", nullptr));
        comboBox_radioMonth->setItemText(3, QApplication::translate("Widget", "04", nullptr));
        comboBox_radioMonth->setItemText(4, QApplication::translate("Widget", "05", nullptr));
        comboBox_radioMonth->setItemText(5, QApplication::translate("Widget", "06", nullptr));
        comboBox_radioMonth->setItemText(6, QApplication::translate("Widget", "07", nullptr));
        comboBox_radioMonth->setItemText(7, QApplication::translate("Widget", "08", nullptr));
        comboBox_radioMonth->setItemText(8, QApplication::translate("Widget", "09", nullptr));
        comboBox_radioMonth->setItemText(9, QApplication::translate("Widget", "10", nullptr));
        comboBox_radioMonth->setItemText(10, QApplication::translate("Widget", "11", nullptr));
        comboBox_radioMonth->setItemText(11, QApplication::translate("Widget", "12", nullptr));

        label_3->setText(QApplication::translate("Widget", "\350\257\255\350\250\200:", nullptr));
        label_4->setText(QApplication::translate("Widget", "\345\223\201\347\211\214:", nullptr));
        label_5->setText(QApplication::translate("Widget", "\345\271\264:", nullptr));
        label_6->setText(QApplication::translate("Widget", "\346\234\210:", nullptr));
        label_7->setText(QApplication::translate("Widget", "\345\272\217\345\210\227\345\217\267:", nullptr));
        pushButton_radioWriteNumber->setText(QApplication::translate("Widget", "\345\206\231\345\217\267", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "\345\206\231\345\217\267", nullptr));
        groupBox_4->setTitle(QApplication::translate("Widget", "\351\253\230", nullptr));
        pushButton_radioPwrHh->setText(QApplication::translate("Widget", "\351\253\2301-6", nullptr));
        label_8->setText(QApplication::translate("Widget", "1", nullptr));
        label_9->setText(QApplication::translate("Widget", "2", nullptr));
        label_10->setText(QApplication::translate("Widget", "3", nullptr));
        label_11->setText(QApplication::translate("Widget", "4", nullptr));
        label_12->setText(QApplication::translate("Widget", "5", nullptr));
        label_13->setText(QApplication::translate("Widget", "6", nullptr));
        groupBox_5->setTitle(QApplication::translate("Widget", "\344\275\216", nullptr));
        pushButton_radioPwrLh->setText(QApplication::translate("Widget", "\344\275\2161-6", nullptr));
        label_20->setText(QApplication::translate("Widget", "1", nullptr));
        label_21->setText(QApplication::translate("Widget", "2", nullptr));
        label_22->setText(QApplication::translate("Widget", "3", nullptr));
        label_23->setText(QApplication::translate("Widget", "4", nullptr));
        label_24->setText(QApplication::translate("Widget", "5", nullptr));
        label_25->setText(QApplication::translate("Widget", "6", nullptr));
        groupBox_6->setTitle(QApplication::translate("Widget", "\351\253\230", nullptr));
        pushButton_radioPwrHl->setText(QApplication::translate("Widget", "\351\253\2307-12", nullptr));
        label_14->setText(QApplication::translate("Widget", "7", nullptr));
        label_15->setText(QApplication::translate("Widget", "8", nullptr));
        label_16->setText(QApplication::translate("Widget", "9", nullptr));
        label_17->setText(QApplication::translate("Widget", "10", nullptr));
        label_18->setText(QApplication::translate("Widget", "11", nullptr));
        label_19->setText(QApplication::translate("Widget", "12", nullptr));
        groupBox_7->setTitle(QApplication::translate("Widget", "\344\275\216", nullptr));
        pushButton_radioPwrLl->setText(QApplication::translate("Widget", "\344\275\2167-12", nullptr));
        label_26->setText(QApplication::translate("Widget", "7", nullptr));
        label_27->setText(QApplication::translate("Widget", "8", nullptr));
        label_28->setText(QApplication::translate("Widget", "9", nullptr));
        label_29->setText(QApplication::translate("Widget", "10", nullptr));
        label_30->setText(QApplication::translate("Widget", "11", nullptr));
        label_31->setText(QApplication::translate("Widget", "12", nullptr));
        pushButton_radioTestMode->setText(QApplication::translate("Widget", "\350\277\233\345\205\245\346\265\213\350\257\225", nullptr));
        comboBox_radioType->setItemText(0, QApplication::translate("Widget", "\351\253\230\345\212\237\347\216\207", nullptr));
        comboBox_radioType->setItemText(1, QApplication::translate("Widget", "\344\275\216\345\212\237\347\216\207", nullptr));

        pushButton_radioReadPower->setText(QApplication::translate("Widget", "\350\257\273\345\217\226", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Tab2), QApplication::translate("Widget", "\351\242\221\347\202\271", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "\344\270\262\345\217\243\351\205\215\347\275\256", nullptr));
        comboBox_serialBaud->setItemText(0, QApplication::translate("Widget", "19200", nullptr));
        comboBox_serialBaud->setItemText(1, QApplication::translate("Widget", "9600", nullptr));
        comboBox_serialBaud->setItemText(2, QApplication::translate("Widget", "38400", nullptr));
        comboBox_serialBaud->setItemText(3, QApplication::translate("Widget", "115200", nullptr));

        pushButton_openSerial->setText(QApplication::translate("Widget", "\346\211\223\345\274\200", nullptr));
        pushButton_radioConfig->setText(QApplication::translate("Widget", "\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("Widget", "\347\253\257\345\217\243:", nullptr));
        label_2->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207:", nullptr));
        pushButton_cleanRecv->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\347\274\223\345\255\230", nullptr));
        pushButton_radioSave->setText(QApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

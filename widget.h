#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QDebug"
#include "QtSerialPort/QSerialPort"
#include "QtSerialPort/QSerialPortInfo"
#include "QTimer"
#include <QMessageBox>
#include <QDateTime>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void searchSerial();
    void show_Widgets();
    void setBoxValue();
    void radio_ReadPower_Data(QString mbuf);
    int radio_ReadPower_Flg;

private slots:
    void on_pushButton_openSerial_clicked();

    void on_pushButton_cleanRecv_clicked();

    void on_pushButton_radioConfig_clicked();

    void on_pushButton_radioSave_clicked();

    void on_pushButton_radioWriteNumber_clicked();

    void handleSerialError(QSerialPort::SerialPortError error);

    void timeUpSerial();

    void recv_data(void);

    void rxtimeSearchData(void);

    void on_pushButton_radioPwrHh_clicked();

    void on_pushButton_radioPwrHl_clicked();

    void on_pushButton_radioPwrLh_clicked();

    void on_pushButton_radioPwrLl_clicked();

    void on_pushButton_radioTestMode_clicked();

    void radio_txData();


    void on_pushButton_radioReadPower_clicked();

private:
    Ui::Widget *ui;
    QSerialPort *mserial;
    QTimer *timer;
    QTimer *rxtimer;
    QTimer *radioTxmodeTimer;
    QByteArray rxSerialbuf;
};

#endif // WIDGET_H

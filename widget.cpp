#include "widget.h"
#include "ui_widget.h"


#define SERIAL_TIME 1000

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle(tr("超级电台测试版本 V1.0.1"));
    timer = new QTimer(this);   //扫描串口定时器
    rxtimer = new QTimer(this); //接收数据定时器
    radioTxmodeTimer = new QTimer(this);    //测试模式

    mserial = new QSerialPort(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(timeUpSerial()));  //连接串口扫描函数
    connect(rxtimer,SIGNAL(timeout()),this,SLOT(rxtimeSearchData()));    //连接数据接收函数
    connect(radioTxmodeTimer,SIGNAL(timeout()),this,SLOT(radio_txData()));  //连接测试

    connect(mserial, static_cast<void (QSerialPort::*)(QSerialPort::SerialPortError)>(&QSerialPort::error),  this, &Widget::handleSerialError);

    rxtimer->setSingleShot(true);   //单次触发，超时后只触发一次
    rxtimer->setInterval(0);        //超时时间间隔

    radioTxmodeTimer->setSingleShot(true);
    radioTxmodeTimer->setInterval(0);

    timer->start(SERIAL_TIME);    //串口没打开时，设置每隔2秒扫描一次可用串口

    //qDebug() << strtl <<endl;

    setBoxValue();
    searchSerial();
    show_Widgets();

}

Widget::~Widget()
{
    if((ui->pushButton_openSerial->text()==tr("关闭")))
    {
        mserial->close();
    }
    delete ui;
}

void Widget::setBoxValue(void)
{
    int year ;
    QDateTime time = QDateTime::currentDateTime();
    QString strtl = time.toString("yy");
    for(int i = 0; i < 4; i++)
    {
        ui->comboBox_radioYear->addItem(strtl);
        year = strtl.toInt();
        year++;
        strtl = QString::number(year);
    }
    ui->spinBox_h_1->setRange(0,255);
    ui->spinBox_h_2->setRange(0,255);
    ui->spinBox_h_3->setRange(0,255);
    ui->spinBox_h_4->setRange(0,255);
    ui->spinBox_h_5->setRange(0,255);
    ui->spinBox_h_6->setRange(0,255);
    ui->spinBox_h_7->setRange(0,255);
    ui->spinBox_h_8->setRange(0,255);
    ui->spinBox_h_9->setRange(0,255);
    ui->spinBox_h_10->setRange(0,255);
    ui->spinBox_h_11->setRange(0,255);
    ui->spinBox_h_12->setRange(0,255);

    ui->spinBox_l_1->setRange(0,255);
    ui->spinBox_l_2->setRange(0,255);
    ui->spinBox_l_3->setRange(0,255);
    ui->spinBox_l_4->setRange(0,255);
    ui->spinBox_l_5->setRange(0,255);
    ui->spinBox_l_6->setRange(0,255);
    ui->spinBox_l_7->setRange(0,255);
    ui->spinBox_l_8->setRange(0,255);
    ui->spinBox_l_9->setRange(0,255);
    ui->spinBox_l_10->setRange(0,255);
    ui->spinBox_l_11->setRange(0,255);
    ui->spinBox_l_12->setRange(0,255);

    ui->spinBox_h_1->setValue(220);
    ui->spinBox_h_2->setValue(220);
    ui->spinBox_h_3->setValue(220);
    ui->spinBox_h_4->setValue(220);
    ui->spinBox_h_5->setValue(220);
    ui->spinBox_h_6->setValue(220);
    ui->spinBox_h_7->setValue(220);
    ui->spinBox_h_8->setValue(220);
    ui->spinBox_h_9->setValue(220);
    ui->spinBox_h_10->setValue(220);
    ui->spinBox_h_11->setValue(220);
    ui->spinBox_h_12->setValue(220);

    ui->spinBox_l_1->setValue(200);
    ui->spinBox_l_2->setValue(200);
    ui->spinBox_l_3->setValue(200);
    ui->spinBox_l_4->setValue(200);
    ui->spinBox_l_5->setValue(200);
    ui->spinBox_l_6->setValue(200);
    ui->spinBox_l_7->setValue(200);
    ui->spinBox_l_8->setValue(200);
    ui->spinBox_l_9->setValue(200);
    ui->spinBox_l_10->setValue(200);
    ui->spinBox_l_11->setValue(200);
    ui->spinBox_l_12->setValue(200);
}

//扫描串口函数
void Widget::searchSerial()
{
    static int count = 0;
    QStringList mserialName;
    foreach (const QSerialPortInfo &Info, QSerialPortInfo::availablePorts())
    {
        //if(Info.serialNumber())
        mserialName << Info.portName();

    }
    if(mserialName.length() > 0)
    {
        if(count != mserialName.length())
        {
            count = mserialName.length();
            ui->comboBox_serialPort->clear();
            ui->comboBox_serialPort->addItems(mserialName);  //显示串口号
            //qDebug()<<mserialName.length()<<endl;
        }
    }
}

//串口打开后意外中断时弹出错误警告
void Widget::handleSerialError(QSerialPort::SerialPortError error)
{
    if (error == QSerialPort::ResourceError)
    {
        mserial->close();
        QMessageBox::critical(this, tr("Error"), "串口连接中断，请检查是否正确连接！");

        timer->start(SERIAL_TIME);
        ui->pushButton_openSerial->setText("打开");

        radioTxmodeTimer->stop();
        show_Widgets();
    }
}


//超时后扫描串口
void Widget::timeUpSerial()
{

    if((ui->pushButton_openSerial->text()==tr("打开")))
    {
        searchSerial();
    }
}
//串口数据接收rxSerialbuf
void Widget::recv_data(void)
{
    rxtimer->start(2); //50ms超时时间，根据实际来调整超时时间

    rxSerialbuf.append(mserial->readAll()); //触发函数后把缓冲区数据全部接收到rxSerialbuf
}
//超时后显示数据，使用定时器机制，可避免接收中文出现个别字符乱码
void Widget::rxtimeSearchData(void)
{
    rxtimer->stop();
    if(!rxSerialbuf.isEmpty())
    {
        QString myStrTemp = QString::fromLocal8Bit(rxSerialbuf); //支持中文显示

        QString str = ui->textBrowser_serialRxBuf->toPlainText();
        str+=myStrTemp;
        ui->textBrowser_serialRxBuf->clear();
        ui->textBrowser_serialRxBuf->append(str);
        ui->textBrowser_serialRxBuf->moveCursor(QTextCursor::End);
    }
    rxSerialbuf.clear();
}

//打开串口
void Widget::on_pushButton_openSerial_clicked()
{
    if((ui->pushButton_openSerial->text()==tr("打开")))
    {
        ui->pushButton_openSerial->setText("关闭");
        mserial->setPortName(ui->comboBox_serialPort->currentText());
        if(mserial->open(QIODevice::ReadWrite))
        {

            mserial->open(QIODevice::ReadWrite);
            mserial->setBaudRate(ui->comboBox_serialBaud->currentText().toInt());
            mserial->setDataBits(QSerialPort::Data8);
            mserial->setParity(QSerialPort::NoParity);
            mserial->setFlowControl(QSerialPort::NoFlowControl);
            mserial->setStopBits(QSerialPort::OneStop);
            connect(mserial,SIGNAL(readyRead()),this,SLOT(recv_data()));
            timer->stop();
        }
        else
        {
            mserial->close();
            timer->start(SERIAL_TIME);
            radioTxmodeTimer->stop();
            ui->pushButton_openSerial->setText("打开");
            QMessageBox::warning(nullptr,"Warning","串口打开错误",QMessageBox::Close);
        }

    }
    else
    {
        ui->pushButton_openSerial->setText("打开");

        mserial->close();

        timer->start(SERIAL_TIME);
        radioTxmodeTimer->stop();

    }
    show_Widgets();
}


//清除缓冲区内容
void Widget::on_pushButton_cleanRecv_clicked()
{
    ui->textBrowser_serialRxBuf->clear();
}

void Widget::show_Widgets()
{
    /*串口关闭*/
    if(ui->pushButton_openSerial->text()==tr("打开"))
    {
        ui->comboBox_serialBaud->setEnabled(true);
        ui->comboBox_serialPort->setEnabled(true);
        ui->pushButton_radioConfig->setEnabled(false);
        ui->pushButton_radioSave->setEnabled(false);
        ui->pushButton_radioWriteNumber->setEnabled(false);
        ui->pushButton_radioTestMode->setEnabled(false);
        ui->pushButton_radioPwrHh->setEnabled(false);
        ui->pushButton_radioPwrHl->setEnabled(false);
        ui->pushButton_radioPwrLh->setEnabled(false);
        ui->pushButton_radioPwrLl->setEnabled(false);

    }
    else
    {
        ui->comboBox_serialBaud->setEnabled(false);
        ui->comboBox_serialPort->setEnabled(false);
        ui->pushButton_radioConfig->setEnabled(true);
        ui->pushButton_radioSave->setEnabled(true);
        ui->pushButton_radioWriteNumber->setEnabled(true);
        ui->pushButton_radioTestMode->setEnabled(true);
        ui->pushButton_radioPwrHh->setEnabled(true);
        ui->pushButton_radioPwrHl->setEnabled(true);
        ui->pushButton_radioPwrLh->setEnabled(true);
        ui->pushButton_radioPwrLl->setEnabled(true);
    }


}
//进入配置模式命令
void Widget::on_pushButton_radioConfig_clicked()
{
    mserial->write("settab\r\n");
}
//保存参数命令
void Widget::on_pushButton_radioSave_clicked()
{
    mserial->write("saved\r\n");
}
//写参数命令
void Widget::on_pushButton_radioWriteNumber_clicked()
{
    QString str;
    QByteArray txBytes;

    int index = 0;
    str = "$huasi&set#pid S";
    if(ui->comboBox_radioLanguage->currentIndex() == 1)
    {

        str.append("1");
    }
    else
    {
        str.append("0");
    }
    index = ui->comboBox_radioBrand->currentIndex();
    switch (index)
    {
    case 0:

        str.append("01");
        break;
    case 1:

        str.append("00");
        break;
    case 2:

        str.append("03");
        break;
    case 3:
        str.append("06");
        break;
    case 4:
        str.append("07");
        break;
    case 5:
        str.append("08");
        break;
    case 6:
        str.append("09");
        break;
    default:
        break;
    };
    str.append(ui->comboBox_radioYear->currentText());
    str.append(ui->comboBox_radioMonth->currentText());
    str.append(ui->lineEdit_radioNumber->text());
    str.append("\r\n");
    //qDebug() << <<endl;
    //qDebug() <<str<<endl;
    txBytes = str.toLatin1();   //把字符串转换成字节缓冲区类型
    mserial->write(txBytes);
}

void Widget::on_pushButton_radioPwrHh_clicked()
{
    char str[200];
    if(ui->comboBox_radioType->currentIndex() == 0)
    {
        sprintf(str,"suchannelh 1 1 23 %d 2 23 %d 3 23 %d 4 23 %d 5 23 %d 6 23 %d\r\n",
                ui->spinBox_h_1->value(),ui->spinBox_h_2->value(),ui->spinBox_h_3->value(),ui->spinBox_h_4->value(),ui->spinBox_h_5->value(),ui->spinBox_h_6->value());
    }
    else
    {
        sprintf(str,"suchannelh 0 1 23 %d 2 23 %d 3 23 %d 4 23 %d 5 23 %d 6 23 %d\r\n",
                ui->spinBox_h_1->value(),ui->spinBox_h_2->value(),ui->spinBox_h_3->value(),ui->spinBox_h_4->value(),ui->spinBox_h_5->value(),ui->spinBox_h_6->value());
    }

    mserial->write(str);
}

void Widget::on_pushButton_radioPwrHl_clicked()
{
    char str[200];
    if(ui->comboBox_radioType->currentIndex() == 0)
    {
        sprintf(str,"suchannelh 1 7 23 %d 8 23 %d 9 23 %d 10 23 %d 11 23 %d 12 23 %d\r\n",
                ui->spinBox_h_7->value(),ui->spinBox_h_8->value(),ui->spinBox_h_9->value(),ui->spinBox_h_10->value(),ui->spinBox_h_11->value(),ui->spinBox_h_12->value());
    }
    else
    {
        sprintf(str,"suchannelh 0 7 23 %d 8 23 %d 9 23 %d 10 23 %d 11 23 %d 12 23 %d\r\n",
                ui->spinBox_h_7->value(),ui->spinBox_h_8->value(),ui->spinBox_h_9->value(),ui->spinBox_h_10->value(),ui->spinBox_h_11->value(),ui->spinBox_h_12->value());
    }

    mserial->write(str);
}

void Widget::on_pushButton_radioPwrLh_clicked()
{
    char str[200];
    if(ui->comboBox_radioType->currentIndex() == 0)
    {
        sprintf(str,"suchannell 1 1 20 %d 2 20 %d 3 20 %d 4 20 %d 5 20 %d 6 20 %d\r\n",
                ui->spinBox_l_1->value(),ui->spinBox_l_2->value(),ui->spinBox_l_3->value(),ui->spinBox_l_4->value(),ui->spinBox_l_5->value(),ui->spinBox_l_6->value());
    }
    else
    {
        sprintf(str,"suchannell 0 1 20 %d 2 20 %d 3 20 %d 4 20 %d 5 20 %d 6 20 %d\r\n",
                ui->spinBox_l_1->value(),ui->spinBox_l_2->value(),ui->spinBox_l_3->value(),ui->spinBox_l_4->value(),ui->spinBox_l_5->value(),ui->spinBox_l_6->value());
    }

    mserial->write(str);
}

void Widget::on_pushButton_radioPwrLl_clicked()
{
    char str[200];
    if(ui->comboBox_radioType->currentIndex() == 0)
    {
        sprintf(str,"suchannell 1 7 20 %d 8 20 %d 9 20 %d 10 20 %d 11 20 %d 12 20 %d\r\n",
                ui->spinBox_l_7->value(),ui->spinBox_l_8->value(),ui->spinBox_l_9->value(),ui->spinBox_l_10->value(),ui->spinBox_l_11->value(),ui->spinBox_l_12->value());
    }
    else
    {
        sprintf(str,"suchannell 0 7 20 %d 8 20 %d 9 20 %d 10 20 %d 11 20 %d 12 20 %d\r\n",
                ui->spinBox_l_7->value(),ui->spinBox_l_8->value(),ui->spinBox_l_9->value(),ui->spinBox_l_10->value(),ui->spinBox_l_11->value(),ui->spinBox_l_12->value());
    }

    mserial->write(str);
}

void Widget::on_pushButton_radioTestMode_clicked()
{
    if(ui->pushButton_radioTestMode->text() == tr("进入测试"))
    {
        ui->pushButton_radioTestMode->setText("退出测试");
        mserial->write("insend\r\n");
        radioTxmodeTimer->start(800);
    }
    else
    {
        ui->pushButton_radioTestMode->setText("进入测试");
        radioTxmodeTimer->stop();
        mserial->write("exsend\r\n");
    }

}

void Widget::radio_txData()
{
    char strbuf[560];

    radioTxmodeTimer->stop();
    memset(strbuf,'2',sizeof(strbuf));
    strbuf[559]='\0';
    mserial->write(strbuf);
    radioTxmodeTimer->start(1000);

}


void Widget::on_pushButton_radioReadPower_clicked()
{
    mserial->write("powchannel\r\n");
}

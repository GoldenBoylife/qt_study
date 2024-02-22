#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pbtStart, &QPushButton::pressed, this, &Widget::slot_start);
    connect(ui->pbtStop, &QPushButton::pressed, this, &Widget::slot_stop);

    ui->pbtStart->setEnabled(true);
    ui->pbtStop->setEnabled(false);

    m_timer = new QTimer();
    connect(m_timer, &QTimer::timeout, this, &Widget::slot_elapsedTime);
    //지정된시간이흘르면,slot_elapsedTime()함수시시작됨.




}

void  Widget::slot_start()
{
    ui->pbtStart->setEnabled(false);
    ui->pbtStop->setEnabled(true);

    m_timer->start(1000);
}


void Widget::slot_stop()
{
    ui->pbtStart->setEnabled(true);
    ui->pbtStop->setEnabled(false);
    m_timer->stop();
}

void Widget::slot_elapsedTime()
{
    QDateTime curr = QDateTime::currentDateTime();
    QString str = curr.toString("현재시간:yyyy-MM-dd hh:mm:ss");

    ui->leCurrentTime->setText(str);
}

Widget::~Widget()
{
    delete ui;
}

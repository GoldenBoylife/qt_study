#include "widget.h"
#include "ui_widget.h"



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    /*버튼에 대한 시그널슬롯을 연결함.*/
    connect(ui->pbtStart , SIGNAL(pressed()), this, SLOT(slot_pbtStart()));
    connect(ui->pbtStop , SIGNAL(pressed()), this, SLOT(slot_pbtStop()));
    connect(ui->pbtIsRunning , SIGNAL(pressed()), this, SLOT(slot_pbtIsRunning()));

    m_thread1 = new MyThread(1);
    m_thread2 = new MyThread(2);

    connect(m_thread1,SIGNAL(sig_threadMsg(const QString&)),this,SLOT(slot_threadMsg(const QString &)));
    connect(m_thread2,SIGNAL(sig_threadMsg(const QString&)),this,SLOT(slot_threadMsg(const QString &)));

    connect(m_thread1, SIGNAL(started()), this, SLOT(slot_started()));
    //thread에서제공하는start신호를가지고slot함수와연결시킬수있다.

    connect(m_thread1, SIGNAL(finished()), this, SLOT(slot_finished()));
    //thread에서제공하는finished라는신호를 slot함수와연결시킴

    connect(m_thread2, SIGNAL(started()), this, SLOT(slot_started()));
    //thread에서제공하는start신호를가지고slot함수와연결시킬수있다.

    connect(m_thread2, SIGNAL(finished()), this, SLOT(slot_finished()));
    //thread에서제공하는finished라는신호를 slot함수와연결시킴


}

void Widget::slot_started()
{
    ui->textEdit->append("첫번째,두번째thread가시작됨");
}

void Widget::slot_finished()
{
     ui->textEdit->append("첫번째,두번째thread가중지됨");
}

void Widget::slot_pbtStart()
{
    ui->textEdit->clear();
    /*이 예제에서는thread2가 먼저 실행될수있다.*/
    m_thread1->start();
    m_thread2->start();
}



void Widget::slot_pbtStop()
{
    m_thread1->stop();
    m_thread2->stop();
}

void Widget::slot_pbtIsRunning()
{
    if(m_thread1->isRunning())
    {
        ui->textEdit->append("첫번째Thread상태:동작중");
    }
    else
    {
        ui->textEdit->append("첫번째thread상태:중지된상태");
    }
    if(m_thread2->isRunning())
    {
        ui->textEdit->append("두번째thread상태:동작중");
    }
    else
    {
        ui->textEdit->append("두번째thread상태:중지된상태");
    }
}

void Widget::slot_threadMsg(const QString &msg)
{
    ui->textEdit->append(msg);
}

Widget::~Widget()
{
    delete ui;
}

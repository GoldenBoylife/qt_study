#include "widget.h"
#include "ui_widget.h"



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pbtStart , SIGNAL(pressed()),
            this, SLOT(slot_pbtStart()));
    connect(ui->pbtStop , SIGNAL(pressed()),
            this, SLOT(slot_pbtStop()));
    connect(ui->pbtIsRunning , SIGNAL(pressed()),
            this, SLOT(slot_pbtIsRunning()));

    m_thread1 = new MyThread(1);
    m_thread2 = new MyThread(2);

}

Widget::~Widget()
{
    delete ui;
}
#include "widget.h"
#include "ui_widget.h"
#include <QHBoxLayout>
#include <QDebug>
#include <widget.h>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    /*GET image button*/
    ImageButton *imgBtn1 = new ImageButton(this);
    ImageButton *imgBtn2= new ImageButton(this);

    QHBoxLayout *hLay = new QHBoxLayout(this);
//    hLay->addWidget(imgBtn1);
    hLay->addWidget(static_cast<QWidget*>(imgBtn1));


//    hLay->addWidget(imgBtn2);

    setLayout(hLay);

    connect(imgBtn1, SIGNAL(hovering()), this , SLOT(slot_hovering()));
    connect(imgBtn1, &ImageButton::clicked, this, &Widget::slot_clicked);

    imgBtn2->setDisabled(true);

}

void Widget::slot_hovering()
{

}

void Widget::slot_clicked()
{

}

Widget::~Widget()
{
    delete ui;
}

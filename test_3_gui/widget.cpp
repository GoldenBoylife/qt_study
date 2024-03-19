#include "widget.h"
#include "ui_widget.h"
#include "QDebug"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(
            ui->pushBtn,
            SIGNAL(&QPushButton::clicked),
            this,
            SLOT(&Widget::slot_pushBtn)
            );

}

void Widget::slot_pushBtn()
{
    qDebug() << Q_FUNC_INFO << "Hello World";
}
Widget::~Widget()
{
    delete ui;
}

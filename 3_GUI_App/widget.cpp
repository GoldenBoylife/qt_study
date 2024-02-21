#include "widget.h"
#include "ui_widget.h"
#include "QDebug"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    /*way1: whatever param or no param*/
    //connect(ui->pushBtn, SIGNAL(clicked()), this, SLOT(slot_pushButton()));
    //in Ui_Btn, connect SIGNAL with SLOT

    /*way2: only no param*/
    connect(ui->pushBtn, &QPushButton::clicked, this, &Widget::slot_pushButton);
    //

}
void Widget::slot_pushButton()
{
    qDebug() << Q_FUNC_INFO << "Hello World";
    //Q_FUNC_INFO :  print out "qDebug() Hello World"
}

Widget::~Widget()
{
    delete ui;
}


#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(
            ui->hSlider,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(slot_valueChanged(int))
           );
    //hSlider 안에 valueChanged값을 slot_valueChanged값과 연결

    /*way1 :old style_인자 우리가 직접*/
    connect(this,
            SIGNAL(sig_textChanged(QString)),
            this,
            SLOT(slot_textChanged(QString))
            );
    // 직접 emit으로 설정한 sig_textChaged시그널이 실행되면,
    // slot_textChanged이 실행됨.

    /*way2 : new style_인자없을때만쓰기*/
    connect(this, &Widget::sig_textChanged,
            this, &Widget::slot_textChanged);
}

void Widget::slot_valueChanged(int val)
{
    QString str = QString("%1").arg(val);
    //int값인 val을 QString으로 cast함
    //인자 1개이면 %1, 인자2개이면,%1 %2
    ui->leText->setText(str);
    //connected h-slider bar with "leText"

    emit sig_textChanged(str);
    //시그널 발생시킬 때는앞에 emit붙인다.
    //signal만든것이고
    //slot_valueChanged()선언때마다,
    //sig_textChanged시그널발생됨.
    //? 정의된함수가없는데어떻게실행되지?
}

void Widget::slot_textChanged(QString str)
{
    ui->leTextCopy->setText(str);
}
Widget::~Widget()
{
    delete ui;
}

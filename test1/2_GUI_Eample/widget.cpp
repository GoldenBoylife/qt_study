#include "widget.h"
#include "QDebug"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    /*make Btn*/
    setFixedSize(300,200); //window size

    m_str = QString("버튼"); //name
    m_button = new QPushButton(m_str,this); //due to
    m_button->setGeometry(10,10,100,30);
    //param: x,y,width,heigh

    connect(m_button, SIGNAL(pressed()),this,SLOT(slot_btn()));
    //connect SIGNAL func with SLOT func
    //when btn is pressed, in this class, slot_btn is runed.
}
void Widget::slot_btn()
{
    qDebug() << "hello world, Button Click.";
}

Widget::~Widget()
{

}

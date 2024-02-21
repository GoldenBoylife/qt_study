#include "widget.h"
#include <QMdiArea>     //add
#include <QMdiSubWindow>
#include <QPushButton>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(600,400);
    QMdiArea * area = new QMdiArea();
    area->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    //가로 세로에 스크롤추가

    QMdiSubWindow *subWindow1 = new QMdiSubWindow();
    subWindow1->resize(300,200);

    QPushButton *btn = new QPushButton("버튼");
    subWindow1->setWidget(btn);
    //서브윈도우1에 버튼넣기


    QMdiSubWindow * subWindow2 = new QMdiSubWindow();
    subWindow2->resize(300,200);

    subWindow2->setWidget(btn);
    //서브윈도우에 버튼넣기

    area->addSubWindow(subWindow1); //서브윈도우로등록
    area->addSubWindow(subWindow2);

    QHBoxLayout *hLay = new QHBoxLayout();

    hLay->addWidget(area);

    setLayout(hLay);

}

Widget::~Widget()
{

}

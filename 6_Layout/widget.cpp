#include "widget.h"
#include "QtWidgets"
#include "QHBoxLayout"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    /*HBoxLayout*/
    QHBoxLayout *hboxLayout =  new QHBoxLayout();
    QPushButton *btn[6];


    QString btnStr[6] = {"Mon","Tuesday","Wednesday","Tursday","Friday","Saturday"};

    for(int i =0 ; i < 6  ;i++)
    {
        btn[i] = new QPushButton(btnStr[i]);
        hboxLayout->addWidget(btn[i]);
    }


    /*VBoxLayout*/
    QVBoxLayout * vboxLayout = new QVBoxLayout();
    QPushButton *vBtn[3];
    QString btnStr2[3] = {"Movie", "Drama", "Animation"};

    for(int i = 0; i<3 ;i++)
    {
        vBtn[i] = new QPushButton(btnStr2[i]);
        vboxLayout->addWidget(vBtn[i]);
    }

    /*GridBoxLayout*/
    QGridLayout *gridLayout = new QGridLayout();
    QPushButton *gBtn[5];
    QString btnStr3[5] =  {"Mon","Tuesday","Wednesday","Tursday","Friday"};

    for(int i =0 ; i<5 ;i++)
    {
        gBtn[i] = new  QPushButton(btnStr3[i]);

    }
    gridLayout->addWidget(gBtn[0],0,0);
    gridLayout->addWidget(gBtn[1],0,1);
    gridLayout->addWidget(gBtn[2],1,0,1,2);
    gridLayout->addWidget(gBtn[3],2,0);
    gridLayout->addWidget(gBtn[4],2,1);

   QVBoxLayout *defaultLayout = new QVBoxLayout();
   defaultLayout->addLayout(hboxLayout);
   defaultLayout->addLayout(vboxLayout);
   defaultLayout->addLayout(gridLayout);

   setLayout(defaultLayout);

}
Widget::~Widget()
{

}

#include "widget.h"
#include <QPainter>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
}
void Widget::paintEvent(QPaintEvent *event)
{
     Q_UNUSED(event)

    QPainter painter;
    painter.begin(this);


    int w = this->window()->width();
    int h = this->window()->height();

    QPixmap imgPixmap = QPixmap(":/images/box.jpg").scaled(w,h,Qt::KeepAspectRatio);
    painter.setPen(QColor(0,0,0));
    painter.fillRect(0,0,w,h, Qt::red);
    //전체검은색


    int xPos =0;
    int yPos = 0;

     /*이미지가 항상 중앙에 있도록*/
    if(w > imgPixmap.width())
        xPos = (w -imgPixmap.width()) /2;
    else if(h > imgPixmap.height())
        yPos = (h-imgPixmap.height()) /2;

    painter.drawPixmap(xPos,yPos,imgPixmap);

    painter.end();



}
Widget::~Widget()
{

}

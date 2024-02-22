#include "widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
}

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
    //event안써서생기는warning을없앨수있다.
    //;안씀

    QPainter painter;
    painter.begin(this);
    //이걸 안써도 되는데,이거 안쓰면,바로 물리적인monitor에쓴다.

#if 0
    painter.setPen(Qt::blue);
    painter.drawLine(10,10,100,40); //선
    painter.drawRect(120,10,80,80); //사각형

    QRectF rect(230.0,10.0,80.0,80.0);
    painter.drawRoundedRect(rect, 20,20); //둥근사각형

    QPointF p1[3] = {QPointF(10.0,110.0), QPointF(110.0,110.0), QPointF(110.0, 190.0)};
    painter.drawPolyline(p1,3); //포인트 지점을 선으로 그리기


    QPointF p2[3] = {QPointF(120.0,110.0), QPointF(220.0, 110.0), QPointF(220.0, 190.0)};
    painter.drawPolygon(p2,3); //포인트지점을도형으로그리기
    //선을이어줌.

    painter.drawLine(10,10,100,50);

    painter.setFont(QFont("Arial.", 20)); //폰트지정
    painter.setPen(Qt::black);
    QRect fontrect(10,150,220,180);         //텍스트를 표시할 영역
    painter.drawText(fontrect, Qt::AlignCenter,"I love Qt");
#elif 0



    QPen pen(Qt::blue);
    pen.setWidth(4);

    painter.setPen(pen);
    QRect rect1(10.0, 20.0, 80.0, 50);
    painter.drawEllipse(rect1);

    pen.setStyle(Qt::DashLine); //긴점선패턴
    painter.setPen(pen);

    QRect rect2(110.0,20.0, 80.0,50.0);
    painter.drawEllipse(rect2);

    pen.setStyle(Qt::DotLine); //긴점선패턴
    painter.setPen(pen);

    QRect rect3(210.0,20.0, 80.0,50.0);
    painter.drawEllipse(rect3);
#elif 0
    QPen pen(Qt::blue);
    pen.setWidth(10);

    QPointF p1[3] = {QPointF(30.0,80.0), QPointF(20.0, 40.0), QPointF(80.0, 60.0)};
    pen.setJoinStyle(Qt::BevelJoin);
    painter.setPen(pen);
    painter.drawPolyline(p1,3);


    QPointF p2[3] = {QPointF(130.0,80.0), QPointF(120.0, 40.0), QPointF(180.0, 60.0)};
    pen.setJoinStyle(Qt::MiterJoin);
    painter.setPen(pen);
    painter.drawPolyline(p2,3);


    QPointF p3[3] = {QPointF(230.0,80.0), QPointF(220.0, 40.0), QPointF(280.0, 60.0)};
    pen.setJoinStyle(Qt::RoundJoin);
    painter.setPen(pen);
    painter.drawPolyline(p3,3);

#elif 0
    painter.setBrush(QBrush(Qt::green, Qt::Dense3Pattern));
    painter.setPen(Qt::blue);
    painter.drawEllipse(10,10,100,100);

    painter.setBrush(Qt::NoBrush);
    painter.setPen(Qt::blue);
    painter.drawEllipse(80,10,100,100);


#elif 1
    QPixmap pixmap(":/res/Selection_001.png");

    int w = pixmap.width();
    int h = pixmap.height();

    pixmap = pixmap.scaled(w, h, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    //scaled하고 pixmap으로 저장해야 적용됨.

    QBrush brush(pixmap);
    painter.setBrush(brush);
    painter.setPen(Qt::blue);
    painter.drawRect(10,10,w,h);


#endif
    painter.end();
}
Widget::~Widget()
{

}

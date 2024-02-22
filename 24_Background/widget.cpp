#include "widget.h"
#include "QPainter"
#include "QPainterEvent"
#include "QtDebug"

Widget::Widget(QWidget *parent)
    : QWidget(nullptr,Qt::FramelessWindowHint) // no title
{
    m_device = QPixmap(":/images/background.png");
    /*setting background size with imag size*/
    QBitmap bitmap = m_device.createHeuristicMask();
    setFixedSize(m_device.size());
    setMask(bitmap); //mask


    m_pbtButton = new QPushButton("hello", this);
    //parent is "this"

    connect(m_pbtButton, SIGNAL(pressed()), this, SLOT(slot_pbtButton()));

    /*hardcoding, upgrade button*/
    m_pbtButton->setGeometry(50,100,70,30);
}

void Widget::slot_pbtButton()
{
    qDebug() <<Q_FUNC_INFO;
}

void Widget::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event);
    QPainter painter(this);

    painter.drawPixmap(event->rect(), m_device);
    //give image path

    painter.setPen(QColor(116,116,118));
    painter.setBrush(QColor(116,116,118));
    painter.drawRect(25,65,145,260);
}
Widget::~Widget()
{

}

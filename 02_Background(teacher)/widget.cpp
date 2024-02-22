#include "widget.h"

#include <QPainter>
#include <QPaintEvent>


Widget::Widget(QWidget *parent)
     : QWidget(nullptr, Qt::FramelessWindowHint)
     //: QWidget(nullptr)
{
    Q_UNUSED(parent)
    //setGeometry(300, 200, 130, 120);

    m_device = QPixmap(":/resources/background.png", "png");
    QBitmap bitmap = m_device.createHeuristicMask();
    setFixedSize(m_device.size());
    setMask(bitmap);

    pbtHello = new QPushButton("안녕하세요.", this);
    connect(pbtHello, SIGNAL(pressed()), this, SLOT(slot_pbtHello()));

    pbtHello->setGeometry(50, 100, 70, 30);
}

void Widget::slot_pbtHello()
{
    qDebug() << Q_FUNC_INFO;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.drawPixmap(event->rect(), m_device);

    painter.setPen(QColor(116, 116, 118));
    painter.setBrush(QColor(116, 116, 118));
    painter.drawRect(25, 65, 145, 260);
}

Widget::~Widget()
{
}



















#include "imagebutton.h"
#include <QPainter>

#define BEHAVIOUR_NOMAL       0
#define BEHAVIOUR_ENTER       1
#define BEHAVIOUR_LEAVE       2
#define BEHAVIOUR_PRESS       3
#define BEHAVIOUR_DISABLE     4

ImageButton::ImageButton(QWidget *parent) :
    QWidget(parent),
    m_disabled(false)
{
    m_behaviour = BEHAVIOUR_NOMAL;

    QImage image(":/resources/normal.png");

    this->setFixedWidth(image.width());
    this->setFixedHeight(image.height());
}

void ImageButton::setDisabled(bool val)
{
    m_disabled = val;
    update();
}

void ImageButton::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)

    QPainter painter;
    painter.begin(this);

    if(m_disabled == true) {
        m_imgFileName = QString(":/resources/disable.png");
    } else {
        if(m_behaviour == BEHAVIOUR_NOMAL)
            m_imgFileName = QString(":/resources/normal.png");
        else if(m_behaviour == BEHAVIOUR_ENTER)
            m_imgFileName = QString(":/resources/enter.png");
        else if(m_behaviour == BEHAVIOUR_LEAVE)
            m_imgFileName = QString(":/resources/normal.png");
        else if(m_behaviour == BEHAVIOUR_PRESS)
            m_imgFileName = QString(":/resources/press.png");
    }

    QImage image(m_imgFileName);
    painter.drawImage(0, 0, image);
    painter.end();
}

void ImageButton::enterEvent(QEnterEvent *event)
{
    Q_UNUSED(event);
    m_behaviour = BEHAVIOUR_ENTER;
    update();
    emit hovering();
}

void ImageButton::leaveEvent(QEvent *event)
{
    Q_UNUSED(event);
    m_behaviour = BEHAVIOUR_NOMAL;
    update();
}

void ImageButton::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_behaviour = BEHAVIOUR_PRESS;
    update();

    emit clicked();
}

void ImageButton::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);

    m_behaviour = BEHAVIOUR_ENTER;
    update();
}

void ImageButton::mouseDoubleClickEvent(QMouseEvent *event)
{
    Q_UNUSED(event)
}








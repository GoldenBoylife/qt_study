#include "ImageButton.h"

#include "QPainter"

#define BEHAVIOUR_NORMAL     0
#define BEHAVIOUR_ENTER      1
#define BEHAVIOUR_LEAVE      2
#define BEHAVIOUR_PRESS      3
#define BEHAVIOUR_DISABLE    4

ImageButton::ImageButton(QObject *parent) :
    QObject(parent), m_disabled(false)
{
    m_behaviour = BEHAVIOUR_NORMAL;
    //step 0: NORMAL mode

    QImage image(":/images/normal.png");

    setFixedSize(QSize(image.width(), image,height()) );


}

void ImageButton::setDisabled(bool val)
{
    m_disabled = true;
    update(); //use painter
}


void ImageButton::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);

    if(m_disabled ==true)
    {
        m_imgFileName = QString(":/images/disable.png");
    } else {
        if(m_behaviour == BEHAVIOUR_NORMAL)
        {
            m_imgFileName = QString(":/images/normal.png");
        }
        else if(m_behaviour == BEHAVIOUR_ENTER)
        {
           m_imgFileName = QString(":/images/enter.png");
        }
        else if(m_behaviour == BEHAVIOUR_LEAVE)
        {
           m_imgFileName = QString(":/images/leave.png");
        }
        else if(m_behaviour == BEHAVIOUR_PRESS)
        {
           m_imgFileName = QString(":/images/press.png");
        }

    }
    QImage image(m_imageFileName);

    painter.drawImage(0,0,image);

    painter.end();
}

void ImageButton::leaveEvent(QEvent * event)
{
    Q_UNUSED(event);
    m_behaviour = BEHAVIOUR_ENTER;
    update();

    emit hovering();
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

void ImageButton::mouseDoubleClieckEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    /*no function now.*/
}

















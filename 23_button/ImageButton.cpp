#include "ImageButton.h"

#define BEHAVIOUR_NORMAL     0
#define BEHAVIOUR_ENTER      1
#define BEHAVIOUR_LEAVE      2
#define BEHAVIOUR_PRESS      3
#define BEHAVIOUR_DISABLE    4
ImageButton::ImageButton(QObject *parent) :
    QObject(parent), m_disabled(false)
{
    m_behaviour = BEHAVIOUR_NORMAL
}

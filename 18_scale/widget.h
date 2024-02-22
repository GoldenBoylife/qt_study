#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();


protected:
   virtual void paintEvent(QPaintEvent *event);
   //재정의함수니까 여기에있어야함. 애러는안나지만 약속

};

#endif // WIDGET_H

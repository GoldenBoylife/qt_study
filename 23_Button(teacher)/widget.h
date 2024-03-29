#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "imagebutton.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;

public slots:
    void hovering();
    void clicked();

};

#endif // WIDGET_H

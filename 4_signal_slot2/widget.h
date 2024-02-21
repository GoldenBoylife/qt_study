#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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

signals:
    void sig_textChanged(QString str);
    //시그널 사용할 때는 emit사용한다.

private slots:
    void slot_valueChanged(int val);
    //plan : connect sig_textChange 2 slot_valueChanged
    void slot_textChanged(QString str);
    //plan : connect slot_textChanged 2  h-slider bar


};

#endif // WIDGET_H

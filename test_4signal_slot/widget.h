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

private slots:
     void slot_valueChanged(int val);
     void slot_textChanged(QString str);
};

#endif // WIDGET_H

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    // even though i did't input param, parent automatically is 0
    ~Widget();

private :
    QPushButton *m_button;
    QString     m_str;

private slots:
//slots : when the signal received, active
    void slot_btn();



};

#endif // WIDGET_H

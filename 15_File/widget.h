#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFile>


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
    QFile       *m_file;

private slots:
    void slot_pbtFileSave();
    void slot_pbtFileRead();

};


#endif // WIDGET_H

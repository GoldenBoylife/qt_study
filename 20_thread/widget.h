#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <Mythread.h>
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

    MyThread *m_thread1;
    MyThread *m_thread2;


private slots:
    void slot_pbtStart();
    void slot_pbtStop();
    void slot_pbtIsRunning();

    void slot_threadMsg(const QString &);  //시그널받아서처리하는함수

};

#endif // WIDGET_H

#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QMutex>


class MyThread : public QThread
{
    Q_OBJECT //이거추가

public:
    MyThread(int num);
    //thread구분하기위해서num추가

private:
    bool m_threadStop;
    int m_number; //thread이름
    QMutex m_mutex;

public:
    void stop();

signals:
    void sig_threadMsg(const QString & );
    //? &만넣는다고??


protected:
    virtual void run();

};

#endif // MYTHREAD_H

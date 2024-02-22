#include <QCoreApplication>
#include <QThread>
#include <QDebug>
#include <QWaitCondition>
#include <QMutex>



int numUsed;

QMutex mutex;
QWaitCondition incNumber;
//위두줄을사용해야함


class Producer : public QThread
{
public:
    Producer() {}

protected:
    virtual void run()
    {
        for(int i =0;i<10;i++)
        {
            sleep(1);
            mutex.lock();
            ++numUsed;
            //1을더하고,
            incNumber.wakeAll();
            //waitcondition에걸리는모든class를깨운다.
            //여기에서Consumer로실행되고qDebug됨
            mutex.unlock();
        }
    }


};


class Consumer : public QThread
{
public:
    Consumer() {}

protected:
    virtual void run()
    {
        for(int i =0; i <10 ;i++)
        {
            mutex.lock();
                incNumber.wait(&mutex);
                //Qwait는항상mutex안에넣어야함.
            mutex.unlock();

            qDebug("numUsed : %d " , numUsed);
        }
    }
};
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Producer producer;
    Consumer consumer;

    producer.start();
    consumer.start();

    return a.exec();
}

#include <QCoreApplication>
#include <QThread>
#include <QtConcurrent/QtConcurrent>

/*마치 thread처럼작동되도록*/
void hello(QString name)
{
    for(int i =0 ; i< 10 ;i++)
    {
        QThread::sleep(1);
        qDebug("[%s] i = %d", name.toLocal8Bit().data(),i);
        //toLocal8bit().data() :데이터형으로바꿔줌

    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QFuture<void> f1 = QtConcurrent::run(hello,QString("GoldenBoy"));
    //hello함수가아웃풋이void이므로
    QFuture<void> f2 = QtConcurrent::run(hello,QString("Hwi-Dong"));


    f1.waitForFinished(); //f1끝날때까지기다림.
    f2.waitForFinished(); //f2끝날때까지기다림.
    return a.exec();
}

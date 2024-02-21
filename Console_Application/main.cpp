#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int num =10;
    qDebug() << "Hello world. value : " << num ;
    qDebug("QT First Program , num :  %d", num);

    return a.exec();
}

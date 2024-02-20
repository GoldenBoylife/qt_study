#include <QCoreApplication>
#include <QIODevice>
#include <QDataStream>
#include <QDebug>


QByteArray encoding()
{
    quint32 value1 = 123;   //4 Byte
    quint8 value2 = 124;    //1 Byte
    quint32 value3 = 125;   //4 Byte

    QByteArray outData;
    QDataStream outStream(&outData, QIODevice::WriteOnly);
    //only write

    outStream << value1;
    outStream << value2;
    outStream << value3;

    return outData;
}

void decoding(QByteArray data)
{

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QByteArray encData = encoding();

    qDebug() << "encData Size : " << encData.size() << " Bytes";

    return a.exec();
}

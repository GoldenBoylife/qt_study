#include <QCoreApplication>
#include <QIODevice>
#include <QDataStream>
#include <QDebug>


QByteArray encoding()
{
    quint32 value1 = 123;   //4 Byte
    quint8  value2 = 124;    //1 Byte
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
    QByteArray inData = data;
    QDataStream inStream(&inData, QIODevice::ReadOnly);

    quint32 value1;   //123
    quint8  value2;   //124
    quint32 value3;   //125

    inStream >> value1; //반대방향
    inStream >> value2; //반대방향
    inStream >> value3; //반대방향

    qDebug("[첫번째값:%d] [두번째값:%d] [세번째값:%d] ", value1, value2, value3);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QByteArray encData = encoding();

    qDebug() << "encData Size : " << encData.size() << " Bytes";// size 9

    decoding(encData);

    return a.exec();
}


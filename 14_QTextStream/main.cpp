
#include <QCoreApplication>

#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

/*파일쓰기*/
void write(QString filename)
{
    QFile file(filename);

    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "Open Fail.";
        return;
    }

    QTextStream out(&file);
    out << "Write Text";

    file.flush();
    file.close();
}

/*파일읽기*/
void read(QString filename)
{
    QFile file(filename);
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << " Open fail.";
        return;
    }

    QTextStream in(&file);
    qDebug() << in.readAll();

    file.close();




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString filename = "MyFile.txt";
    write(filename);
    read(filename);


    return a.exec();
}

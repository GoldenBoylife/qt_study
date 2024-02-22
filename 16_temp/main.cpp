#include <QCoreApplication>
#include <QTemporaryDir>
#include <QTemporaryFile>
#include <QDebug>


void createTempFile()
{
    QString fileName;

    fileName = QDir::tempPath(), "/tmp", "MY_TEMP.txt";
    //자동으로.txt뒤에더붙긴한다.
    qDebug() << "임시파일 경로 및 파일명:"<< fileName;

    QTemporaryFile tempFile(fileName);
    tempFile.setAutoRemove(false);
    //파일참조후 close되면 자동삭제가 되는데,삭제안되도록false함.
    tempFile.open();

    tempFile.write("Hello world");
    tempFile.flush();
    tempFile.close();

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    createTempFile();

    return a.exec();
}

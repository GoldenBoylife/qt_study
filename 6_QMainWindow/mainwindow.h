#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//QMainWindow를 상속받는다.
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void slot_newFile();
    void slot_open();

};

#endif // MAINWINDOW_H

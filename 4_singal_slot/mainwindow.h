#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

signals:
    void sig_textChange(QString str);

private slots:
    void slot_valueChanged(int val);
    //plan : connect sig_textChange 2 slot_valueChanged
    void slot_textChanged(QString str);
    //plan : connect slot_textChanged 2  horizental bar


};

#endif // MAINWINDOW_H

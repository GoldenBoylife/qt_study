#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    bool    m_embedded;
    QPixmap m_device;

    QPushButton *pbtHello;

private slots:
    void slot_pbtHello();

protected:
    virtual void paintEvent(QPaintEvent* event);
};

#endif // MAINWINDOW_H




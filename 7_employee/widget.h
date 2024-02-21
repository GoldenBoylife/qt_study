#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    /*struct*/
    typedef struct _tEmployee {
        int num;
        QString name;
        QString part;
    } tEmployee;

    QList<tEmployee> m_employeeList;

private:
    Ui::Widget *ui;

private slots:
    void slot_pbtSave();
    void slot_pbtPrint();

};

#endif // WIDGET_H

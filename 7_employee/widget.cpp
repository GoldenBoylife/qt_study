#include "widget.h"
#include "ui_widget.h"
#include "QDebug"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pbtSave, SIGNAL(pressed()),
            this, SLOT(slot_pbtSave()));
    //클릭시slot함수가 움직여야하니까connect해야함
    connect(ui->pbtPrint, SIGNAL(pressed()),
            this, SLOT(slot_pbtPrint()));
}

void Widget::slot_pbtSave()
{
    qDebug() << Q_FUNC_INFO;
    int num = ui->leNum->text().toInt();
    QString name = ui->leName->text();
    QString part = ui->lePart->text();

    tEmployee employee;
    employee.num = num;
    employee.name = name;
    employee.part = part;

    m_employeeList.append(employee);


    /*저장 클릭하면 지워지도록*/
    ui->leNum->clear();
    ui->leName->clear();
    ui->lePart->clear();

}

void Widget::slot_pbtPrint()
{
    qDebug() << Q_FUNC_INFO;
    ui->textEdit->clear();
    for(int i =0; i< m_employeeList.size() ; i++)
    {
        int num = m_employeeList.at(i).num;
        QString name = m_employeeList.at(i).name;
        QString part = m_employeeList.at(i).part;

        QString str;
        str = QString("[사원번호:%1] [성명:%2] [부서:%3]").arg(num).arg(name).arg(part);
        ui->textEdit->append(str);
    }
}


Widget::~Widget()
{
    delete ui;
}

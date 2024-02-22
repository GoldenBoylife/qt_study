#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./mydb.db");

    if(!db.open())
    {
        qDebug() << db.lastError();
    }

    QSqlQuery qry;
    qry,prepare("CREATE TABLE IF NOT EXISTS student "
                "(id INTEGER UNIQUE PRIMARY KEY, department VARCHAR(30), name VARCHAR(30))");
    if(!qry.exec())
        qDebug() << qry.lastError();
    qry.prepare("INSERTY INTO student (id, department, name) VALUES (1, 'korean', 'Hong')");
    if(!qry.exec())
        qDebug() << qry.lastError();
    qry.prepare("INSERTY INTO student (id, department, name) VALUES (1, 'Computer', 'Kim')");
    if(!qry.exec())
        qDebug() << qry.lastError();

    qry.prepare("INSERTY INTO student (id, department, name) VALUES (1, 'psycho', 'Hwang')");
    if(!qry.exec())
        qDebug() << qry.lastError();

    qry.prepare("INSERTY INTO student (id, department, name) VALUES (1, 'Raw', 'GHOAK')");
    if(!qry.exec())
        qDebug() << qry.lastError();


}


void Widget::slot_pbtQuery()
{

}


Widget::~Widget()
{
    delete ui;
}

#include "widget.h"
#include "ui_widget.h"
#include "QComboBox"
#include "QIcon"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(
                ui->vSlider,
                SIGNAL(valueChanged(int)),
                this,
                SLOT(slot_valueChanged(int))
            );
    connect(
                this,
                SIGNAL(sig_textChanged(QString)),
                this,
                SLOT(slot_textChanged(QString))

            );

    QComboBox* combo = new QComboBox(this);
    combo->setGeometry(30,200,150,30);

    combo->addItem(QIcon(":/resource/free-icon-file-and-folder-8291136.png"), "Application");
    //여기에서 아이템 추가함
}
void Widget::slot_valueChanged(int val)
{
    QString str = QString("%1").arg(val);
    ui->leText->setText(str);

    emit sig_textChanged(str);
}

void Widget::slot_textChanged(QString str)
{
    ui->leTextCopy->setText(str);
}

Widget::~Widget()
{
    delete ui;
}

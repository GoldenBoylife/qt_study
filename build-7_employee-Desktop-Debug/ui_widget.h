/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leNum;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *leName;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lePart;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbtSave;
    QPushButton *pbtPrint;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_5;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(370, 399);
        verticalLayout_5 = new QVBoxLayout(Widget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leNum = new QLineEdit(Widget);
        leNum->setObjectName(QStringLiteral("leNum"));

        horizontalLayout->addWidget(leNum);


        verticalLayout_11->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        leName = new QLineEdit(Widget);
        leName->setObjectName(QStringLiteral("leName"));

        horizontalLayout_2->addWidget(leName);


        verticalLayout_12->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lePart = new QLineEdit(Widget);
        lePart->setObjectName(QStringLiteral("lePart"));

        horizontalLayout_3->addWidget(lePart);


        verticalLayout_13->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pbtSave = new QPushButton(Widget);
        pbtSave->setObjectName(QStringLiteral("pbtSave"));

        horizontalLayout_4->addWidget(pbtSave);

        pbtPrint = new QPushButton(Widget);
        pbtPrint->setObjectName(QStringLiteral("pbtPrint"));

        horizontalLayout_4->addWidget(pbtPrint);


        verticalLayout_14->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_5->addWidget(textEdit);


        verticalLayout_15->addLayout(horizontalLayout_5);


        verticalLayout_5->addLayout(verticalLayout_15);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", " \354\202\254\354\233\220", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\354\204\261\353\252\205", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\353\266\200\354\204\234", Q_NULLPTR));
        pbtSave->setText(QApplication::translate("Widget", "\354\240\200\354\236\245", Q_NULLPTR));
        pbtPrint->setText(QApplication::translate("Widget", "\354\266\234\353\240\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

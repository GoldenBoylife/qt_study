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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbtStart;
    QPushButton *pbtStop;
    QLabel *leCurrentTime;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 129);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbtStart = new QPushButton(Widget);
        pbtStart->setObjectName(QStringLiteral("pbtStart"));

        horizontalLayout->addWidget(pbtStart);

        pbtStop = new QPushButton(Widget);
        pbtStop->setObjectName(QStringLiteral("pbtStop"));

        horizontalLayout->addWidget(pbtStop);


        verticalLayout->addLayout(horizontalLayout);

        leCurrentTime = new QLabel(Widget);
        leCurrentTime->setObjectName(QStringLiteral("leCurrentTime"));

        verticalLayout->addWidget(leCurrentTime);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pbtStart->setText(QApplication::translate("Widget", "\355\203\200\354\235\264\353\250\270\354\213\234\354\236\221", Q_NULLPTR));
        pbtStop->setText(QApplication::translate("Widget", "\355\203\200\354\235\264\353\250\270\354\244\221\354\247\200", Q_NULLPTR));
        leCurrentTime->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

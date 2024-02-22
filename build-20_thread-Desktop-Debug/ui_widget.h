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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
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
    QPushButton *pbtIsRunning;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
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

        pbtIsRunning = new QPushButton(Widget);
        pbtIsRunning->setObjectName(QStringLiteral("pbtIsRunning"));

        horizontalLayout->addWidget(pbtIsRunning);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pbtStart->setText(QApplication::translate("Widget", "thread\354\213\234\354\236\221", Q_NULLPTR));
        pbtStop->setText(QApplication::translate("Widget", "thread\354\244\221\354\247\200", Q_NULLPTR));
        pbtIsRunning->setText(QApplication::translate("Widget", "\353\217\231\354\236\221\354\244\221\354\235\270\354\247\200\355\231\225\354\235\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

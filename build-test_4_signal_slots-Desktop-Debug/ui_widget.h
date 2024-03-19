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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QSlider *hSlider;
    QTextEdit *leText;
    QTextEdit *leTextCopy;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(208, 156);
        hSlider = new QSlider(Widget);
        hSlider->setObjectName(QStringLiteral("hSlider"));
        hSlider->setGeometry(QRect(20, 20, 160, 16));
        hSlider->setOrientation(Qt::Horizontal);
        leText = new QTextEdit(Widget);
        leText->setObjectName(QStringLiteral("leText"));
        leText->setGeometry(QRect(30, 40, 151, 41));
        leTextCopy = new QTextEdit(Widget);
        leTextCopy->setObjectName(QStringLiteral("leTextCopy"));
        leTextCopy->setGeometry(QRect(30, 90, 151, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

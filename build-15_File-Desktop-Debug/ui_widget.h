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
#include <QtWidgets/QGroupBox>
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
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *leKeyboard;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *leMonitor;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pbtSave;
    QPushButton *pbtRead;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(340, 459);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        leKeyboard = new QLineEdit(groupBox);
        leKeyboard->setObjectName(QStringLiteral("leKeyboard"));

        horizontalLayout_3->addWidget(leKeyboard);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        leMonitor = new QLineEdit(groupBox);
        leMonitor->setObjectName(QStringLiteral("leMonitor"));

        horizontalLayout_2->addWidget(leMonitor);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pbtSave = new QPushButton(Widget);
        pbtSave->setObjectName(QStringLiteral("pbtSave"));

        horizontalLayout_5->addWidget(pbtSave);

        pbtRead = new QPushButton(Widget);
        pbtRead->setObjectName(QStringLiteral("pbtRead"));

        horizontalLayout_5->addWidget(pbtRead);


        verticalLayout->addLayout(horizontalLayout_5);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\352\260\200\352\262\251\354\240\225\353\263\264", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\355\202\244\353\263\264\353\223\234\352\260\200\352\262\251(\354\233\220)", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\353\252\250\353\213\210\355\204\260\352\260\200\352\262\251(\354\233\220)", Q_NULLPTR));
        pbtSave->setText(QApplication::translate("Widget", "\352\260\200\352\262\251\354\240\225\353\263\264\354\240\200\354\236\245", Q_NULLPTR));
        pbtRead->setText(QApplication::translate("Widget", "\352\260\200\352\262\251\354\240\225\353\263\264\354\235\275\354\226\264\354\230\244\352\270\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

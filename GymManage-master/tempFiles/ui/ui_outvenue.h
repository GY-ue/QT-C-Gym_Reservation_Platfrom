/********************************************************************************
** Form generated from reading UI file 'outvenue.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTvenue_H
#define UI_OUTvenue_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_outvenue
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *outvenue)
    {
        if (outvenue->objectName().isEmpty())
            outvenue->setObjectName(QStringLiteral("outvenue"));
        outvenue->resize(447, 343);
        pushButton = new QPushButton(outvenue);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 160, 93, 28));

        retranslateUi(outvenue);

        QMetaObject::connectSlotsByName(outvenue);
    } // setupUi

    void retranslateUi(QWidget *outvenue)
    {
        outvenue->setWindowTitle(QApplication::translate("outvenue", "Form", 0));
        pushButton->setText(QApplication::translate("outvenue", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class outvenue: public Ui_outvenue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTvenue_H

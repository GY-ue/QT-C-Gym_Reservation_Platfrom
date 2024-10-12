/********************************************************************************
** Form generated from reading UI file 'out.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUT_H
#define UI_OUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Out
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *button_find;
    QPushButton *button_out;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Out)
    {
        if (Out->objectName().isEmpty())
            Out->setObjectName(QStringLiteral("Out"));
        Out->resize(578, 363);
        gridLayout_4 = new QGridLayout(Out);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox = new QGroupBox(Out);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout_3->addWidget(tableView, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Out);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        button_find = new QPushButton(groupBox_2);
        button_find->setObjectName(QStringLiteral("button_find"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(button_find->sizePolicy().hasHeightForWidth());
        button_find->setSizePolicy(sizePolicy2);
        button_find->setMinimumSize(QSize(90, 25));

        gridLayout->addWidget(button_find, 0, 0, 1, 1);

        button_out = new QPushButton(groupBox_2);
        button_out->setObjectName(QStringLiteral("button_out"));
        sizePolicy2.setHeightForWidth(button_out->sizePolicy().hasHeightForWidth());
        button_out->setSizePolicy(sizePolicy2);
        button_out->setMinimumSize(QSize(90, 25));

        gridLayout->addWidget(button_out, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 228, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);


        retranslateUi(Out);

        QMetaObject::connectSlotsByName(Out);
    } // setupUi

    void retranslateUi(QWidget *Out)
    {
        Out->setWindowTitle(QApplication::translate("Out", "Form", 0));
        groupBox->setTitle(QApplication::translate("Out", "\351\241\276\345\256\242\345\205\245\351\246\206\350\256\260\345\275\225", 0));
        groupBox_2->setTitle(QString());
        button_find->setText(QApplication::translate("Out", "\346\237\245\346\211\276", 0));
        button_out->setText(QApplication::translate("Out", "\345\257\274\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Out: public Ui_Out {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUT_H

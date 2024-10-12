/********************************************************************************
** Form generated from reading UI file 'checkoutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOUTDIALOG_H
#define UI_CHECKOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CheckOutDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QLabel *label;
    QLineEdit *lineEdit_no;
    QPushButton *button_find;
    QPushButton *push_find;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QDialog *CheckOutDialog)
    {
        if (CheckOutDialog->objectName().isEmpty())
            CheckOutDialog->setObjectName(QStringLiteral("CheckOutDialog"));
        CheckOutDialog->resize(619, 575);
        verticalLayout_3 = new QVBoxLayout(CheckOutDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(CheckOutDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        groupBox_2 = new QGroupBox(CheckOutDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        groupBox_2->setFont(font1);
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 20, -1, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        lineEdit_name = new QLineEdit(groupBox_2);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_name->sizePolicy().hasHeightForWidth());
        lineEdit_name->setSizePolicy(sizePolicy1);
        lineEdit_name->setMinimumSize(QSize(190, 26));

        gridLayout->addWidget(lineEdit_name, 1, 2, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        lineEdit_no = new QLineEdit(groupBox_2);
        lineEdit_no->setObjectName(QStringLiteral("lineEdit_no"));
        sizePolicy1.setHeightForWidth(lineEdit_no->sizePolicy().hasHeightForWidth());
        lineEdit_no->setSizePolicy(sizePolicy1);
        lineEdit_no->setMinimumSize(QSize(190, 26));

        gridLayout->addWidget(lineEdit_no, 0, 2, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        button_find = new QPushButton(groupBox_2);
        button_find->setObjectName(QStringLiteral("button_find"));
        button_find->setMinimumSize(QSize(80, 30));

        horizontalLayout_2->addWidget(button_find);

        push_find = new QPushButton(groupBox_2);
        push_find->setObjectName(QStringLiteral("push_find"));
        push_find->setMinimumSize(QSize(80, 30));

        horizontalLayout_2->addWidget(push_find);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_5->addWidget(groupBox_2);


        verticalLayout_2->addLayout(horizontalLayout_5);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(CheckOutDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(500, 300));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(CheckOutDialog);

        QMetaObject::connectSlotsByName(CheckOutDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckOutDialog)
    {
        CheckOutDialog->setWindowTitle(QApplication::translate("CheckOutDialog", "Dialog", 0));
        label_3->setText(QApplication::translate("CheckOutDialog", "\343\200\220\344\270\232\345\212\241\347\256\241\347\220\206\343\200\221--\351\241\276\345\256\242\347\246\273\351\246\206", 0));
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("CheckOutDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label->setText(QApplication::translate("CheckOutDialog", "\345\234\272\345\234\260\345\217\267\357\274\232", 0));
        button_find->setText(QApplication::translate("CheckOutDialog", "\347\246\273\351\246\206", 0));
        push_find->setText(QApplication::translate("CheckOutDialog", "\346\237\245\346\211\276", 0));
        groupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class CheckOutDialog: public Ui_CheckOutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOUTDIALOG_H

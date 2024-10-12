/********************************************************************************
** Form generated from reading UI file 'costomerregisterinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COSTOMERREGISTERINFODIALOG_H
#define UI_COSTOMERREGISTERINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_CostomerRegisterInfoDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labUserNo;
    QLabel *labUserName_2;
    QLineEdit *CustomerNo;
    QLabel *labUserName_3;
    QLabel *labUserPwd;
    QLineEdit *CustomerName;
    QLabel *labUserPwd_5;
    QLabel *labUserPwd_3;
    QLineEdit *CustomerPhone;
    QLabel *labUserPwd_4;
    QLabel *labUserPwd_6;
    QLineEdit *CustomerRePwd;
    QCheckBox *checkBoxPwd;
    QLineEdit *ledCustomDate;
    QLineEdit *CustomerAddress;
    QLineEdit *CustomerRemark;
    QSpacerItem *horizontalSpacer;
    QLineEdit *ledSex;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbnModify;
    QPushButton *pbnSave;
    QPushButton *pbnCancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *CostomerRegisterInfoDialog)
    {
        if (CostomerRegisterInfoDialog->objectName().isEmpty())
            CostomerRegisterInfoDialog->setObjectName(QStringLiteral("CostomerRegisterInfoDialog"));
        CostomerRegisterInfoDialog->resize(570, 478);
        verticalLayout_3 = new QVBoxLayout(CostomerRegisterInfoDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(CostomerRegisterInfoDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        groupBox->setFont(font);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 20, -1, -1);
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox_2 = new QGroupBox(CostomerRegisterInfoDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labUserNo = new QLabel(groupBox_2);
        labUserNo->setObjectName(QStringLiteral("labUserNo"));
        labUserNo->setFont(font);

        gridLayout->addWidget(labUserNo, 0, 0, 1, 1);

        labUserName_2 = new QLabel(groupBox_2);
        labUserName_2->setObjectName(QStringLiteral("labUserName_2"));
        labUserName_2->setFont(font);

        gridLayout->addWidget(labUserName_2, 0, 2, 1, 1);

        CustomerNo = new QLineEdit(groupBox_2);
        CustomerNo->setObjectName(QStringLiteral("CustomerNo"));
        CustomerNo->setFont(font);
        CustomerNo->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(CustomerNo, 0, 1, 1, 1);

        labUserName_3 = new QLabel(groupBox_2);
        labUserName_3->setObjectName(QStringLiteral("labUserName_3"));
        labUserName_3->setFont(font);

        gridLayout->addWidget(labUserName_3, 1, 0, 1, 1);

        labUserPwd = new QLabel(groupBox_2);
        labUserPwd->setObjectName(QStringLiteral("labUserPwd"));
        labUserPwd->setFont(font);

        gridLayout->addWidget(labUserPwd, 1, 2, 1, 1);

        CustomerName = new QLineEdit(groupBox_2);
        CustomerName->setObjectName(QStringLiteral("CustomerName"));
        CustomerName->setFont(font);
        CustomerName->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(CustomerName, 1, 1, 1, 1);

        labUserPwd_5 = new QLabel(groupBox_2);
        labUserPwd_5->setObjectName(QStringLiteral("labUserPwd_5"));
        labUserPwd_5->setFont(font);

        gridLayout->addWidget(labUserPwd_5, 4, 0, 1, 1);

        labUserPwd_3 = new QLabel(groupBox_2);
        labUserPwd_3->setObjectName(QStringLiteral("labUserPwd_3"));
        labUserPwd_3->setFont(font);

        gridLayout->addWidget(labUserPwd_3, 3, 0, 1, 1);

        CustomerPhone = new QLineEdit(groupBox_2);
        CustomerPhone->setObjectName(QStringLiteral("CustomerPhone"));
        CustomerPhone->setFont(font);
        CustomerPhone->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(CustomerPhone, 2, 1, 1, 1);

        labUserPwd_4 = new QLabel(groupBox_2);
        labUserPwd_4->setObjectName(QStringLiteral("labUserPwd_4"));
        labUserPwd_4->setFont(font);

        gridLayout->addWidget(labUserPwd_4, 2, 0, 1, 1);

        labUserPwd_6 = new QLabel(groupBox_2);
        labUserPwd_6->setObjectName(QStringLiteral("labUserPwd_6"));
        labUserPwd_6->setFont(font);

        gridLayout->addWidget(labUserPwd_6, 2, 2, 1, 1);

        CustomerRePwd = new QLineEdit(groupBox_2);
        CustomerRePwd->setObjectName(QStringLiteral("CustomerRePwd"));
        CustomerRePwd->setFont(font);
        CustomerRePwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(CustomerRePwd, 1, 3, 1, 2);

        checkBoxPwd = new QCheckBox(groupBox_2);
        checkBoxPwd->setObjectName(QStringLiteral("checkBoxPwd"));
        checkBoxPwd->setFont(font);

        gridLayout->addWidget(checkBoxPwd, 1, 5, 1, 1);

        ledCustomDate = new QLineEdit(groupBox_2);
        ledCustomDate->setObjectName(QStringLiteral("ledCustomDate"));
        ledCustomDate->setFont(font);

        gridLayout->addWidget(ledCustomDate, 2, 3, 1, 3);

        CustomerAddress = new QLineEdit(groupBox_2);
        CustomerAddress->setObjectName(QStringLiteral("CustomerAddress"));
        CustomerAddress->setFont(font);
        CustomerAddress->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(CustomerAddress, 3, 1, 1, 5);

        CustomerRemark = new QLineEdit(groupBox_2);
        CustomerRemark->setObjectName(QStringLiteral("CustomerRemark"));
        CustomerRemark->setFont(font);

        gridLayout->addWidget(CustomerRemark, 4, 1, 1, 5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 2);

        ledSex = new QLineEdit(groupBox_2);
        ledSex->setObjectName(QStringLiteral("ledSex"));
        ledSex->setFont(font);

        gridLayout->addWidget(ledSex, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout_4->addWidget(groupBox_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pbnModify = new QPushButton(CostomerRegisterInfoDialog);
        pbnModify->setObjectName(QStringLiteral("pbnModify"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbnModify->sizePolicy().hasHeightForWidth());
        pbnModify->setSizePolicy(sizePolicy);
        pbnModify->setMinimumSize(QSize(80, 0));
        pbnModify->setFont(font);
        pbnModify->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbnModify);

        pbnSave = new QPushButton(CostomerRegisterInfoDialog);
        pbnSave->setObjectName(QStringLiteral("pbnSave"));
        sizePolicy.setHeightForWidth(pbnSave->sizePolicy().hasHeightForWidth());
        pbnSave->setSizePolicy(sizePolicy);
        pbnSave->setMinimumSize(QSize(80, 0));
        pbnSave->setFont(font);
        pbnSave->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbnSave);

        pbnCancel = new QPushButton(CostomerRegisterInfoDialog);
        pbnCancel->setObjectName(QStringLiteral("pbnCancel"));
        sizePolicy.setHeightForWidth(pbnCancel->sizePolicy().hasHeightForWidth());
        pbnCancel->setSizePolicy(sizePolicy);
        pbnCancel->setMinimumSize(QSize(80, 20));
        pbnCancel->setFont(font);
        pbnCancel->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbnCancel);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(CostomerRegisterInfoDialog);

        QMetaObject::connectSlotsByName(CostomerRegisterInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *CostomerRegisterInfoDialog)
    {
        CostomerRegisterInfoDialog->setWindowTitle(QApplication::translate("CostomerRegisterInfoDialog", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("CostomerRegisterInfoDialog", "\345\256\242\346\210\267\344\277\241\346\201\257", 0));
        groupBox_2->setTitle(QString());
        labUserNo->setText(QApplication::translate("CostomerRegisterInfoDialog", "\347\274\226\345\217\267\357\274\232*", 0));
        labUserName_2->setText(QApplication::translate("CostomerRegisterInfoDialog", "\346\200\247\345\210\253\357\274\232*", 0));
        CustomerNo->setPlaceholderText(QApplication::translate("CostomerRegisterInfoDialog", "\350\257\267\350\276\223\345\205\245\347\274\226\345\217\267", 0));
        labUserName_3->setText(QApplication::translate("CostomerRegisterInfoDialog", "\346\230\265\347\247\260\357\274\232*", 0));
        labUserPwd->setText(QApplication::translate("CostomerRegisterInfoDialog", "\345\257\206\347\240\201\357\274\232*", 0));
        CustomerName->setPlaceholderText(QApplication::translate("CostomerRegisterInfoDialog", "\350\257\267\350\276\223\345\205\245\346\230\265\347\247\260", 0));
        labUserPwd_5->setText(QApplication::translate("CostomerRegisterInfoDialog", "\345\244\207\346\263\250\357\274\232", 0));
        labUserPwd_3->setText(QApplication::translate("CostomerRegisterInfoDialog", "\345\234\260\345\235\200\357\274\232", 0));
        CustomerPhone->setPlaceholderText(QApplication::translate("CostomerRegisterInfoDialog", "\350\257\267\350\276\223\345\205\24511\344\275\215\345\217\267\347\240\201", 0));
        labUserPwd_4->setText(QApplication::translate("CostomerRegisterInfoDialog", "\347\224\265\350\257\235\357\274\232", 0));
        labUserPwd_6->setText(QApplication::translate("CostomerRegisterInfoDialog", "\346\263\250\345\206\214\346\227\266\351\227\264\357\274\232", 0));
        CustomerRePwd->setPlaceholderText(QApplication::translate("CostomerRegisterInfoDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        checkBoxPwd->setText(QApplication::translate("CostomerRegisterInfoDialog", "\346\230\276\347\244\272", 0));
#ifndef QT_NO_TOOLTIP
        ledCustomDate->setToolTip(QApplication::translate("CostomerRegisterInfoDialog", "\350\207\252\345\212\250\347\224\237\346\210\220", 0));
#endif // QT_NO_TOOLTIP
        ledCustomDate->setPlaceholderText(QString());
        CustomerAddress->setPlaceholderText(QApplication::translate("CostomerRegisterInfoDialog", "\345\241\253\345\206\231\350\257\246\347\273\206\345\234\260\345\235\200", 0));
        CustomerRemark->setPlaceholderText(QApplication::translate("CostomerRegisterInfoDialog", "\345\217\257\344\273\245\344\270\215\345\241\253", 0));
        ledSex->setPlaceholderText(QApplication::translate("CostomerRegisterInfoDialog", "\350\257\267\350\276\223\345\205\245\346\200\247\345\210\253", 0));
        pbnModify->setText(QApplication::translate("CostomerRegisterInfoDialog", "\344\277\256\346\224\271", 0));
        pbnSave->setText(QApplication::translate("CostomerRegisterInfoDialog", "\344\277\235\345\255\230", 0));
        pbnCancel->setText(QApplication::translate("CostomerRegisterInfoDialog", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class CostomerRegisterInfoDialog: public Ui_CostomerRegisterInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COSTOMERREGISTERINFODIALOG_H

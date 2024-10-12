/********************************************************************************
** Form generated from reading UI file 'modiftvenueprice.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFTvenuePRICE_H
#define UI_MODIFTvenuePRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModiftvenuePrice
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEditName;
    QLabel *label_3;
    QLineEdit *lineEditPrice;
    QLabel *label;
    QLineEdit *lineEditNo;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbnModify;
    QPushButton *pbnSave;
    QPushButton *pbnCancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *ModiftvenuePrice)
    {
        if (ModiftvenuePrice->objectName().isEmpty())
            ModiftvenuePrice->setObjectName(QStringLiteral("ModiftvenuePrice"));
        ModiftvenuePrice->resize(490, 409);
        verticalLayout_4 = new QVBoxLayout(ModiftvenuePrice);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        groupBox = new QGroupBox(ModiftvenuePrice);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMaximumSize(QSize(16777215, 300));

        verticalLayout->addWidget(tableView);


        horizontalLayout_5->addWidget(groupBox);

        label_6 = new QLabel(ModiftvenuePrice);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setStyleSheet(QStringLiteral("image: url(:/image/house/06.jpg);"));

        horizontalLayout_5->addWidget(label_6);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_2 = new QGroupBox(ModiftvenuePrice);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEditName = new QLineEdit(groupBox_2);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditName->sizePolicy().hasHeightForWidth());
        lineEditName->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEditName, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(11);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEditPrice = new QLineEdit(groupBox_2);
        lineEditPrice->setObjectName(QStringLiteral("lineEditPrice"));
        sizePolicy1.setHeightForWidth(lineEditPrice->sizePolicy().hasHeightForWidth());
        lineEditPrice->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEditPrice, 2, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditNo = new QLineEdit(groupBox_2);
        lineEditNo->setObjectName(QStringLiteral("lineEditNo"));
        sizePolicy1.setHeightForWidth(lineEditNo->sizePolicy().hasHeightForWidth());
        lineEditNo->setSizePolicy(sizePolicy1);
        lineEditNo->setMinimumSize(QSize(40, 26));

        gridLayout->addWidget(lineEditNo, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 2, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        horizontalLayout_3->addWidget(groupBox_2);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pbnModify = new QPushButton(ModiftvenuePrice);
        pbnModify->setObjectName(QStringLiteral("pbnModify"));
        sizePolicy1.setHeightForWidth(pbnModify->sizePolicy().hasHeightForWidth());
        pbnModify->setSizePolicy(sizePolicy1);
        pbnModify->setMinimumSize(QSize(80, 0));
        pbnModify->setFont(font);
        pbnModify->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbnModify);

        pbnSave = new QPushButton(ModiftvenuePrice);
        pbnSave->setObjectName(QStringLiteral("pbnSave"));
        sizePolicy1.setHeightForWidth(pbnSave->sizePolicy().hasHeightForWidth());
        pbnSave->setSizePolicy(sizePolicy1);
        pbnSave->setMinimumSize(QSize(80, 0));
        pbnSave->setFont(font);
        pbnSave->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbnSave);

        pbnCancel = new QPushButton(ModiftvenuePrice);
        pbnCancel->setObjectName(QStringLiteral("pbnCancel"));
        sizePolicy1.setHeightForWidth(pbnCancel->sizePolicy().hasHeightForWidth());
        pbnCancel->setSizePolicy(sizePolicy1);
        pbnCancel->setMinimumSize(QSize(80, 23));
        pbnCancel->setFont(font);
        pbnCancel->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbnCancel);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(ModiftvenuePrice);

        QMetaObject::connectSlotsByName(ModiftvenuePrice);
    } // setupUi

    void retranslateUi(QWidget *ModiftvenuePrice)
    {
        ModiftvenuePrice->setWindowTitle(QApplication::translate("ModiftvenuePrice", "Form", 0));
        groupBox->setTitle(QApplication::translate("ModiftvenuePrice", "\345\234\272\345\234\260\344\277\241\346\201\257", 0));
        label_6->setText(QString());
        groupBox_2->setTitle(QString());
        lineEditName->setPlaceholderText(QApplication::translate("ModiftvenuePrice", "\350\257\267\350\276\223\345\205\245\345\220\215\347\247\260", 0));
        label_3->setText(QApplication::translate("ModiftvenuePrice", "\344\273\267\346\240\274\357\274\232", 0));
        lineEditPrice->setPlaceholderText(QApplication::translate("ModiftvenuePrice", "\350\257\267\350\276\223\345\205\245\344\273\267\346\240\274", 0));
        label->setText(QApplication::translate("ModiftvenuePrice", "\345\234\272\345\234\260\347\261\273\345\236\213\347\274\226\345\217\267\357\274\232", 0));
        lineEditNo->setPlaceholderText(QApplication::translate("ModiftvenuePrice", "\350\257\267\350\276\223\345\205\245\347\261\273\345\236\213\347\274\226\345\217\267", 0));
        label_2->setText(QApplication::translate("ModiftvenuePrice", "\345\220\215\347\247\260\357\274\232", 0));
        label_4->setText(QApplication::translate("ModiftvenuePrice", "\347\261\273\345\236\213\347\274\226\345\217\267\344\273\216 1 \345\274\200\345\247\213", 0));
        label_5->setText(QApplication::translate("ModiftvenuePrice", "\345\234\272\345\234\260\346\257\217\345\260\217\346\227\266\345\215\225\344\275\215\357\274\232\345\205\203", 0));
        pbnModify->setText(QApplication::translate("ModiftvenuePrice", "\344\277\256\346\224\271", 0));
        pbnSave->setText(QApplication::translate("ModiftvenuePrice", "\344\277\235\345\255\230", 0));
        pbnCancel->setText(QApplication::translate("ModiftvenuePrice", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class ModiftvenuePrice: public Ui_ModiftvenuePrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFTvenuePRICE_H

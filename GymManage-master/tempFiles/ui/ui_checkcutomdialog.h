/********************************************************************************
** Form generated from reading UI file 'checkcutomdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKCUTOMDIALOG_H
#define UI_CHECKCUTOMDIALOG_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CheckCutomDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *lineEditCustomName;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditRoomId;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditroomTypeId;
    QLabel *label_9;
    QLineEdit *lineEditCustomPhone;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *label_2;
    QLineEdit *lineEditCustomOrderId;
    QLineEdit *lineEditRemark;
    QLabel *label_14;
    QLabel *label_16;
    QLineEdit *lineEditCustomCash;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbnCheckOk;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *CheckCutomDialog)
    {
        if (CheckCutomDialog->objectName().isEmpty())
            CheckCutomDialog->setObjectName(QStringLiteral("CheckCutomDialog"));
        CheckCutomDialog->resize(664, 429);
        verticalLayout_4 = new QVBoxLayout(CheckCutomDialog);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(1, 2, 2, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        label = new QLabel(CheckCutomDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 50));
        label->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        groupBox = new QGroupBox(CheckCutomDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(630, 300));
        QFont font1;
        font1.setPointSize(14);
        groupBox->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEditCustomName = new QLineEdit(groupBox);
        lineEditCustomName->setObjectName(QStringLiteral("lineEditCustomName"));
        lineEditCustomName->setMinimumSize(QSize(0, 26));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        lineEditCustomName->setFont(font2);

        gridLayout->addWidget(lineEditCustomName, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        gridLayout->addLayout(horizontalLayout_2, 1, 2, 1, 4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEditRoomId = new QLineEdit(groupBox);
        lineEditRoomId->setObjectName(QStringLiteral("lineEditRoomId"));
        lineEditRoomId->setMinimumSize(QSize(0, 26));
        lineEditRoomId->setFont(font2);

        horizontalLayout_3->addWidget(lineEditRoomId);


        gridLayout->addLayout(horizontalLayout_3, 0, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 2, 2, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font2);

        gridLayout->addWidget(label_13, 4, 3, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineEditroomTypeId = new QLineEdit(groupBox);
        lineEditroomTypeId->setObjectName(QStringLiteral("lineEditroomTypeId"));
        lineEditroomTypeId->setMinimumSize(QSize(0, 26));
        lineEditroomTypeId->setFont(font2);

        horizontalLayout_4->addWidget(lineEditroomTypeId);


        gridLayout->addLayout(horizontalLayout_4, 0, 5, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        lineEditCustomPhone = new QLineEdit(groupBox);
        lineEditCustomPhone->setObjectName(QStringLiteral("lineEditCustomPhone"));
        lineEditCustomPhone->setMinimumSize(QSize(0, 26));
        lineEditCustomPhone->setFont(font2);

        gridLayout->addWidget(lineEditCustomPhone, 4, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font2);

        gridLayout->addWidget(label_11, 4, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 0, 3, 1, 2);

        lineEditCustomOrderId = new QLineEdit(groupBox);
        lineEditCustomOrderId->setObjectName(QStringLiteral("lineEditCustomOrderId"));
        lineEditCustomOrderId->setMinimumSize(QSize(0, 26));
        lineEditCustomOrderId->setFont(font2);
        lineEditCustomOrderId->setCursor(QCursor(Qt::BlankCursor));

        gridLayout->addWidget(lineEditCustomOrderId, 4, 4, 1, 2);

        lineEditRemark = new QLineEdit(groupBox);
        lineEditRemark->setObjectName(QStringLiteral("lineEditRemark"));
        lineEditRemark->setMinimumSize(QSize(0, 60));
        lineEditRemark->setFont(font2);

        gridLayout->addWidget(lineEditRemark, 5, 1, 1, 5);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font2);

        gridLayout->addWidget(label_14, 5, 0, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font2);

        gridLayout->addWidget(label_16, 2, 3, 1, 1);

        lineEditCustomCash = new QLineEdit(groupBox);
        lineEditCustomCash->setObjectName(QStringLiteral("lineEditCustomCash"));
        lineEditCustomCash->setMinimumSize(QSize(0, 26));
        lineEditCustomCash->setFont(font2);

        gridLayout->addWidget(lineEditCustomCash, 2, 4, 1, 2);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        pbnCheckOk = new QPushButton(groupBox);
        pbnCheckOk->setObjectName(QStringLiteral("pbnCheckOk"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbnCheckOk->sizePolicy().hasHeightForWidth());
        pbnCheckOk->setSizePolicy(sizePolicy1);
        pbnCheckOk->setMinimumSize(QSize(90, 25));
        pbnCheckOk->setFont(font2);
        pbnCheckOk->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_6->addWidget(pbnCheckOk);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout_2->addWidget(groupBox, 0, 1, 2, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 2);


        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(CheckCutomDialog);

        QMetaObject::connectSlotsByName(CheckCutomDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckCutomDialog)
    {
        CheckCutomDialog->setWindowTitle(QApplication::translate("CheckCutomDialog", "Dialog", 0));
        label->setText(QApplication::translate("CheckCutomDialog", "\346\235\245\345\256\242\344\277\241\346\201\257\347\231\273\350\256\260\350\241\250", 0));
        groupBox->setTitle(QString());
        lineEditCustomName->setPlaceholderText(QApplication::translate("CheckCutomDialog", "\345\256\242\346\210\267\345\247\223\345\220\215", 0));
        lineEditRoomId->setPlaceholderText(QApplication::translate("CheckCutomDialog", "\350\257\267\350\276\223\345\205\245\347\274\226\345\217\267", 0));
        label_13->setText(QApplication::translate("CheckCutomDialog", "\350\256\242\345\215\225\345\217\267\357\274\232", 0));
        lineEditroomTypeId->setPlaceholderText(QApplication::translate("CheckCutomDialog", "\350\257\267\350\276\223\345\205\245\345\234\272\345\234\260\347\261\273\345\236\213\347\274\226\345\217\267", 0));
        label_9->setText(QApplication::translate("CheckCutomDialog", "*\351\241\276\345\256\242\345\247\223\345\220\215\357\274\232", 0));
        lineEditCustomPhone->setPlaceholderText(QApplication::translate("CheckCutomDialog", "\345\256\242\346\210\267\347\224\265\350\257\235", 0));
        label_4->setText(QApplication::translate("CheckCutomDialog", "*\345\234\272\345\234\260\347\274\226\345\217\267:", 0));
        label_11->setText(QApplication::translate("CheckCutomDialog", "\351\241\276\345\256\242\347\224\265\350\257\235\357\274\232", 0));
        label_2->setText(QApplication::translate("CheckCutomDialog", "*\345\234\272\345\234\260\347\261\273\345\236\213\347\274\226\345\217\267:", 0));
        lineEditCustomOrderId->setPlaceholderText(QApplication::translate("CheckCutomDialog", "\350\207\252\345\212\250\347\224\237\346\210\220", 0));
        lineEditRemark->setPlaceholderText(QApplication::translate("CheckCutomDialog", "\347\233\270\345\272\224\347\232\204\345\244\207\346\263\250\344\277\241\346\201\257", 0));
        label_14->setText(QApplication::translate("CheckCutomDialog", "\345\244\207\346\263\250\357\274\232", 0));
        label_16->setText(QApplication::translate("CheckCutomDialog", "\351\241\276\345\256\242\346\224\257\344\273\230\357\274\232", 0));
        lineEditCustomCash->setPlaceholderText(QApplication::translate("CheckCutomDialog", "\345\256\242\346\210\267\346\224\257\344\273\230", 0));
#ifndef QT_NO_TOOLTIP
        pbnCheckOk->setToolTip(QApplication::translate("CheckCutomDialog", "\347\231\273\350\256\260", 0));
#endif // QT_NO_TOOLTIP
        pbnCheckOk->setText(QApplication::translate("CheckCutomDialog", "\347\231\273\350\256\260", 0));
    } // retranslateUi

};

namespace Ui {
    class CheckCutomDialog: public Ui_CheckCutomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKCUTOMDIALOG_H

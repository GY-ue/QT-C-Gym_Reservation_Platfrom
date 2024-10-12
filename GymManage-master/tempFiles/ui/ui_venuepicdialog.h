/********************************************************************************
** Form generated from reading UI file 'venuepicdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_venuePICDIALOG_H
#define UI_venuePICDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_venuePicDialog
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QDialog *venuePicDialog)
    {
        if (venuePicDialog->objectName().isEmpty())
            venuePicDialog->setObjectName(QStringLiteral("venuePicDialog"));
        venuePicDialog->resize(642, 541);
        gridLayout_3 = new QGridLayout(venuePicDialog);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox = new QGroupBox(venuePicDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        groupBox->setFont(font);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(180, 120));
        label->setMaximumSize(QSize(180, 120));
        label->setStyleSheet(QStringLiteral(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/house/01.jpg")));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(180, 120));
        label_2->setMaximumSize(QSize(180, 120));
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image/house/02.jpg")));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(180, 120));
        label_3->setMaximumSize(QSize(180, 120));
        label_3->setStyleSheet(QStringLiteral(""));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/image/house/03.jpg")));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(venuePicDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font);
        gridLayout_8 = new QGridLayout(groupBox_2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(180, 120));
        label_4->setMaximumSize(QSize(180, 120));
        label_4->setStyleSheet(QStringLiteral(""));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/image/house/06.jpg")));

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setMinimumSize(QSize(180, 120));
        label_6->setMaximumSize(QSize(180, 120));
        label_6->setStyleSheet(QStringLiteral(""));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/image/house/06.jpg")));

        gridLayout_7->addWidget(label_6, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(180, 120));
        label_5->setMaximumSize(QSize(180, 120));
        label_5->setStyleSheet(QStringLiteral(""));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/image/house/06.jpg")));

        gridLayout_7->addWidget(label_5, 0, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 2, 2);


        gridLayout_4->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(venuePicDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFont(font);
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setMinimumSize(QSize(180, 120));
        label_8->setMaximumSize(QSize(180, 120));
        label_8->setStyleSheet(QStringLiteral(""));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/image/house/08.jpg")));

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setMinimumSize(QSize(180, 120));
        label_9->setMaximumSize(QSize(180, 120));
        label_9->setStyleSheet(QStringLiteral(""));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/image/house/09.jpg")));

        gridLayout_5->addWidget(label_9, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setMinimumSize(QSize(180, 120));
        label_10->setMaximumSize(QSize(180, 120));
        label_10->setStyleSheet(QStringLiteral(""));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/image/house/07.jpg")));

        gridLayout_5->addWidget(label_10, 0, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 0, 0, 1, 1);


        retranslateUi(venuePicDialog);

        QMetaObject::connectSlotsByName(venuePicDialog);
    } // setupUi

    void retranslateUi(QDialog *venuePicDialog)
    {
        venuePicDialog->setWindowTitle(QApplication::translate("venuePicDialog", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("venuePicDialog", "\347\276\275\346\257\233\347\220\203\345\234\272\345\234\260\346\265\217\350\247\2101", 0));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        groupBox_2->setTitle(QApplication::translate("venuePicDialog", "\347\257\256\347\220\203\345\234\272\345\234\260\346\265\217\350\247\2102", 0));
        label_4->setText(QString());
        label_6->setText(QString());
        label_5->setText(QString());
        groupBox_3->setTitle(QApplication::translate("venuePicDialog", "\347\275\221\347\220\203\345\234\272\345\234\260\346\265\217\350\247\2103", 0));
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class venuePicDialog: public Ui_venuePicDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_venuePICDIALOG_H

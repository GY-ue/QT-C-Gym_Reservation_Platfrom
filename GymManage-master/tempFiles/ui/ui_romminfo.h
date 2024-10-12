/********************************************************************************
** Form generated from reading UI file 'romminfo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROMMINFO_H
#define UI_ROMMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RommInfo
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *RommInfo)
    {
        if (RommInfo->objectName().isEmpty())
            RommInfo->setObjectName(QStringLiteral("RommInfo"));
        RommInfo->resize(1314, 536);
        verticalLayout_4 = new QVBoxLayout(RommInfo);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_3 = new QGroupBox(RommInfo);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        groupBox_3->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setTextFormat(Qt::AutoText);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox = new QGroupBox(RommInfo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(RommInfo);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(78, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(groupBox_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(RommInfo);

        QMetaObject::connectSlotsByName(RommInfo);
    } // setupUi

    void retranslateUi(QWidget *RommInfo)
    {
        RommInfo->setWindowTitle(QApplication::translate("RommInfo", "Form", 0));
        groupBox_3->setTitle(QApplication::translate("RommInfo", "\347\276\275\346\257\233\347\220\203\345\234\272\345\234\260", 0));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("RommInfo", "\347\257\256\347\220\203\345\234\272\345\234\260", 0));
        label_2->setText(QString());
        groupBox_2->setTitle(QApplication::translate("RommInfo", "\347\275\221\347\220\203\345\234\272\345\234\260", 0));
    } // retranslateUi

};

namespace Ui {
    class RommInfo: public Ui_RommInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROMMINFO_H

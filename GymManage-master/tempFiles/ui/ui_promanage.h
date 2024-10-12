/********************************************************************************
** Form generated from reading UI file 'promanage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMANAGE_H
#define UI_PROMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProManage
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *Datetimelabel;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QComboBox *comboBoxvenueStatus;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_3;
    QComboBox *comboBoxvenueType;
    QLabel *labelvenueNo;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ProManage)
    {
        if (ProManage->objectName().isEmpty())
            ProManage->setObjectName(QStringLiteral("ProManage"));
        ProManage->resize(676, 426);
        verticalLayout_4 = new QVBoxLayout(ProManage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(ProManage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        groupBox->setFont(font);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(7, 18, -1, -1);
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->verticalHeader()->setDefaultSectionSize(30);
        tableView->verticalHeader()->setMinimumSectionSize(20);

        horizontalLayout->addWidget(tableView);


        verticalLayout_3->addWidget(groupBox);


        horizontalLayout_5->addLayout(verticalLayout_3);

        groupBox_2 = new QGroupBox(ProManage);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(130, 0));
        groupBox_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 20, 12, -1);
        Datetimelabel = new QLabel(groupBox_2);
        Datetimelabel->setObjectName(QStringLiteral("Datetimelabel"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        Datetimelabel->setFont(font1);

        verticalLayout_2->addWidget(Datetimelabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(checkBox);

        comboBoxvenueStatus = new QComboBox(groupBox_2);
        comboBoxvenueStatus->setObjectName(QStringLiteral("comboBoxvenueStatus"));
        comboBoxvenueStatus->setMinimumSize(QSize(120, 35));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        comboBoxvenueStatus->setFont(font2);
        comboBoxvenueStatus->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(comboBoxvenueStatus);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        checkBox_3 = new QCheckBox(groupBox_2);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        sizePolicy.setHeightForWidth(checkBox_3->sizePolicy().hasHeightForWidth());
        checkBox_3->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(checkBox_3);

        comboBoxvenueType = new QComboBox(groupBox_2);
        comboBoxvenueType->addItem(QString());
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/venuetype/signal.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxvenueType->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/venuetype/double.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxvenueType->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/venuetype/luxury.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxvenueType->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/venuetype/president.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxvenueType->addItem(icon3, QString());
        comboBoxvenueType->setObjectName(QStringLiteral("comboBoxvenueType"));
        comboBoxvenueType->setMinimumSize(QSize(120, 35));
        comboBoxvenueType->setFont(font2);
        comboBoxvenueType->setCursor(QCursor(Qt::OpenHandCursor));
        comboBoxvenueType->setMinimumContentsLength(5);

        horizontalLayout_4->addWidget(comboBoxvenueType);


        verticalLayout->addLayout(horizontalLayout_4);

        labelvenueNo = new QLabel(groupBox_2);
        labelvenueNo->setObjectName(QStringLiteral("labelvenueNo"));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        labelvenueNo->setFont(font3);
        labelvenueNo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelvenueNo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_5->addWidget(groupBox_2);


        verticalLayout_4->addLayout(horizontalLayout_5);


        retranslateUi(ProManage);

        QMetaObject::connectSlotsByName(ProManage);
    } // setupUi

    void retranslateUi(QWidget *ProManage)
    {
        ProManage->setWindowTitle(QApplication::translate("ProManage", "Form", 0));
        groupBox->setTitle(QApplication::translate("ProManage", "\346\264\227\350\241\243\346\234\272\347\212\266\346\200\201\345\233\276", 0));
        groupBox_2->setTitle(QApplication::translate("ProManage", "\350\257\264\346\230\216", 0));
        Datetimelabel->setText(QString());
        checkBox->setText(QString());
        comboBoxvenueStatus->clear();
        comboBoxvenueStatus->insertItems(0, QStringList()
         << QApplication::translate("ProManage", "\344\270\215\351\231\220\347\212\266\346\200\201", 0)
         << QApplication::translate("ProManage", "\351\231\220\347\251\272\345\234\272\345\234\260", 0)
         << QApplication::translate("ProManage", "\351\231\220\346\273\241\345\234\272\345\234\260", 0)
         << QApplication::translate("ProManage", "\351\231\220\347\273\264\346\212\244\345\234\272\345\234\260", 0)
        );
        checkBox_3->setText(QString());
        comboBoxvenueType->setItemText(0, QApplication::translate("ProManage", "\346\211\200\346\234\211\347\261\273\345\236\213\345\234\272\345\234\260", 0));
        comboBoxvenueType->setItemText(1, QApplication::translate("ProManage", "(1)\347\276\275\346\257\233\347\220\203\345\234\272\345\234\260", 0));
        comboBoxvenueType->setItemText(2, QApplication::translate("ProManage", "(2)\346\210\267\345\244\226\347\257\256\347\220\203\345\234\272\345\234\260", 0));
        comboBoxvenueType->setItemText(3, QApplication::translate("ProManage", "(3)\345\256\244\345\206\205\347\257\256\347\220\203\345\234\272\345\234\260", 0));
        comboBoxvenueType->setItemText(4, QApplication::translate("ProManage", "(4)\347\275\221\347\220\203\345\234\272\345\234\260", 0));

        comboBoxvenueType->setCurrentText(QApplication::translate("ProManage", "\346\211\200\346\234\211\347\261\273\345\236\213\345\234\272\345\234\260", 0));
        labelvenueNo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProManage: public Ui_ProManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMANAGE_H

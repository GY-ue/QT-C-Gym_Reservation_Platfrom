/********************************************************************************
** Form generated from reading UI file 'logblogdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGBLOGDIALOG_H
#define UI_LOGBLOGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogBlogDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *gboxTop;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QCheckBox *ckUserName;
    QComboBox *cboxUserName;
    QGridLayout *gridLayout_3;
    QPushButton *btnDelete;
    QPushButton *btnSelect;
    QPushButton *btnExcel;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QDialog *LogBlogDialog)
    {
        if (LogBlogDialog->objectName().isEmpty())
            LogBlogDialog->setObjectName(QStringLiteral("LogBlogDialog"));
        LogBlogDialog->resize(820, 466);
        verticalLayout_3 = new QVBoxLayout(LogBlogDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gboxTop = new QGroupBox(LogBlogDialog);
        gboxTop->setObjectName(QStringLiteral("gboxTop"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        gboxTop->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(gboxTop);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        horizontalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        ckUserName = new QCheckBox(gboxTop);
        ckUserName->setObjectName(QStringLiteral("ckUserName"));

        gridLayout_2->addWidget(ckUserName, 0, 0, 1, 1);

        cboxUserName = new QComboBox(gboxTop);
        cboxUserName->setObjectName(QStringLiteral("cboxUserName"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        cboxUserName->setFont(font1);

        gridLayout_2->addWidget(cboxUserName, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addWidget(gboxTop);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        btnDelete = new QPushButton(LogBlogDialog);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDelete->setIcon(icon);
        btnDelete->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(btnDelete, 0, 1, 1, 1);

        btnSelect = new QPushButton(LogBlogDialog);
        btnSelect->setObjectName(QStringLiteral("btnSelect"));
        btnSelect->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/select.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSelect->setIcon(icon1);
        btnSelect->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(btnSelect, 0, 0, 1, 1);

        btnExcel = new QPushButton(LogBlogDialog);
        btnExcel->setObjectName(QStringLiteral("btnExcel"));
        btnExcel->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExcel->setIcon(icon2);
        btnExcel->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(btnExcel, 0, 2, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(LogBlogDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 20, -1, -1);
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        verticalLayout_2->addWidget(groupBox);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(LogBlogDialog);

        QMetaObject::connectSlotsByName(LogBlogDialog);
    } // setupUi

    void retranslateUi(QDialog *LogBlogDialog)
    {
        LogBlogDialog->setWindowTitle(QApplication::translate("LogBlogDialog", "Dialog", 0));
        gboxTop->setTitle(QString());
        ckUserName->setText(QApplication::translate("LogBlogDialog", "\346\223\215\344\275\234\345\221\230", 0));
        cboxUserName->clear();
        cboxUserName->insertItems(0, QStringList()
         << QApplication::translate("LogBlogDialog", "\347\256\241\347\220\206\345\221\230", 0)
         << QApplication::translate("LogBlogDialog", "\351\241\276\345\256\242", 0)
        );
        btnDelete->setText(QApplication::translate("LogBlogDialog", "\345\210\240\351\231\244(&D)", 0));
        btnSelect->setText(QApplication::translate("LogBlogDialog", "\346\237\245\350\257\242(&S)", 0));
#ifndef QT_NO_TOOLTIP
        btnExcel->setToolTip(QApplication::translate("LogBlogDialog", "\345\212\237\350\203\275\345\274\200\345\217\221\344\270\255", 0));
#endif // QT_NO_TOOLTIP
        btnExcel->setText(QApplication::translate("LogBlogDialog", "\345\257\274\345\207\272(&E)", 0));
        groupBox->setTitle(QApplication::translate("LogBlogDialog", "\346\223\215\344\275\234\346\227\245\345\277\227", 0));
    } // retranslateUi

};

namespace Ui {
    class LogBlogDialog: public Ui_LogBlogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGBLOGDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_Ico;
    QLabel *lab_Title;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMenu;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Close;
    QGroupBox *groupBox;
    QLabel *labUserName;
    QLabel *labUserPwd;
    QLineEdit *txtUserPwd;
    QPushButton *btnLogin;
    QPushButton *btnresgister;
    QRadioButton *radioButtonCustomer;
    QRadioButton *radioButtonAdmin;
    QLineEdit *txtUserName;
    QLabel *labCompany;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(450, 282);
        widget_title = new QWidget(LoginDialog);
        widget_title->setObjectName(QStringLiteral("widget_title"));
        widget_title->setGeometry(QRect(0, 0, 451, 33));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(100, 33));
        widget_title->setMouseTracking(false);
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lab_Ico = new QLabel(widget_title);
        lab_Ico->setObjectName(QStringLiteral("lab_Ico"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_Ico->sizePolicy().hasHeightForWidth());
        lab_Ico->setSizePolicy(sizePolicy1);
        lab_Ico->setMinimumSize(QSize(30, 0));
        lab_Ico->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lab_Ico);

        lab_Title = new QLabel(widget_title);
        lab_Title->setObjectName(QStringLiteral("lab_Title"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lab_Title->setFont(font);
        lab_Title->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lab_Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lab_Title);

        widget_menu = new QWidget(widget_title);
        widget_menu->setObjectName(QStringLiteral("widget_menu"));
        sizePolicy1.setHeightForWidth(widget_menu->sizePolicy().hasHeightForWidth());
        widget_menu->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget_menu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnMenu = new QPushButton(widget_menu);
        btnMenu->setObjectName(QStringLiteral("btnMenu"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnMenu->sizePolicy().hasHeightForWidth());
        btnMenu->setSizePolicy(sizePolicy3);
        btnMenu->setMinimumSize(QSize(31, 0));
        btnMenu->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu->setFocusPolicy(Qt::NoFocus);
        btnMenu->setFlat(true);

        horizontalLayout->addWidget(btnMenu);

        btnMenu_Min = new QPushButton(widget_menu);
        btnMenu_Min->setObjectName(QStringLiteral("btnMenu_Min"));
        sizePolicy3.setHeightForWidth(btnMenu_Min->sizePolicy().hasHeightForWidth());
        btnMenu_Min->setSizePolicy(sizePolicy3);
        btnMenu_Min->setMinimumSize(QSize(31, 0));
        btnMenu_Min->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Min->setFocusPolicy(Qt::NoFocus);
        btnMenu_Min->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Min);

        btnMenu_Close = new QPushButton(widget_menu);
        btnMenu_Close->setObjectName(QStringLiteral("btnMenu_Close"));
        sizePolicy3.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy3);
        btnMenu_Close->setMinimumSize(QSize(40, 0));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);
        btnMenu_Close->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Close);


        horizontalLayout_2->addWidget(widget_menu);

        groupBox = new QGroupBox(LoginDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 421, 211));
        labUserName = new QLabel(groupBox);
        labUserName->setObjectName(QStringLiteral("labUserName"));
        labUserName->setGeometry(QRect(20, 20, 71, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        labUserName->setFont(font1);
        labUserPwd = new QLabel(groupBox);
        labUserPwd->setObjectName(QStringLiteral("labUserPwd"));
        labUserPwd->setGeometry(QRect(20, 60, 91, 31));
        labUserPwd->setFont(font1);
        txtUserPwd = new QLineEdit(groupBox);
        txtUserPwd->setObjectName(QStringLiteral("txtUserPwd"));
        txtUserPwd->setGeometry(QRect(120, 60, 161, 28));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        txtUserPwd->setFont(font2);
        txtUserPwd->setEchoMode(QLineEdit::Password);
        txtUserPwd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnLogin = new QPushButton(groupBox);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(300, 20, 101, 28));
        btnLogin->setFont(font1);
        btnLogin->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLogin->setIcon(icon);
        btnLogin->setIconSize(QSize(20, 20));
        btnresgister = new QPushButton(groupBox);
        btnresgister->setObjectName(QStringLiteral("btnresgister"));
        btnresgister->setGeometry(QRect(300, 60, 101, 28));
        btnresgister->setFont(font1);
        btnresgister->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnresgister->setIcon(icon1);
        btnresgister->setIconSize(QSize(20, 20));
        radioButtonCustomer = new QRadioButton(groupBox);
        radioButtonCustomer->setObjectName(QStringLiteral("radioButtonCustomer"));
        radioButtonCustomer->setGeometry(QRect(130, 110, 89, 16));
        radioButtonCustomer->setFont(font2);
        radioButtonAdmin = new QRadioButton(groupBox);
        radioButtonAdmin->setObjectName(QStringLiteral("radioButtonAdmin"));
        radioButtonAdmin->setGeometry(QRect(234, 110, 89, 16));
        radioButtonAdmin->setFont(font2);
        txtUserName = new QLineEdit(groupBox);
        txtUserName->setObjectName(QStringLiteral("txtUserName"));
        txtUserName->setGeometry(QRect(120, 19, 161, 28));
        txtUserName->setFont(font1);
        labCompany = new QLabel(groupBox);
        labCompany->setObjectName(QStringLiteral("labCompany"));
        labCompany->setGeometry(QRect(80, 160, 261, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Adobe \344\273\277\345\256\213 Std R"));
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        labCompany->setFont(font3);
        labCompany->setStyleSheet(QString::fromUtf8("font: 11pt \"Adobe \344\273\277\345\256\213 Std R\";"));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", 0));
        lab_Ico->setText(QString());
        lab_Title->setText(QApplication::translate("LoginDialog", "G^y^\344\275\223\350\202\262\345\234\272\351\246\206\351\242\204\347\272\246", 0));
#ifndef QT_NO_TOOLTIP
        btnMenu->setToolTip(QApplication::translate("LoginDialog", "\350\217\234\345\215\225", 0));
#endif // QT_NO_TOOLTIP
        btnMenu->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Min->setToolTip(QApplication::translate("LoginDialog", "\346\234\200\345\260\217\345\214\226", 0));
#endif // QT_NO_TOOLTIP
        btnMenu_Min->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Close->setToolTip(QApplication::translate("LoginDialog", "\345\205\263\351\227\255", 0));
#endif // QT_NO_TOOLTIP
        btnMenu_Close->setText(QString());
        groupBox->setTitle(QString());
        labUserName->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225\345\220\215:", 0));
        labUserPwd->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225\345\257\206\347\240\201\357\274\232", 0));
#ifndef QT_NO_TOOLTIP
        txtUserPwd->setToolTip(QApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
#endif // QT_NO_TOOLTIP
        txtUserPwd->setText(QString());
        txtUserPwd->setPlaceholderText(QApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        btnLogin->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225(&L)", 0));
#ifndef QT_NO_TOOLTIP
        btnresgister->setToolTip(QApplication::translate("LoginDialog", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        btnresgister->setWhatsThis(QApplication::translate("LoginDialog", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        btnresgister->setText(QApplication::translate("LoginDialog", "\346\263\250\345\206\214(&R)", 0));
        radioButtonCustomer->setText(QApplication::translate("LoginDialog", "\347\224\250\346\210\267", 0));
        radioButtonAdmin->setText(QApplication::translate("LoginDialog", "\347\256\241\347\220\206\345\221\230", 0));
        labCompany->setText(QApplication::translate("LoginDialog", "\346\254\242\350\277\216\347\231\273\345\275\225\357\274\214\346\226\260\347\224\250\346\210\267\345\217\257\350\207\252\350\241\214\346\263\250\345\206\214\344\275\277\347\224\250", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_Ico;
    QLabel *lab_Title;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMenu;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Max;
    QPushButton *btnMenu_Close;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page_5;
    QPushButton *pbnCheck;
    QPushButton *pbnAsk;
    QPushButton *pbnHint;
    QPushButton *pbnCheckOut;
    QWidget *page_9;
    QPushButton *pbnvenueLock;
    QPushButton *pbnModify;
    QPushButton *pbnvenueInfo;
    QWidget *page_6;
    QPushButton *pbnRegisterInfo;
    QWidget *page_2;
    QPushButton *pbnBackDatabase;
    QWidget *page_3;
    QPushButton *pbnModiftPwd;
    QPushButton *pbnLonBlog;
    QStackedWidget *stackedWidget;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *page_8;
    QGroupBox *groupBox_Down;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbnbackhome;
    QLabel *label_CurrentUser;
    QLabel *label_SoftTime;
    QLabel *label_CurrentTime;
    QLabel *label_CompanyName;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(997, 684);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget_title = new QWidget(Widget);
        widget_title->setObjectName(QStringLiteral("widget_title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(100, 33));
        widget_title->setMouseTracking(false);
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
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
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
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

        btnMenu_Max = new QPushButton(widget_menu);
        btnMenu_Max->setObjectName(QStringLiteral("btnMenu_Max"));
        sizePolicy3.setHeightForWidth(btnMenu_Max->sizePolicy().hasHeightForWidth());
        btnMenu_Max->setSizePolicy(sizePolicy3);
        btnMenu_Max->setMinimumSize(QSize(31, 0));
        btnMenu_Max->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Max->setFocusPolicy(Qt::NoFocus);
        btnMenu_Max->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Max);

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


        verticalLayout_3->addWidget(widget_title);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, -1, -1, -1);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy4);
        groupBox->setMinimumSize(QSize(110, 0));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(9, 3, 3, 6);
        toolBox = new QToolBox(groupBox);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        sizePolicy4.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy4);
        toolBox->setMinimumSize(QSize(93, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        toolBox->setFont(font1);
        toolBox->setCursor(QCursor(Qt::ArrowCursor));
        toolBox->setStyleSheet(QStringLiteral(""));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 93, 442));
        pbnCheck = new QPushButton(page_5);
        pbnCheck->setObjectName(QStringLiteral("pbnCheck"));
        pbnCheck->setGeometry(QRect(1, 42, 93, 30));
        pbnCheck->setMinimumSize(QSize(0, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        pbnCheck->setFont(font2);
        pbnCheck->setCursor(QCursor(Qt::OpenHandCursor));
        pbnCheck->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));
        pbnAsk = new QPushButton(page_5);
        pbnAsk->setObjectName(QStringLiteral("pbnAsk"));
        pbnAsk->setGeometry(QRect(1, 3, 93, 30));
        pbnAsk->setMinimumSize(QSize(0, 30));
        pbnAsk->setFont(font2);
        pbnAsk->setCursor(QCursor(Qt::OpenHandCursor));
        pbnAsk->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));
        pbnHint = new QPushButton(page_5);
        pbnHint->setObjectName(QStringLiteral("pbnHint"));
        pbnHint->setGeometry(QRect(1, 120, 93, 30));
        pbnHint->setMinimumSize(QSize(0, 30));
        pbnHint->setFont(font2);
        pbnHint->setCursor(QCursor(Qt::OpenHandCursor));
        pbnHint->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));
        pbnCheckOut = new QPushButton(page_5);
        pbnCheckOut->setObjectName(QStringLiteral("pbnCheckOut"));
        pbnCheckOut->setGeometry(QRect(0, 81, 91, 30));
        pbnCheckOut->setMinimumSize(QSize(0, 30));
        pbnCheckOut->setFont(font2);
        pbnCheckOut->setCursor(QCursor(Qt::OpenHandCursor));
        pbnCheckOut->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));
        toolBox->addItem(page_5, QString::fromUtf8("\344\270\232\345\212\241\347\256\241\347\220\206"));
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        page_9->setGeometry(QRect(0, 0, 93, 442));
        pbnvenueLock = new QPushButton(page_9);
        pbnvenueLock->setObjectName(QStringLiteral("pbnvenueLock"));
        pbnvenueLock->setGeometry(QRect(0, 41, 93, 30));
        pbnvenueLock->setMinimumSize(QSize(0, 30));
        pbnvenueLock->setFont(font2);
        pbnvenueLock->setCursor(QCursor(Qt::OpenHandCursor));
        pbnvenueLock->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));
        pbnModify = new QPushButton(page_9);
        pbnModify->setObjectName(QStringLiteral("pbnModify"));
        pbnModify->setGeometry(QRect(0, 78, 93, 30));
        pbnModify->setMinimumSize(QSize(0, 30));
        pbnModify->setFont(font2);
        pbnModify->setCursor(QCursor(Qt::OpenHandCursor));
        pbnModify->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));
        pbnvenueInfo = new QPushButton(page_9);
        pbnvenueInfo->setObjectName(QStringLiteral("pbnvenueInfo"));
        pbnvenueInfo->setGeometry(QRect(0, 4, 93, 30));
        pbnvenueInfo->setMinimumSize(QSize(0, 30));
        pbnvenueInfo->setFont(font2);
        pbnvenueInfo->setCursor(QCursor(Qt::OpenHandCursor));
        pbnvenueInfo->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));
        toolBox->addItem(page_9, QString::fromUtf8("\345\234\272\351\246\206\344\277\241\346\201\257"));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        page_6->setGeometry(QRect(0, 0, 93, 442));
        pbnRegisterInfo = new QPushButton(page_6);
        pbnRegisterInfo->setObjectName(QStringLiteral("pbnRegisterInfo"));
        pbnRegisterInfo->setGeometry(QRect(0, 0, 93, 30));
        pbnRegisterInfo->setMinimumSize(QSize(0, 30));
        pbnRegisterInfo->setFont(font2);
        pbnRegisterInfo->setCursor(QCursor(Qt::OpenHandCursor));
        pbnRegisterInfo->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));
        toolBox->addItem(page_6, QString::fromUtf8("\345\256\242\346\210\267\347\256\241\347\220\206"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 93, 442));
        pbnBackDatabase = new QPushButton(page_2);
        pbnBackDatabase->setObjectName(QStringLiteral("pbnBackDatabase"));
        pbnBackDatabase->setGeometry(QRect(0, 0, 93, 30));
        pbnBackDatabase->setMinimumSize(QSize(0, 30));
        pbnBackDatabase->setFont(font2);
        pbnBackDatabase->setCursor(QCursor(Qt::OpenHandCursor));
        pbnBackDatabase->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));
        toolBox->addItem(page_2, QString::fromUtf8("\347\263\273\347\273\237\350\256\276\347\275\256"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 93, 442));
        pbnModiftPwd = new QPushButton(page_3);
        pbnModiftPwd->setObjectName(QStringLiteral("pbnModiftPwd"));
        pbnModiftPwd->setGeometry(QRect(0, 10, 93, 30));
        pbnModiftPwd->setMinimumSize(QSize(0, 30));
        pbnModiftPwd->setFont(font2);
        pbnModiftPwd->setCursor(QCursor(Qt::OpenHandCursor));
        pbnModiftPwd->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));
        pbnLonBlog = new QPushButton(page_3);
        pbnLonBlog->setObjectName(QStringLiteral("pbnLonBlog"));
        pbnLonBlog->setGeometry(QRect(0, 50, 93, 30));
        pbnLonBlog->setMinimumSize(QSize(0, 30));
        pbnLonBlog->setFont(font2);
        pbnLonBlog->setCursor(QCursor(Qt::OpenHandCursor));
        pbnLonBlog->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));
        toolBox->addItem(page_3, QString::fromUtf8("\344\270\252\344\272\272\344\270\255\345\277\203"));

        verticalLayout->addWidget(toolBox);


        horizontalLayout_4->addWidget(groupBox);

        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        verticalLayout_2 = new QVBoxLayout(page_7);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(page_7);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-image: url(:/image/venue/back.jpg);"));

        verticalLayout_2->addWidget(label);

        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        stackedWidget->addWidget(page_8);

        horizontalLayout_4->addWidget(stackedWidget);


        verticalLayout_3->addLayout(horizontalLayout_4);

        groupBox_Down = new QGroupBox(Widget);
        groupBox_Down->setObjectName(QStringLiteral("groupBox_Down"));
        sizePolicy.setHeightForWidth(groupBox_Down->sizePolicy().hasHeightForWidth());
        groupBox_Down->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(groupBox_Down);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 11, 0, 0);
        horizontalSpacer = new QSpacerItem(8, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pbnbackhome = new QPushButton(groupBox_Down);
        pbnbackhome->setObjectName(QStringLiteral("pbnbackhome"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pbnbackhome->sizePolicy().hasHeightForWidth());
        pbnbackhome->setSizePolicy(sizePolicy5);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(12);
        pbnbackhome->setFont(font3);
        pbnbackhome->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_3->addWidget(pbnbackhome);

        label_CurrentUser = new QLabel(groupBox_Down);
        label_CurrentUser->setObjectName(QStringLiteral("label_CurrentUser"));
        QFont font4;
        font4.setPointSize(12);
        label_CurrentUser->setFont(font4);

        horizontalLayout_3->addWidget(label_CurrentUser);

        label_SoftTime = new QLabel(groupBox_Down);
        label_SoftTime->setObjectName(QStringLiteral("label_SoftTime"));
        label_SoftTime->setFont(font4);

        horizontalLayout_3->addWidget(label_SoftTime);

        label_CurrentTime = new QLabel(groupBox_Down);
        label_CurrentTime->setObjectName(QStringLiteral("label_CurrentTime"));
        label_CurrentTime->setFont(font4);

        horizontalLayout_3->addWidget(label_CurrentTime);

        label_CompanyName = new QLabel(groupBox_Down);
        label_CompanyName->setObjectName(QStringLiteral("label_CompanyName"));
        label_CompanyName->setFont(font4);

        horizontalLayout_3->addWidget(label_CompanyName);


        verticalLayout_3->addWidget(groupBox_Down);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(Widget);

        toolBox->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        lab_Ico->setText(QString());
        lab_Title->setText(QApplication::translate("Widget", "\344\275\223\350\202\262\351\246\206\351\242\204\347\272\246\345\271\263\345\217\260\342\200\224\347\256\241\347\220\206\347\253\257", 0));
#ifndef QT_NO_TOOLTIP
        btnMenu->setToolTip(QApplication::translate("Widget", "\350\217\234\345\215\225", 0));
#endif // QT_NO_TOOLTIP
        btnMenu->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Min->setToolTip(QApplication::translate("Widget", "\346\234\200\345\260\217\345\214\226", 0));
#endif // QT_NO_TOOLTIP
        btnMenu_Min->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Max->setToolTip(QApplication::translate("Widget", "\346\234\200\345\244\247\345\214\226", 0));
#endif // QT_NO_TOOLTIP
        btnMenu_Max->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Close->setToolTip(QApplication::translate("Widget", "\345\205\263\351\227\255", 0));
#endif // QT_NO_TOOLTIP
        btnMenu_Close->setText(QString());
        groupBox->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        pbnCheck->setToolTip(QApplication::translate("Widget", "\346\235\245\345\256\242\347\231\273\350\256\260", 0));
#endif // QT_NO_TOOLTIP
        pbnCheck->setText(QApplication::translate("Widget", "\345\205\245\351\246\206\347\231\273\350\256\260", 0));
#ifndef QT_NO_TOOLTIP
        pbnAsk->setToolTip(QApplication::translate("Widget", "\345\211\215\345\217\260\344\270\255\345\277\203", 0));
#endif // QT_NO_TOOLTIP
        pbnAsk->setText(QApplication::translate("Widget", "\345\211\215\345\217\260\344\270\255\345\277\203", 0));
#ifndef QT_NO_TOOLTIP
        pbnHint->setToolTip(QApplication::translate("Widget", "\345\212\237\350\203\275\345\274\200\345\217\221\344\270\255", 0));
#endif // QT_NO_TOOLTIP
        pbnHint->setText(QApplication::translate("Widget", "\347\255\276\345\210\260\350\256\260\345\275\225", 0));
#ifndef QT_NO_TOOLTIP
        pbnCheckOut->setToolTip(QApplication::translate("Widget", "\345\256\242\345\212\241\344\270\255\345\277\203", 0));
#endif // QT_NO_TOOLTIP
        pbnCheckOut->setText(QApplication::translate("Widget", "\351\241\276\345\256\242\347\246\273\351\246\206", 0));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("Widget", "\344\270\232\345\212\241\347\256\241\347\220\206", 0));
        pbnvenueLock->setText(QApplication::translate("Widget", "\345\234\272\345\234\260\346\265\217\350\247\210", 0));
        pbnModify->setText(QApplication::translate("Widget", "\344\273\267\346\240\274\350\260\203\346\225\264", 0));
#ifndef QT_NO_TOOLTIP
        pbnvenueInfo->setToolTip(QApplication::translate("Widget", "\345\234\272\345\234\260\344\273\213\347\273\215", 0));
#endif // QT_NO_TOOLTIP
        pbnvenueInfo->setText(QApplication::translate("Widget", "\345\234\272\345\234\260\344\273\213\347\273\215", 0));
        toolBox->setItemText(toolBox->indexOf(page_9), QApplication::translate("Widget", "\345\234\272\351\246\206\344\277\241\346\201\257", 0));
        pbnRegisterInfo->setText(QApplication::translate("Widget", "\346\263\250\345\206\214\347\224\250\346\210\267", 0));
        toolBox->setItemText(toolBox->indexOf(page_6), QApplication::translate("Widget", "\345\256\242\346\210\267\347\256\241\347\220\206", 0));
#ifndef QT_NO_TOOLTIP
        pbnBackDatabase->setToolTip(QApplication::translate("Widget", "\346\225\260\346\215\256\345\272\223\345\244\207\344\273\275", 0));
#endif // QT_NO_TOOLTIP
        pbnBackDatabase->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\345\244\207\344\273\275", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("Widget", "\347\263\273\347\273\237\350\256\276\347\275\256", 0));
#ifndef QT_NO_TOOLTIP
        pbnModiftPwd->setToolTip(QApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
#endif // QT_NO_TOOLTIP
        pbnModiftPwd->setText(QApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
#ifndef QT_NO_TOOLTIP
        pbnLonBlog->setToolTip(QApplication::translate("Widget", "\346\223\215\344\275\234\346\227\245\345\277\227", 0));
#endif // QT_NO_TOOLTIP
        pbnLonBlog->setText(QApplication::translate("Widget", "\346\223\215\344\275\234\346\227\245\345\277\227", 0));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("Widget", "\344\270\252\344\272\272\344\270\255\345\277\203", 0));
        label->setText(QString());
        groupBox_Down->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        pbnbackhome->setToolTip(QApplication::translate("Widget", "\350\277\224\345\233\236\344\270\273\351\241\265", 0));
#endif // QT_NO_TOOLTIP
        pbnbackhome->setText(QApplication::translate("Widget", "\350\277\224\345\233\236\344\270\273\351\241\265", 0));
        label_CurrentUser->setText(QApplication::translate("Widget", "\345\275\223\345\211\215\347\224\250\346\210\267", 0));
        label_SoftTime->setText(QApplication::translate("Widget", "\347\263\273\347\273\237\350\277\220\350\241\214\346\227\266\351\227\264", 0));
        label_CurrentTime->setText(QApplication::translate("Widget", "\345\275\223\345\211\215\346\227\266\351\227\264", 0));
        label_CompanyName->setText(QApplication::translate("Widget", "\345\205\254\345\217\270", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

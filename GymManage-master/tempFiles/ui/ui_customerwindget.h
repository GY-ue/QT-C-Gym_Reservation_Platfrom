/********************************************************************************
** Form generated from reading UI file 'customerwindget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERWINDGET_H
#define UI_CUSTOMERWINDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerWindget
{
public:
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lab_Ico;
    QLabel *lab_Title;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnMenu;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Max;
    QPushButton *btnMenu_Close;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pbnroomPicture;
    QPushButton *punroom;
    QPushButton *pbnGuest;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_14;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableViewRoomInfo;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *letNo;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *letprice;
    QLabel *label_5;
    QLabel *label_3;
    QDateEdit *dateRfrom;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbnROK;
    QPushButton *pbnRoomCancle;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_8;
    QRadioButton *radioButtonOk;
    QRadioButton *radioButtonNo;
    QComboBox *comboBoxRoomType;
    QLabel *label_6;
    QLineEdit *letphones;
    QSpacerItem *horizontalSpacer_3;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QTableView *tableViewCustomeInfo;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLineEdit *letusename;
    QLabel *label_11;
    QLineEdit *letsex;
    QLabel *label_8;
    QLineEdit *letpossword;
    QLabel *label_12;
    QLineEdit *letphone;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_13;
    QLineEdit *letaddress;
    QLabel *label_10;
    QLineEdit *letGnote;
    QLabel *label_9;
    QDateEdit *dateCustomeIn;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pbnmodify;
    QPushButton *pbuModifyOk;
    QPushButton *pbnCancle;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *CustomerWindget)
    {
        if (CustomerWindget->objectName().isEmpty())
            CustomerWindget->setObjectName(QStringLiteral("CustomerWindget"));
        CustomerWindget->resize(764, 555);
        verticalLayout_13 = new QVBoxLayout(CustomerWindget);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        widget_title = new QWidget(CustomerWindget);
        widget_title->setObjectName(QStringLiteral("widget_title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(100, 33));
        widget_title->setMouseTracking(false);
        horizontalLayout_5 = new QHBoxLayout(widget_title);
        horizontalLayout_5->setSpacing(4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lab_Ico = new QLabel(widget_title);
        lab_Ico->setObjectName(QStringLiteral("lab_Ico"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_Ico->sizePolicy().hasHeightForWidth());
        lab_Ico->setSizePolicy(sizePolicy1);
        lab_Ico->setMinimumSize(QSize(30, 0));
        lab_Ico->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lab_Ico);

        lab_Title = new QLabel(widget_title);
        lab_Title->setObjectName(QStringLiteral("lab_Title"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy2);
        lab_Title->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lab_Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lab_Title);

        widget_menu = new QWidget(widget_title);
        widget_menu->setObjectName(QStringLiteral("widget_menu"));
        sizePolicy1.setHeightForWidth(widget_menu->sizePolicy().hasHeightForWidth());
        widget_menu->setSizePolicy(sizePolicy1);
        horizontalLayout_6 = new QHBoxLayout(widget_menu);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
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

        horizontalLayout_6->addWidget(btnMenu);

        btnMenu_Min = new QPushButton(widget_menu);
        btnMenu_Min->setObjectName(QStringLiteral("btnMenu_Min"));
        sizePolicy3.setHeightForWidth(btnMenu_Min->sizePolicy().hasHeightForWidth());
        btnMenu_Min->setSizePolicy(sizePolicy3);
        btnMenu_Min->setMinimumSize(QSize(31, 0));
        btnMenu_Min->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Min->setFocusPolicy(Qt::NoFocus);
        btnMenu_Min->setFlat(true);

        horizontalLayout_6->addWidget(btnMenu_Min);

        btnMenu_Max = new QPushButton(widget_menu);
        btnMenu_Max->setObjectName(QStringLiteral("btnMenu_Max"));
        sizePolicy3.setHeightForWidth(btnMenu_Max->sizePolicy().hasHeightForWidth());
        btnMenu_Max->setSizePolicy(sizePolicy3);
        btnMenu_Max->setMinimumSize(QSize(31, 0));
        btnMenu_Max->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Max->setFocusPolicy(Qt::NoFocus);
        btnMenu_Max->setFlat(true);

        horizontalLayout_6->addWidget(btnMenu_Max);

        btnMenu_Close = new QPushButton(widget_menu);
        btnMenu_Close->setObjectName(QStringLiteral("btnMenu_Close"));
        sizePolicy3.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy3);
        btnMenu_Close->setMinimumSize(QSize(40, 0));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);
        btnMenu_Close->setFlat(true);

        horizontalLayout_6->addWidget(btnMenu_Close);


        horizontalLayout_5->addWidget(widget_menu);


        verticalLayout_12->addWidget(widget_title);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_9 = new QSpacerItem(6, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox = new QGroupBox(CustomerWindget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        groupBox->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 20, -1, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pbnroomPicture = new QPushButton(groupBox);
        pbnroomPicture->setObjectName(QStringLiteral("pbnroomPicture"));
        pbnroomPicture->setMinimumSize(QSize(90, 40));
        pbnroomPicture->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout->addWidget(pbnroomPicture);

        punroom = new QPushButton(groupBox);
        punroom->setObjectName(QStringLiteral("punroom"));
        punroom->setMinimumSize(QSize(90, 40));
        punroom->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout->addWidget(punroom);

        pbnGuest = new QPushButton(groupBox);
        pbnGuest->setObjectName(QStringLiteral("pbnGuest"));
        pbnGuest->setMinimumSize(QSize(90, 40));
        pbnGuest->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout->addWidget(pbnGuest);

        verticalSpacer_2 = new QSpacerItem(28, 60, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_2);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_14->setFont(font1);
        label_14->setTextFormat(Qt::PlainText);
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_14);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_4->addWidget(groupBox);

        stackedWidget = new QStackedWidget(CustomerWindget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_11 = new QVBoxLayout(page);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableViewRoomInfo = new QTableView(groupBox_2);
        tableViewRoomInfo->setObjectName(QStringLiteral("tableViewRoomInfo"));

        verticalLayout_3->addWidget(tableViewRoomInfo);


        verticalLayout_5->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_3 = new QGroupBox(page);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFont(font);
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 20, -1, -1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        letNo = new QLineEdit(groupBox_3);
        letNo->setObjectName(QStringLiteral("letNo"));

        gridLayout->addWidget(letNo, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        letprice = new QLineEdit(groupBox_3);
        letprice->setObjectName(QStringLiteral("letprice"));
        letprice->setEnabled(false);

        gridLayout->addWidget(letprice, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 3, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        dateRfrom = new QDateEdit(groupBox_3);
        dateRfrom->setObjectName(QStringLiteral("dateRfrom"));
        dateRfrom->setEnabled(false);
        dateRfrom->setCalendarPopup(true);

        gridLayout->addWidget(dateRfrom, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        pbnROK = new QPushButton(groupBox_3);
        pbnROK->setObjectName(QStringLiteral("pbnROK"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pbnROK->sizePolicy().hasHeightForWidth());
        pbnROK->setSizePolicy(sizePolicy4);
        pbnROK->setMinimumSize(QSize(80, 30));
        pbnROK->setCursor(QCursor(Qt::OpenHandCursor));

        gridLayout->addWidget(pbnROK, 3, 1, 1, 1);

        pbnRoomCancle = new QPushButton(groupBox_3);
        pbnRoomCancle->setObjectName(QStringLiteral("pbnRoomCancle"));
        sizePolicy4.setHeightForWidth(pbnRoomCancle->sizePolicy().hasHeightForWidth());
        pbnRoomCancle->setSizePolicy(sizePolicy4);
        pbnRoomCancle->setMinimumSize(QSize(80, 30));
        pbnRoomCancle->setCursor(QCursor(Qt::OpenHandCursor));

        gridLayout->addWidget(pbnRoomCancle, 3, 3, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 5, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 3, 2, 1, 1);

        radioButtonOk = new QRadioButton(groupBox_3);
        radioButtonOk->setObjectName(QStringLiteral("radioButtonOk"));

        gridLayout->addWidget(radioButtonOk, 1, 4, 1, 1);

        radioButtonNo = new QRadioButton(groupBox_3);
        radioButtonNo->setObjectName(QStringLiteral("radioButtonNo"));
        sizePolicy4.setHeightForWidth(radioButtonNo->sizePolicy().hasHeightForWidth());
        radioButtonNo->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(radioButtonNo, 1, 5, 1, 1);

        comboBoxRoomType = new QComboBox(groupBox_3);
        comboBoxRoomType->setObjectName(QStringLiteral("comboBoxRoomType"));

        gridLayout->addWidget(comboBoxRoomType, 0, 4, 1, 2);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        letphones = new QLineEdit(groupBox_3);
        letphones->setObjectName(QStringLiteral("letphones"));

        gridLayout->addWidget(letphones, 2, 4, 1, 2);


        verticalLayout_4->addLayout(gridLayout);


        horizontalLayout->addWidget(groupBox_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout_11->addLayout(verticalLayout_5);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_10 = new QVBoxLayout(page_2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        groupBox_4 = new QGroupBox(page_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setFont(font);
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tableViewCustomeInfo = new QTableView(groupBox_4);
        tableViewCustomeInfo->setObjectName(QStringLiteral("tableViewCustomeInfo"));

        verticalLayout_6->addWidget(tableViewCustomeInfo);


        verticalLayout_9->addWidget(groupBox_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_5 = new QGroupBox(page_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setFont(font);
        verticalLayout_8 = new QVBoxLayout(groupBox_5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, 20, -1, -1);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        letusename = new QLineEdit(groupBox_5);
        letusename->setObjectName(QStringLiteral("letusename"));
        letusename->setEnabled(true);

        gridLayout_2->addWidget(letusename, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 0, 2, 1, 1);

        letsex = new QLineEdit(groupBox_5);
        letsex->setObjectName(QStringLiteral("letsex"));

        gridLayout_2->addWidget(letsex, 0, 3, 1, 1);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        letpossword = new QLineEdit(groupBox_5);
        letpossword->setObjectName(QStringLiteral("letpossword"));

        gridLayout_2->addWidget(letpossword, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 1, 2, 1, 1);

        letphone = new QLineEdit(groupBox_5);
        letphone->setObjectName(QStringLiteral("letphone"));

        gridLayout_2->addWidget(letphone, 1, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 2, 1, 2);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 3, 0, 1, 1);

        letaddress = new QLineEdit(groupBox_5);
        letaddress->setObjectName(QStringLiteral("letaddress"));

        gridLayout_2->addWidget(letaddress, 3, 1, 1, 3);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 4, 0, 1, 1);

        letGnote = new QLineEdit(groupBox_5);
        letGnote->setObjectName(QStringLiteral("letGnote"));
        letGnote->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(letGnote, 4, 1, 1, 3);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        dateCustomeIn = new QDateEdit(groupBox_5);
        dateCustomeIn->setObjectName(QStringLiteral("dateCustomeIn"));
        dateCustomeIn->setEnabled(true);
        dateCustomeIn->setCalendarPopup(true);

        gridLayout_2->addWidget(dateCustomeIn, 2, 1, 1, 1);


        verticalLayout_7->addLayout(gridLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        pbnmodify = new QPushButton(groupBox_5);
        pbnmodify->setObjectName(QStringLiteral("pbnmodify"));
        pbnmodify->setMinimumSize(QSize(80, 30));
        pbnmodify->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbnmodify);

        pbuModifyOk = new QPushButton(groupBox_5);
        pbuModifyOk->setObjectName(QStringLiteral("pbuModifyOk"));
        pbuModifyOk->setMinimumSize(QSize(80, 30));
        pbuModifyOk->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbuModifyOk);

        pbnCancle = new QPushButton(groupBox_5);
        pbnCancle->setObjectName(QStringLiteral("pbnCancle"));
        pbnCancle->setMinimumSize(QSize(80, 30));
        pbnCancle->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbnCancle);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_7->addLayout(horizontalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_7);


        horizontalLayout_3->addWidget(groupBox_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_9->addLayout(horizontalLayout_3);


        verticalLayout_10->addLayout(verticalLayout_9);

        stackedWidget->addWidget(page_2);

        horizontalLayout_4->addWidget(stackedWidget);


        horizontalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout_12->addLayout(horizontalLayout_7);


        verticalLayout_13->addLayout(verticalLayout_12);


        retranslateUi(CustomerWindget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CustomerWindget);
    } // setupUi

    void retranslateUi(QWidget *CustomerWindget)
    {
        CustomerWindget->setWindowTitle(QApplication::translate("CustomerWindget", "Form", 0));
        lab_Ico->setText(QString());
        lab_Title->setText(QApplication::translate("CustomerWindget", "\344\275\223\350\202\262\345\234\272\345\234\260\351\242\204\347\272\246\345\271\263\345\217\260\342\200\224\345\256\242\346\210\267\347\253\257", 0));
#ifndef QT_NO_TOOLTIP
        btnMenu->setToolTip(QApplication::translate("CustomerWindget", "\350\217\234\345\215\225", 0));
#endif // QT_NO_TOOLTIP
        btnMenu->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Min->setToolTip(QApplication::translate("CustomerWindget", "\346\234\200\345\260\217\345\214\226", 0));
#endif // QT_NO_TOOLTIP
        btnMenu_Min->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Max->setToolTip(QApplication::translate("CustomerWindget", "\346\234\200\345\244\247\345\214\226", 0));
#endif // QT_NO_TOOLTIP
        btnMenu_Max->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Close->setToolTip(QApplication::translate("CustomerWindget", "\345\205\263\351\227\255", 0));
#endif // QT_NO_TOOLTIP
        btnMenu_Close->setText(QString());
        groupBox->setTitle(QApplication::translate("CustomerWindget", "\344\277\241\346\201\257", 0));
        pbnroomPicture->setText(QApplication::translate("CustomerWindget", "\345\234\272\345\234\260\346\265\217\350\247\210", 0));
        punroom->setText(QApplication::translate("CustomerWindget", "\351\242\204\347\272\246\345\234\272\345\234\260", 0));
        pbnGuest->setText(QApplication::translate("CustomerWindget", "\344\270\252\344\272\272\344\277\241\346\201\257", 0));
        label_14->setText(QApplication::translate("CustomerWindget", "\344\275\223\n"
"\350\202\262\n"
"\351\246\206\n"
"\351\242\204\n"
"\347\272\246\n"
"\345\271\263\n"
"\345\217\260\n"
"", 0));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QApplication::translate("CustomerWindget", "\351\242\204\347\272\246\345\234\272\345\234\260", 0));
        label->setText(QApplication::translate("CustomerWindget", "\345\234\272\345\234\260\347\274\226\345\217\267", 0));
        letNo->setPlaceholderText(QApplication::translate("CustomerWindget", "\350\257\267\350\276\223\345\205\245\347\274\226\345\217\267", 0));
        label_4->setText(QApplication::translate("CustomerWindget", "\347\261\273\345\236\213", 0));
        label_2->setText(QApplication::translate("CustomerWindget", "\344\273\267\346\240\274", 0));
        letprice->setPlaceholderText(QApplication::translate("CustomerWindget", "\350\257\267\350\276\223\345\205\245\344\273\267\346\240\274", 0));
        label_5->setText(QApplication::translate("CustomerWindget", "\345\234\250\347\272\277\346\224\257\344\273\230\357\274\232", 0));
        label_3->setText(QApplication::translate("CustomerWindget", "\351\242\204\345\256\232\346\227\266\351\227\264", 0));
        pbnROK->setText(QApplication::translate("CustomerWindget", "\351\242\204\345\256\232", 0));
        pbnRoomCancle->setText(QApplication::translate("CustomerWindget", "\345\217\226\346\266\210", 0));
        radioButtonOk->setText(QApplication::translate("CustomerWindget", "\346\230\257", 0));
        radioButtonNo->setText(QApplication::translate("CustomerWindget", "\345\220\246", 0));
        comboBoxRoomType->clear();
        comboBoxRoomType->insertItems(0, QStringList()
         << QApplication::translate("CustomerWindget", "(1)\347\276\275\346\257\233\347\220\203\345\234\272\345\234\260", 0)
         << QApplication::translate("CustomerWindget", "(2)\346\210\267\345\244\226\347\257\256\347\220\203\345\234\272\345\234\260", 0)
         << QApplication::translate("CustomerWindget", "(3)\345\256\244\345\206\205\347\257\256\347\220\203\345\234\272\345\234\260", 0)
         << QApplication::translate("CustomerWindget", "(4)\347\275\221\347\220\203\345\234\272\345\234\260", 0)
        );
        label_6->setText(QApplication::translate("CustomerWindget", "\347\224\265\350\257\235:", 0));
        letphones->setText(QString());
        groupBox_4->setTitle(QString());
        groupBox_5->setTitle(QApplication::translate("CustomerWindget", "\344\270\252\344\272\272\344\277\241\346\201\257", 0));
        label_7->setText(QApplication::translate("CustomerWindget", "\347\224\250\346\210\267\345\220\215*", 0));
        letusename->setPlaceholderText(QApplication::translate("CustomerWindget", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", 0));
        label_11->setText(QApplication::translate("CustomerWindget", "\346\200\247\345\210\253", 0));
        letsex->setPlaceholderText(QApplication::translate("CustomerWindget", "\350\257\267\350\276\223\345\205\245\346\200\247\345\210\253", 0));
        label_8->setText(QApplication::translate("CustomerWindget", "\345\257\206\347\240\201*", 0));
        letpossword->setPlaceholderText(QApplication::translate("CustomerWindget", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        label_12->setText(QApplication::translate("CustomerWindget", "\347\224\265\350\257\235*", 0));
        letphone->setPlaceholderText(QApplication::translate("CustomerWindget", "\350\257\267\350\276\223\345\205\245\347\224\265\350\257\235", 0));
        label_13->setText(QApplication::translate("CustomerWindget", "\345\234\260\345\235\200*", 0));
        letaddress->setPlaceholderText(QApplication::translate("CustomerWindget", "\350\257\267\350\276\223\345\205\245\350\257\246\347\273\206\345\234\260\345\235\200", 0));
        label_10->setText(QApplication::translate("CustomerWindget", "\345\244\207\346\263\250", 0));
        letGnote->setPlaceholderText(QApplication::translate("CustomerWindget", "\345\217\257\344\273\245\344\270\215\345\241\253", 0));
        label_9->setText(QApplication::translate("CustomerWindget", "\346\263\250\345\206\214\346\227\266\351\227\264", 0));
        pbnmodify->setText(QApplication::translate("CustomerWindget", "\344\277\256\346\224\271", 0));
        pbuModifyOk->setText(QApplication::translate("CustomerWindget", "\347\241\256\345\256\232", 0));
        pbnCancle->setText(QApplication::translate("CustomerWindget", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerWindget: public Ui_CustomerWindget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERWINDGET_H

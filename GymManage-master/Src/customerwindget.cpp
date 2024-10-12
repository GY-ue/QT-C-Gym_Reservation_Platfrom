#include "customerwindget.h"
#include "ui_customerwindget.h"
#include "app/iconhelper.h"
#include "app/myhelper.h"
#include "app/myapp.h"

#include "logindialog.h"
#include "ui_logindialog.h"

#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDate>

CustomerWindget::CustomerWindget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerWindget)
{
    ui->setupUi(this);
    this->InitForm();
}

CustomerWindget::~CustomerWindget()
{
    delete ui;
}

void CustomerWindget::InitForm()
{
    //ui->letNo->setEnabled(false);//用户编号不允许修改
    //设置窗体标题栏隐藏
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);
    this->setMinimumSize(1000,600);
    location = this->geometry();
    max = false;
    mousePressed = false;
    //安装事件监听器,让标题栏识别鼠标双击
    ui->lab_Title->installEventFilter(this);

    IconHelper::Instance()->SetIcon(ui->btnMenu_Close, QChar(0xf00d), 10);
    IconHelper::Instance()->SetIcon(ui->btnMenu_Max, QChar(0xf096), 10);
    IconHelper::Instance()->SetIcon(ui->btnMenu_Min, QChar(0xf068), 10);
    IconHelper::Instance()->SetIcon(ui->btnMenu, QChar(0xf0c9), 10);
    IconHelper::Instance()->SetIcon(ui->lab_Ico, QChar(0xf015), 12);

    //初始化表格列名和列宽，用于下面函数的TableView控件中显示场地列名
    ColumnNames[0] = tr("场地编号");
    ColumnNames[1] = tr("场地类型");
    ColumnNames[2] = tr("场地价格");
    ColumnNames[3] = tr("场地状态");

    ColumnWidths[0] = 80;
    ColumnWidths[1] = 120;
    ColumnWidths[2] = 120;
    ColumnWidths[3] = 120;

    //顾客信息显示字段初始化，用于下面函数的TableView控件中显示顾客列名
    CustomeColumnNames[0] = "编号";
    CustomeColumnNames[1] = "姓名";
    CustomeColumnNames[2] = "性别";
    CustomeColumnNames[3] = "密码";
    CustomeColumnNames[4] = "电话";
    CustomeColumnNames[5] = "地址";
    CustomeColumnNames[6] = "注册日期";
    CustomeColumnNames[7] = "备注";


    CustomeColumnWidths[0] = 50;
    CustomeColumnWidths[1] = 90;
    CustomeColumnWidths[2] = 100;
    CustomeColumnWidths[3] = 80;
    CustomeColumnWidths[4] = 150;
    CustomeColumnWidths[5] = 200;
    CustomeColumnWidths[6] = 200;
    CustomeColumnWidths[7] = 200;


    BindvenueInfo("venue",ui->tableViewvenueInfo,ColumnNames,ColumnWidths);

    ui->dateRfrom->setDate(QDate::currentDate());
    //ui->dateRto->setDate(QDate::currentDate());
    ui->dateCustomeIn->setDate(QDate::currentDate());

    venuepicture = new venuePicDialog();      //体育馆欣赏界面

    ui->stackedWidget->addWidget(venuepicture);

    this->connect(ui->tableViewCustomeInfo,SIGNAL(clicked(QModelIndex)),SLOT(showCustomInfo()));

    ui->pbnmodify->setEnabled(true);
    ui->pbuModifyOk->setEnabled(false);
    ui->pbnCancle->setEnabled(false);


}

/*
 *函数功能：将场地信息绑定到控件tableview上
*/
void CustomerWindget::BindvenueInfo(QString tableName, QTableView *tableView, QString columnNames[], int columnWidths[])
{
    QueryModel = new QSqlQueryModel(this);
    TableView = tableView;
    QString sql = "SELECT venueNo,Typename,TypePrice,venueState FROM " + tableName+
            ",venueType where venue.venueTypeId = venuetype.venueTypeId and venuestate ='空';";
    QueryModel->setQuery(sql);
    TableView->setModel(QueryModel);

    //用setHeaderData()依次设置TableView控件的列标题、列宽等
    for (int i = 0;i<TableView->model()->columnCount();i++)
    {
        QueryModel->setHeaderData(i,Qt::Horizontal,columnNames[i]);     //设置列标题
        TableView->setColumnWidth(i,columnWidths[i]);                   //设置列宽
    }

    TableView->horizontalHeader()->setHighlightSections(false);         //点击表头时不对表头光亮
    TableView->setSelectionMode(QAbstractItemView::ContiguousSelection);//选中模式为多行选中
    TableView->setSelectionBehavior(QAbstractItemView::SelectRows);     //选中整行
    TableView->setStyleSheet( "QTableView::item:hover{background-color:rgb(92,188,227,200)}"
                              "QTableView::item:selected{background-color:#1B89A1}");
}

/*
 *函数功能：将顾客信息绑定到tableview上
*/
void CustomerWindget::BindCustomeInfo(QString tableName, QTableView *tableView, QString columnNames[], int columnWidths[])
{
    customModel = new QSqlQueryModel(this);

    //QString customename = GetCutrrentUserName("Customelogblog");
    QString customename = Myapp::CurrentUserName;
    qDebug() <<"当前用户名:"<<customename;
    QString sql = "SELECT * FROM " + tableName+
            " where CustomerName ='"+customename+"';";
    qDebug() <<sql;
    QueryModel->setQuery(sql);
    tableView->setModel(QueryModel);

    //依次设置列标题、列宽等
    for (int i = 0;i<tableView->model()->columnCount();i++)
    {
        QueryModel->setHeaderData(i,Qt::Horizontal,columnNames[i]);     //设置Qt TableView列标题
        tableView->setColumnWidth(i,columnWidths[i]);                   //设置列宽
    }

    tableView->horizontalHeader()->setHighlightSections(false);         //点击表头时不对表头光亮
    tableView->setSelectionMode(QAbstractItemView::ContiguousSelection);//选中模式为多行选中
    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);     //选中整行
    tableView->setStyleSheet( "QTableView::item:hover{background-color:rgb(92,188,227,200)}"
                              "QTableView::item:selected{background-color:#1B89A1}");
}

/*
 *函数功能：获取当前登录用户名
*/
QString CustomerWindget::GetCutrrentUserName(QString tablename)
{
    QString sql ="select CustomeName from "+tablename+";";
    QSqlQuery query;
    query.exec(sql);
    query.next();
    qDebug() << query.value(0).toString();
    return query.value(0).toString();
}

bool CustomerWindget::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonDblClick) {
        this->on_btnMenu_Max_clicked();
        return true;
    }
    return QObject::eventFilter(obj, event);
}

//拖动窗口
void CustomerWindget::mouseMoveEvent(QMouseEvent *e)
{
    if (mousePressed && (e->buttons() && Qt::LeftButton) && !max) {
        this->move(e->globalPos() - mousePoint);
        e->accept();
    }
}

void CustomerWindget::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton) {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }
}

void CustomerWindget::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}

void CustomerWindget::on_btnMenu_Max_clicked()
{
    if (max)
    {
        this->setGeometry(location);
        IconHelper::Instance()->SetIcon(ui->btnMenu_Max, QChar(0xf096), 10);
        ui->btnMenu_Max->setToolTip("最大化");
    }
    else
    {
        location = this->geometry();
        this->setGeometry(qApp->desktop()->availableGeometry());
        IconHelper::Instance()->SetIcon(ui->btnMenu_Max, QChar(0xf079), 10);
        ui->btnMenu_Max->setToolTip("还原");
    }
    max = !max;
}

void CustomerWindget::on_btnMenu_Min_clicked()
{
    this->showMinimized();
}

void CustomerWindget::on_btnMenu_Close_clicked()
{

    LoginDialog* logindialog = new LoginDialog();
    logindialog->show();

    this->close();

}

void CustomerWindget::on_punvenue_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    BindvenueInfo("venue",ui->tableViewvenueInfo,ColumnNames,ColumnWidths);
}

//顾客端左边的个人信息按钮按下后：
void CustomerWindget::on_pbnGuest_clicked()
{
    BindCustomeInfo("Customer",ui->tableViewCustomeInfo,CustomeColumnNames,CustomeColumnWidths);

    ui->stackedWidget->setCurrentIndex(1); //stackedWidget（2）是个人信息界面
}


/*
 *函数功能：确认预订场地
*/
void CustomerWindget::on_pbnROK_clicked()
{
    QString venuephone = ui->letphones->text();
    QString venueId = ui->letNo->text();    //场地编号
    QString venueType = ui->comboBoxvenueType->currentText(); 
    QString venuePrice = ui->letprice->text();  //价格
    //QString venuestate = ui->letstate->text();
    //QString dateto = ui->dateRto->text();
    QString datefrom = ui->dateRfrom->text();  //预定时间

    QString currentdatetime = QDateTime::currentDateTime().toString("yyyy-MM-dd-hh:mm");
    //QString currentdatetime = QDateTime::currentDateTime().toString("yyyyMMddhhmmss");

    //流水号
    QString serialNumber = "2021"+currentdatetime;

    //选了不在线支付的选项
    if(ui->radioButtonNo->isChecked())
    {
        //到店支付，即给现金
        if(venueId.isEmpty()||venuePrice.isEmpty())
        {
            myHelper::ShowMessageBoxError(tr("必须填满带*的字段"));
        }
        else
        {
            QString venueTypeId = "";
            if(venueType == "(1)羽毛球场地")
            {
                venueTypeId ="1";
            }
            else if(venueType == "(2)户外篮球场地")
            {
                venueTypeId = "2";
            }
            else if(venueType == "(3)室内篮球场地")
            {
                venueTypeId = "3";
            }
            else
            {
                venueTypeId = "4";
            }
            qDebug() <<venueTypeId;
            QString customerName = GetCutrrentUserName("customelogblog");
            QSqlQuery query;
//            bool ok = query.prepare("INSERT INTO book(Id,venueno,bookName,venuetypeId,"
//                                    "booktimefrom,booktimeto,bookremark)"
//                                    "VALUES (:Id,:venueno,:bookName,:venuetypeId,:booktimefrom,:booktimeto,:bookremark)");
//            query.bindValue(":Id",serialNumber);
//            query.bindValue(":venueno",venueId);
//            query.bindValue(":bookName",customerName);
//            query.bindValue(":venuetypeId",venueTypeId);
//            //query.bindValue(":booktimefrom",dateto);
//            query.bindValue(":booktimeto",datefrom);
//            query.bindValue(":bookremark"," ");
//            query.setForwardOnly(true);
//            query.exec();

            QString sqlsql = "INSERT INTO book (Id,venueno,BookName,venuetypeid,BookTimeFrom,Price,phone) VALUES ('"+serialNumber+"', '"+venueId+"', '"+customerName+"', '"+venueTypeId+"', '"+currentdatetime+"', '"+venuePrice+"', '"+venuephone+"')";
            qDebug() <<sqlsql;
            qDebug()<<query.exec("INSERT INTO book (Id,venueno,BookName,venuetypeid,BookTimeFrom,Price,phone) VALUES ('"+serialNumber+"', '"+venueId+"', '"+customerName+"', '"+venueTypeId+"', '"+currentdatetime+"', '"+venuePrice+"', '"+venuephone+"')");
            qDebug() <<"update!";

            QString sql = "update venue set venueState = '满' where venueNo='"+venueId+"';";
            qDebug() <<sql;
            query.exec(sql);
            qDebug() <<"update ok!";

//            if(ok)
//            {
                myHelper::ShowMessageBoxInfo(QString("预约成功!订单号:"+serialNumber));
                qDebug() <<"用户预约成功!";
//            }
        }

    }
    else if(ui->radioButtonOk->isChecked())
    {
        //在线支付
        myHelper::ShowMessageBoxInfo(tr("请扫描旁边二维码"));
    }
    else
    {
        //其他
        myHelper::ShowMessageBoxInfo(tr("请选择支付方式"));
    }

}

void CustomerWindget::on_comboBoxvenueType_activated(const QString &arg1)
{
    if(arg1 == "(1)羽毛球场地")
    {
        ui->letprice->setText("20");
    }
    else if(arg1 == "(2)户外篮球场地")
    {
        ui->letprice->setText("10");
    }
    else if(arg1 == "(3)室内篮球场地")
    {
        ui->letprice->setText("20");
    }
    else if(arg1 == "(4)网球场地")
    {
        ui->letprice->setText("50");
    }
}


void CustomerWindget::on_pbnvenuePicture_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

/*
 *修改自己信息
*/
void CustomerWindget::on_pbnmodify_clicked()
{
//    ui->letusename->clear();
//    ui->letsex->clear();
//    ui->letpossword->clear();
//    ui->letphone->clear();
//    ui->letaddress->clear();
//    ui->letGnote->clear();

//    ui->pbnmodify->setEnabled(false);

    ui->pbnmodify->setEnabled(false);
    ui->pbuModifyOk->setEnabled(true);
    ui->pbnCancle->setEnabled(true);
}

/*
 *函数功能：确认修改，进行写库
*/
void CustomerWindget::on_pbuModifyOk_clicked()
{
    QString customeName = ui->letusename->text();
    QString customeSex = ui->letsex->text();
    QString customePwd = ui->letpossword->text();
    QString customePhone = ui->letphone->text();
    QString customedate = ui->dateCustomeIn->text();
    QString customeAddress = ui->letaddress->text();
    QString customeRemark = ui->letGnote->text();

    if(customeName.isEmpty() ||customePhone.isEmpty()
            ||customePwd.isEmpty()||customeAddress.isEmpty())
    {
        myHelper::ShowMessageBoxError(tr("必须填满带*字段"));
    }
    else
    {
        QString currentUseName = Myapp::CurrentUserName;    //获取当前登录名
        QSqlQuery query;
        QString sql ="update customer set CustomerSex ='"+customeSex
                +"', CustomerPassword='"+customePwd+"',CustomerPhone='"+customePhone
                +"', CustomerData ='"+customedate+"', CustomerAddress='"+customeAddress
                +"', CustomerRemark ='"+customeRemark+"' where CustomerName = '"+currentUseName+"';";
        qDebug() <<sql;
        qDebug() << query.exec(sql);
        myHelper::ShowMessageBoxInfo(tr("修改成功"));
        myHelper::MyLoginBlog("log","修改信息","顾用户","管理员");
        qDebug() <<"update customer info success!";
    }
}

/*
 *函数功能：取消操作
*/
void CustomerWindget::on_pbnCancle_clicked()
{
    ui->pbnmodify->setEnabled(true);
    ui->pbuModifyOk->setEnabled(false);
    ui->pbnCancle->setEnabled(false);

}

/*
 *当鼠标点击显示客户信息到对应控件中
*/
void CustomerWindget::showCustomInfo()
{
    QString customerName = GetCutrrentUserName("customelogblog");
    QSqlQueryModel userMode(ui->tableViewCustomeInfo);
    QString sql = "SELECT *FROM customer where CustomerName = '"+customerName+"'";
    qDebug() <<sql;
    userMode.setQuery(QString(sql));
    int Row = ui->tableViewCustomeInfo->currentIndex().row();
    QSqlRecord record = userMode.record(Row);

    ui->letusename->setText(record.value(1).toString());
    ui->letsex->setText(record.value(2).toString());
    ui->letpossword->setText(record.value(3).toString());
    ui->letphone->setText(record.value(4).toString());
    ui->letaddress->setText(record.value(5).toString());
    //ui->dateCustomeIn->setDate(QDate::addDays(record.value(6).toInt()));
    ui->letGnote->setText(record.value(7).toString());
}

void CustomerWindget::on_punvenue_customContextMenuRequested(const QPoint &pos)
{

}

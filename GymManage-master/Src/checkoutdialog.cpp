#include "checkoutdialog.h"
#include "ui_checkoutdialog.h"

#include <QDebug>
#include <QSqlRecord>
#include <QSqlQuery>
#include "app/myhelper.h"

#include "app/iconhelper.h"
#include "app/myapp.h"
#include <QDate>

CheckOutDialog::CheckOutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckOutDialog)
{
    ui->setupUi(this);
    this->InitForm();
}

CheckOutDialog::~CheckOutDialog()
{
    delete ui;
}

void CheckOutDialog::InitForm()
{
    ColumnNames[0] = tr("订单编号");
    ColumnNames[1] = tr("场地编号");
    ColumnNames[2] = tr("客户姓名");
    ColumnNames[3] = tr("场地类型");
    ColumnNames[4] = tr("预约时间");
    ColumnNames[5] = tr("价格");
    ColumnNames[6] = tr("电话");
    ColumnNames[7] = tr("备注");

    ColumnWidths[0] = 70;
    ColumnWidths[1] = 100;
    ColumnWidths[2] = 80;
    ColumnWidths[3] = 100;
    ColumnWidths[4] = 100;
    ColumnWidths[5] = 200;
    ColumnWidths[6] = 160;
    ColumnWidths[7] = 200;

    //将数据库中的一张表中的内容显示到tableView控件上
    BindCustomInfo("book",ui->tableView,ColumnNames,ColumnWidths);

    //showCustomerInfo()将点击的tableView列表内容放到各个格子中
    this->connect(ui->tableView,SIGNAL(clicked(QModelIndex)),SLOT(showCustomerInfo()));

}

void CheckOutDialog::BindCustomInfo(QString tableName, QTableView *tableView, QString columnNames[], int columnWidths[])
{
    QueryModel = new QSqlQueryModel(this);
    QString sql = "SELECT *FROM " + tableName+";";
    qDebug() <<sql;
    QueryModel->setQuery(sql);
    tableView->setModel(QueryModel);

    //依次设置列标题、列宽等
    for (int i = 0;i<tableView->model()->columnCount();i++)
    {
        QueryModel->setHeaderData(i,Qt::Horizontal,columnNames[i]);     //设置列标题
        tableView->setColumnWidth(i,columnWidths[i]);                   //设置列宽
    }

    tableView->horizontalHeader()->setHighlightSections(false);         //点击表头时不对表头光亮
    tableView->setSelectionMode(QAbstractItemView::ContiguousSelection);//选中模式为多行选中
    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);     //选中整行
    tableView->setStyleSheet( "QTableView::item:hover{background-color:rgb(92,188,227,200)}"
                              "QTableView::item:selected{background-color:#1B89A1}");
}

/*
 *函数功能:当点击tableView显示当前表格中客户的信息到控件上
*/
void CheckOutDialog::showCustomerInfo()
{
    QSqlQueryModel userMode(ui->tableView);
    QString sql = "SELECT *FROM book;";
    qDebug() <<sql;
    userMode.setQuery(QString(sql));
    int Row = ui->tableView->currentIndex().row();
    QSqlRecord record = userMode.record(Row);
//    ui->CustomerNo->setText(record.value(0).toString());
    ui->lineEdit_no->setText(record.value(1).toString());
    ui->lineEdit_name->setText(record.value(2).toString());
//    ui->CustomerRePwd->setText(record.value(3).toString());
//    ui->CustomerPhone->setText(record.value(4).toString());
//    ui->CustomerAddress->setText(record.value(5).toString());
//    ui->ledCustomDate->setText(record.value(6).toString());
//    ui->CustomerRemark->setText(record.value(7).toString());
}

void CheckOutDialog::on_button_find_clicked()
{
    QSqlQueryModel userMode(ui->tableView);
    QString sql = "SELECT *FROM book;";
    qDebug() <<sql;
    userMode.setQuery(QString(sql));
    int Row = ui->tableView->currentIndex().row();
    QSqlRecord record = userMode.record(Row);

    QString currentdatetime = QDateTime::currentDateTime().toString("yyyy-MM-dd-hh:mm");
    QString serialNumber = record.value(0).toString();
    QString venueId = record.value(1).toString();    //场地编号
    QString customerName = record.value(2).toString();
    QString venueTypeId = record.value(3).toString();
    //QString currentdatetime = record.value(4).toString();
    QString venuePrice = record.value(5).toString();
    QString venuephone = record.value(6).toString();

    QSqlQuery query;

    QString sqlsqlsql = "update venue set venueState = '空' where venueNo='"+venueId+"';";
    qDebug() <<sqlsqlsql;
    query.exec(sqlsqlsql);
    qDebug() <<"update ok!";


    QString sqlsql = "INSERT INTO outbook (Id,venueno,BookName,venuetypeid,BookTimeFrom,Price,phone) VALUES ('"+serialNumber+"', '"+venueId+"', '"+customerName+"', '"+venueTypeId+"', '"+currentdatetime+"', '"+venuePrice+"', '"+venuephone+"')";
    qDebug() <<sqlsql;
    qDebug()<<query.exec("INSERT INTO outbook (Id,venueno,BookName,venuetypeid,BookTimeFrom,Price,phone) VALUES ('"+serialNumber+"', '"+venueId+"', '"+customerName+"', '"+venueTypeId+"', '"+currentdatetime+"', '"+venuePrice+"', '"+venuephone+"')");
    qDebug() <<"update!";


    //从数据库的book表中删除记录
    QString no = ui->lineEdit_no->text();
    //QSqlQuery query;
    sql = "delete from venue where venueno = '"+no+"'";
    qDebug() <<sql;
    qDebug()<<query.exec("delete from book where venueno = '"+no+"'");
    qDebug() <<"update ok!";


    //将删除后的表的内容显示在tableView中
    BindCustomInfo("book",ui->tableView,ColumnNames,ColumnWidths);

    myHelper::ShowMessageBoxInfo("离馆");

}

void CheckOutDialog::on_push_find_clicked()
{
    InitForm();

}

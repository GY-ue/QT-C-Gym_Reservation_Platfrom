#include "modiftvenueprice.h"
#include "ui_modiftvenueprice.h"
#include "app/myhelper.h"

#include <QDebug>
#include <QSqlRecord>
#include <QSqlQuery>

ModiftvenuePrice::ModiftvenuePrice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModiftvenuePrice)
{
    ui->setupUi(this);
    this->initForm();

}

ModiftvenuePrice::~ModiftvenuePrice()
{
    delete ui;
}

void ModiftvenuePrice::initForm()
{
    //初始化表格列名和列宽
    ColumnNames[0] = tr("场地类型编号");
    ColumnNames[1] = tr("场地名称");
    ColumnNames[2] = tr("场地价格");

    ColumnWidths[0] = 100;
    ColumnWidths[1] = 120;
    ColumnWidths[2] = 120;

    //在表格中显示数据库venuetype表中的内容
    MyBindTable("venuetype",ui->tableView,ColumnNames,ColumnWidths);

    //showvenueInfo()函数功能：获取鼠标点击房间的值，并显示在相应的界面上
    this->connect(ui->tableView,SIGNAL(clicked(QModelIndex)),SLOT(showvenueInfo()));

    //初始化
    ui->lineEditNo->setEnabled(false);
    ui->lineEditName->setEnabled(false);
    ui->lineEditPrice->setEnabled(false);

    ui->pbnSave->setEnabled(false);
    ui->pbnCancel->setEnabled(false);


}

//在表格中显示数据库venuetype表中的内容
void ModiftvenuePrice::MyBindTable(QString tableName, QTableView *tableView, QString columnNames[], int columnWidths[])
{
    QueryModel = new QSqlQueryModel(this);

    TableView = tableView;
    QString sql = "SELECT * FROM " + tableName;
    QueryModel->setQuery(sql);
    TableView->setModel(QueryModel);

    //依次设置列标题、列宽等
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


void ModiftvenuePrice::on_pbnModify_clicked()
{
    //控件内容可以进行输入
    ui->lineEditNo->setEnabled(true);
    ui->lineEditName->setEnabled(true);
    ui->lineEditPrice->setEnabled(true);

    ui->pbnModify->setEnabled(false);//修改按钮不可用
    //ui->pbnAdd->setEnabled(false);

    ui->pbnSave->setEnabled(true);
    ui->pbnCancel->setEnabled(true);
}

void ModiftvenuePrice::on_pbnSave_clicked()
{
    QString venuetypeNo = ui->lineEditNo->text();
    QString venuetypeName = ui->lineEditName->text();
    QString venuetypePrice = ui->lineEditPrice->text();

    if(venuetypeNo.isEmpty() &&venuetypeName.isEmpty() && venuetypePrice.isEmpty())
    {
        myHelper::ShowMessageBoxInfo(tr("必须填满所有字段！"));
    }
    else
    {
        //QSqlQuery query;

//        bool ok = query.prepare("INSERT INTO venuetype (Id, Typename,TypePrice)"
//                                "VALUES (:Id,:Typename,:TypePrice)");
//        query.bindValue(":Id",venuetypeNo);
//        query.bindValue(":Typename",venuetypeName);
//        query.bindValue(":TypePrice",venuetypePrice);
//        query.setForwardOnly(true);
//        query.exec();

            QSqlQuery query;
            QString sql = "update venuetype set TypePrice = '"+venuetypePrice+"' where venueTypeId='"+venuetypeNo+"';";
            qDebug() <<sql;
            qDebug() << query.exec(sql);
            qDebug() <<"update ok!";
            myHelper::ShowMessageBoxInfo(tr("保存场地信息成功!"));
            myHelper::MyLoginBlog("log","修改场地价格",+"场地价格改为"+venuetypePrice,"管理员");
    }

        //在表格中显示数据库venuetype表中的内容
    MyBindTable("venuetype",ui->tableView,ColumnNames,ColumnWidths);
}

void ModiftvenuePrice::on_pbnCancel_clicked()
{
    ui->lineEditNo->setEnabled(false);
    ui->lineEditName->setEnabled(false);
    ui->lineEditPrice->setEnabled(false);

    //ui->pbnAdd->setEnabled(true);
    ui->pbnModify->setEnabled(true);

    ui->pbnCancel->setEnabled(false);
    ui->pbnSave->setEnabled(false);
}

/*
 *函数功能：获取鼠标点击房间的值，并显示在相应的界面上
*/
void ModiftvenuePrice::showvenueInfo()
{
    ui->pbnModify->setEnabled(true);
    QSqlQueryModel userMode(ui->tableView);
    QString sql = "SELECT *FROM venuetype;";
    qDebug() <<sql;
    userMode.setQuery(QString(sql));
    int Row = ui->tableView->currentIndex().row();
    QSqlRecord record = userMode.record(Row);
    ui->lineEditNo->setText(record.value(0).toString());
    ui->lineEditName->setText(record.value(1).toString());
    ui->lineEditPrice->setText(record.value(2).toString());
}

#include "checkcutomdialog.h"
#include "ui_checkcutomdialog.h"
#include "app/myhelper.h"

#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QDate>

#include "checkoutdialog.h"



CheckCutomDialog::CheckCutomDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckCutomDialog)
{
    ui->setupUi(this);
    this->InitForm();

}

CheckCutomDialog::~CheckCutomDialog()
{
    delete ui;
}

void CheckCutomDialog::InitForm()
{
    ui->lineEditCustomOrderId->setEnabled(false);

    //正则表达式，对输入的内容进行限制，电话号码11位,身份证18位,房间号4位，房间类型编号1位
    QRegExp rxPhone("\\d{11}$");
    //QRegExp rxIdcard("\\d{18}$");
    //QRegExp rxvenueID("\\d{4}$");
    QRegExp rxVenueTypeId("\\d{1}$");

    QRegExpValidator *regPhone = new QRegExpValidator(rxPhone,this);
    //QRegExpValidator *regIdcard = new QRegExpValidator(rxIdcard,this);
    //QRegExpValidator *regvenueId = new QRegExpValidator(rxvenueID,this);
    QRegExpValidator *regVenueTypeId = new QRegExpValidator(rxVenueTypeId,this);

    ui->lineEditCustomPhone->setValidator(regPhone);
    //ui->lineEditCustomIcard->setValidator(regIdcard);
    //ui->lineEditvenueId->setValidator(regvenueId);
    ui->lineEditvenueTypeId->setValidator(regVenueTypeId);
}

void CheckCutomDialog::on_pbnCheckOk_clicked()
{
    QString venueId = ui->lineEditvenueId->text();
    QString venueTypeId = ui->lineEditvenueTypeId->text();
    QString customerName = ui->lineEditCustomName->text();
    QString venuephone = ui->lineEditCustomPhone->text();
    QString venuePrice = ui->lineEditCustomCash->text();
    //QString venueCustomOrderId = ui->lineEditCustomOrderId->text();
    QString Remark = ui->lineEditRemark->text();
    QString currentdatetime = QDateTime::currentDateTime().toString("yyyy-MM-dd-hh:mm");
    QString serialNumber = "2021"+currentdatetime;



    QSqlQuery query;

    if(venueId.isEmpty() || venueTypeId.isEmpty()
            || customerName.isEmpty() || venuePrice.isEmpty())
    {
        myHelper::ShowMessageBoxInfo(tr("必须填满带*字段"));
    }
    else
    {
        QString sqlsql = "INSERT INTO book (Id,venueno,BookName,venuetypeid,BookTimeFrom,Price,phone,BookRemark) VALUES ('"+serialNumber+"', '"+venueId+"', '"+customerName+"', '"+venueTypeId+"', '"+currentdatetime+"', '"+venuePrice+"', '"+venuephone+"', '"+Remark+"')";
        qDebug() <<sqlsql;
        qDebug()<<query.exec("INSERT INTO book (Id,venueno,BookName,venuetypeid,BookTimeFrom,Price,phone,BookRemark) VALUES ('"+serialNumber+"', '"+venueId+"', '"+customerName+"', '"+venueTypeId+"', '"+currentdatetime+"', '"+venuePrice+"', '"+venuephone+"', '"+Remark+"')");
        qDebug() <<"update!";

        QString sql = "update venue set venueState = '满' where venueNo='"+venueId+"';";
        qDebug() <<sql;
        query.exec(sql);
        qDebug() <<"update ok!";



        myHelper::ShowMessageBoxInfo(tr("登记成功!"));

        //this->UpdatevenueeTableInfo("venue","满",venueId);

        myHelper::MyLoginBlog("log","来客登记","顾客预定场地","管理员");

    }


}


/*
 *函数功能：更新房间状态
 *输入参数
*/
void CheckCutomDialog::UpdatevenueeTableInfo(QString tablename, QString updatename,QString venueNo)
{
    QString sql = "update "+tablename+" set venueState = '"+updatename+"' where venueNo ='"+venueNo+"';";
    qDebug() <<sql;
    QSqlQuery query;
    query.exec(sql);
    qDebug() <<"update venuestate success";
}



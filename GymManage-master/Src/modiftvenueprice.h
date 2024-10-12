#ifndef MODIFTvenuePRICE_H
#define MODIFTvenuePRICE_H

#include <QWidget>
#include <QTableView>
#include <QSqlQueryModel>

namespace Ui {
class ModiftvenuePrice;
}

class ModiftvenuePrice : public QWidget
{
    Q_OBJECT
    
public:
    explicit ModiftvenuePrice(QWidget *parent = 0);
    ~ModiftvenuePrice();

    void initForm();

    //将某个表中的数据绑定到指定的TableView上
    void MyBindTable(QString tableName, QTableView *tableView,
                     QString columnNames[], int columnWidths[]);
    
private slots:
    void on_pbnAdd_clicked();

    void on_pbnModify_clicked();

    void on_pbnSave_clicked();

    void on_pbnCancel_clicked();

public slots:
    void showvenueInfo();//显示信息槽函数

private:
    Ui::ModiftvenuePrice *ui;

    QSqlQueryModel *QueryModel;     //查询模型
    QTableView *TableView;          //显示数据的表格对象
    QString ColumnNames[3];         //列名数组声明
    int ColumnWidths[3];            //列宽数组声明
};

#endif // MODIFTvenuePRICE_H

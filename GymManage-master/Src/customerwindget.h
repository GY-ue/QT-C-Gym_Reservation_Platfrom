#ifndef CUSTOMERWINDGET_H
#define CUSTOMERWINDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QDesktopWidget>
#include <QSqlQueryModel>
#include <QTableView>

#include "venuepicdialog.h"

namespace Ui {
class CustomerWindget;
}

class CustomerWindget : public QWidget
{
    Q_OBJECT
    
public:
    explicit CustomerWindget(QWidget *parent = 0);
    ~CustomerWindget();

    void InitForm();

    //将场地信息显示到tableview上
    void BindvenueInfo(QString tableName, QTableView *tableView,
                       QString columnNames[], int columnWidths[]);
    //将用户信息显示到tableview上
    void BindCustomeInfo(QString tableName, QTableView *tableView,
                       QString columnNames[], int columnWidths[]);

    //获取当前用户名
    QString GetCutrrentUserName(QString tablename);

protected:
    bool eventFilter(QObject *obj, QEvent *event);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);
    
private slots:
    void on_btnMenu_Max_clicked();

    void on_btnMenu_Min_clicked();

    void on_btnMenu_Close_clicked();

    void on_punvenue_clicked();

    void on_pbnGuest_clicked();

    void on_pbnROK_clicked();

    void on_comboBoxvenueType_activated(const QString &arg1);

    void on_pbnvenuePicture_clicked();

    void on_pbnmodify_clicked();

    void on_pbuModifyOk_clicked();

    void on_pbnCancle_clicked();

    void on_punvenue_customContextMenuRequested(const QPoint &pos);

public slots:
    void showCustomInfo();

private:
    Ui::CustomerWindget *ui;

    QPoint mousePoint;
    bool mousePressed;
    bool max;
    QRect location;

    QSqlQueryModel *QueryModel;             //查询模型
    QSqlQueryModel *customModel;            //
    QTableView *TableView;                  //显示数据的表格对象

    QString ColumnNames[4];                 //列名数组声明
    int ColumnWidths[4];                    //列宽数组声明

    QString CustomeColumnNames[8];         //列名数组声明
    int CustomeColumnWidths[8];            //列宽数组声明

    venuePicDialog *venuepicture;             //场地信息查看界面
};

#endif // CUSTOMERWINDGET_H

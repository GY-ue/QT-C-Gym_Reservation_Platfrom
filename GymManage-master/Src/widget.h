#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <Qtimer>
#include "app/frmmessagebox.h"
#include <QMouseEvent>
#include <QDesktopWidget>
#include <QDateTime>

#include "promanage.h"                       //前台管理中心界面
#include "costomerregisterinfodialog.h"      //注册客户信息
#include "romminfo.h"                      
#include "modiftvenueprice.h"                
#include "checkcutomdialog.h"               
#include "logblogdialog.h"                  //操作日志界面
#include "modifypwddialog.h"                //修改密码界面
#include "venuepicdialog.h"                 
#include "backupdatanasedialog.h"           //数据库备份界面
#include "checkoutdialog.h"                 //退衣服界面

#include "out.h"                      


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
protected:
    bool eventFilter(QObject *obj, QEvent *event);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);
private slots:
    void on_btnMenu_Close_clicked();

    void on_btnMenu_Max_clicked();

    void on_btnMenu_Min_clicked();

    void on_pbnAsk_clicked();

    void on_pbnError_clicked();

    void on_pbnHint_clicked();
    void on_pbnRegisterInfo_clicked();

    void on_pbnvenueInfo_clicked();

    void on_pbnModify_clicked();

    void on_pbnModiftPwd_clicked();

    void on_pbnCheck_clicked();

    void on_pbnLonBlog_clicked();

    void on_pbnvenueLock_clicked();

    void on_pbnbackhome_clicked();

    void on_pbnBackDatabase_clicked();

    void on_pbnCheckOut_clicked();

    void on_pbnHelp_clicked();

public slots:
    void showCurrentTime();
private:
    Ui::Widget *ui;
    QPoint mousePoint;
    bool mousePressed;
    bool max;
    QRect location;
    void InitStyle();

    QTimer *timer;

    //定义其他界面的指针变量
    ProManage *promanage;                       //前台管理
    CostomerRegisterInfoDialog *constumerInfo;  //注册客户信息界面
    RommInfo *romminfo;                         
    ModiftvenuePrice *modifyvenue;              
    CheckCutomDialog *checkcustom;              //顾客登记入住界面
    LogBlogDialog *logblog;                     //操作日志
    ModifyPwdDialog *modifypwd;                 //修改密码
    venuePicDialog *venuepicture;                
    BackupDatanaseDialog *backdatabase;         //数据库备份界面
    CheckOutDialog *checkoutvenue;               //退房界面

    Out *outinfo; 
};

#endif // WIDGET_H

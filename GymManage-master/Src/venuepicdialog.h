#ifndef venuePICDIALOG_H
#define venuePICDIALOG_H

#include <QDialog>

namespace Ui {
class venuePicDialog;
}

class venuePicDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit venuePicDialog(QWidget *parent = 0);
    ~venuePicDialog();
    
private:
    Ui::venuePicDialog *ui;
};


#endif // venuePICDIALOG_H

#include "venuepicdialog.h"
#include "ui_venuepicdialog.h"

venuePicDialog::venuePicDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::venuePicDialog)
{
    ui->setupUi(this);
    ui->label->setScaledContents(true);
    ui->label_2->setScaledContents(true);
    ui->label_3->setScaledContents(true);
    ui->label_4->setScaledContents(true);
    ui->label_5->setScaledContents(true);
    ui->label_6->setScaledContents(true);
    //ui->label_7->setScaledContents(true);
    ui->label_8->setScaledContents(true);
    ui->label_9->setScaledContents(true);
    ui->label_10->setScaledContents(true);
}


venuePicDialog::~venuePicDialog()
{
    delete ui;
}


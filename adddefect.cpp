#include "adddefect.h"
#include "ui_adddefect.h"
#include "QMessageBox"

addDefect::addDefect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addDefect)
{
    ui->setupUi(this);
}

addDefect::~addDefect()
{
    delete ui;
}

void addDefect::on_backBtn_clicked(){
    this->close();
}

void addDefect::on_submitBtn_clicked(){
    this->close();
    QMessageBox::information(this, "Defect Report","Defect report has been submitted.");
}

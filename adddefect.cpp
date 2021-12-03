#include "adddefect.h"
#include "ui_adddefect.h"
#include "QMessageBox"
#include "trackingclasses.h"
addDefect::addDefect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addDefect)
{
    ui->setupUi(this);
}


Defect d;







addDefect::~addDefect()
{
    delete ui;
}

void addDefect::on_backBtn_clicked(){
    this->close();
}


void addDefect::on_submitBtn_clicked(){
    void write_defects(QVector<Defect> defects);
    this->close();
    QMessageBox::information(this, "Report Defect","Defect report has been submitted.");
}






void addDefect::on_idEdit_textChanged(const QString  &arg1)
{



d.set_id(arg1);




}



void addDefect::on_nameEdit_textChanged(const QString &arg2)
{


d.set_name(arg2);


}





void addDefect::on_statusEdit_textChanged(const QString &arg3)
{



   d.set_status(arg3);



}




void addDefect::on_descEdit_textChanged(const QString des)
{

    d.set_desc(des);
}




void addDefect::on_reportedEdit_textChanged(const QString &arg4)
{
d.set_reported_by(arg4);

}





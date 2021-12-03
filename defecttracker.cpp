#include "defecttracker.h"
#include "ui_defecttracker.h"
#include "adddefect.h"
#include <QString>
#include "trackingclasses.h"

//Defect d;

defectTracker::defectTracker(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::defectTracker)
{
    ui->setupUi(this);





//    QString id = d.get_id();
//    ui->lineEdit->setText(id);



}

defectTracker::~defectTracker()
{
    delete ui;
}

void defectTracker::on_backBtn_clicked(){
    this->close();
}

void defectTracker::on_addNewDefect_clicked(){
    window5= new addDefect(this);
    window5->show();
}

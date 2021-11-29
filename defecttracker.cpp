#include "defecttracker.h"
#include "ui_defecttracker.h"
#include "adddefect.h"

defectTracker::defectTracker(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::defectTracker)
{
    ui->setupUi(this);
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

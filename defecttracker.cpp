#include "defecttracker.h"
#include "ui_defecttracker.h"

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

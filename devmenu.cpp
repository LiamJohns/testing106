#include "devmenu.h"
#include "ui_devmenu.h"
#include "adddefect.h"
#include "defecttracker.h"

devMenu::devMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::devMenu)
{
    ui->setupUi(this);




}


devMenu::~devMenu()
{
    delete ui;
}

void devMenu::on_viewDefBtn_clicked(){
    window4 = new defectTracker(this);
    window4->show();
}

void devMenu::on_reportDefBtn_clicked(){
    window3= new addDefect(this);
    window3->show();
}

void devMenu::on_logOutBtn_clicked(){
    this->close();
}

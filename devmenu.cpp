#include "devmenu.h"
#include "ui_devmenu.h"

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
    this->close();
}

void devMenu::on_reportDefBtn_clicked(){
    this->close();
}

void devMenu::on_logOutBtn_clicked(){
    this->close();
}

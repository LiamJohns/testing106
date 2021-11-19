#include "menu1.h"
#include "ui_menu1.h"

menu1::menu1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::menu1)
{
    ui->setupUi(this);
}





menu1::~menu1()
{
    delete ui;
}


void menu1::on_devBtn_clicked(){

    window = new devwindow(this);
    window->show();



}

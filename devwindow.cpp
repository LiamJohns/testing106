#include "devwindow.h"
#include "ui_devwindow.h"
#include "devmenu.h"
#include "QMessageBox"
#include "QPixmap"
#include  "QCheckBox"

devwindow::devwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::devwindow)
{
    ui->setupUi(this);

}

devwindow::~devwindow()
{
    delete ui;
}

void devwindow::on_enterBtn_clicked(){

QString user = ui->userEdit->text();
QString pass = ui->passEdit->text();



if( user=="Dev" && pass=="dev" ){

    this->close();
  window2= new devMenu(this);
window2->show();



}
else {
    QMessageBox::warning(this, "Login","Incorrect username or password");

}

}


void devwindow::on_togglePass_stateChanged(int i){

    switch(i){


    case 0:
        ui->passEdit->setEchoMode(QLineEdit::Password);

    break;

     case 2:

       ui->passEdit->setEchoMode(QLineEdit::Normal);


        break;



    }


}












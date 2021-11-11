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

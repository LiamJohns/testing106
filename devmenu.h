#ifndef DEVMENU_H
#define DEVMENU_H

#include <QDialog>

namespace Ui {
class devMenu;
}

class devMenu : public QDialog
{
    Q_OBJECT

public:
    explicit devMenu(QWidget *parent = nullptr);
    ~devMenu();

private:
    Ui::devMenu *ui;
};

#endif // DEVMENU_H

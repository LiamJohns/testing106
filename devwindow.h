#ifndef DEVWINDOW_H
#define DEVWINDOW_H

#include <QDialog>
#include "devmenu.h"

namespace Ui {
class devwindow;
}

class devwindow : public QDialog
{
    Q_OBJECT

public:
    explicit devwindow(QWidget *parent = nullptr);
    ~devwindow();






private slots:

 void on_enterBtn_clicked();





private:
    Ui::devwindow *ui;
    devMenu *window2;
};

#endif // DEVWINDOW_H

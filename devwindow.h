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
 void on_togglePass_stateChanged(int i);





 void on_checkBox_stateChanged(int arg1);

private:
    Ui::devwindow *ui;
    devMenu *window2;
};

#endif // DEVWINDOW_H

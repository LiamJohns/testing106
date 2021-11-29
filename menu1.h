#ifndef MENU1_H
#define MENU1_H

#include <QMainWindow>
#include "devwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class menu1; }
QT_END_NAMESPACE

class menu1 : public QMainWindow
{
    Q_OBJECT

public:
    menu1(QWidget *parent = nullptr);
    ~menu1();



private slots:
    void on_devBtn_clicked();
    void on_exitBtn_clicked();


private:
    Ui::menu1 *ui;
    devwindow *window;




};
#endif // MENU1_H

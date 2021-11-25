#ifndef ADDDEFECT_H
#define ADDDEFECT_H

#include <QDialog>

namespace Ui {
class addDefect;
}

class addDefect : public QDialog
{
    Q_OBJECT

public:
    explicit addDefect(QWidget *parent = nullptr);
    ~addDefect();

private slots:
    void on_backBtn_clicked();
    void on_submitBtn_clicked();

private:
    Ui::addDefect *ui;
};

#endif // DEFECTTRACKER_H

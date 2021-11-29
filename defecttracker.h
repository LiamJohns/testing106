#ifndef DEFECTTRACKER_H
#define DEFECTTRACKER_H

#include <QDialog>
#include "adddefect.h"

namespace Ui {
class defectTracker;
}

class defectTracker : public QDialog
{
    Q_OBJECT

public:
    explicit defectTracker(QWidget *parent = nullptr);
    ~defectTracker();

private slots:
    void on_backBtn_clicked();
    void on_addNewDefect_clicked();

private:
    Ui::defectTracker *ui;
    addDefect *window5;
};

#endif // DEFECTTRACKER_H

#ifndef DEFECTTRACKER_H
#define DEFECTTRACKER_H

#include <QDialog>

namespace Ui {
class defectTracker;
}

class defectTracker : public QDialog
{
    Q_OBJECT

public:
    explicit defectTracker(QWidget *parent = nullptr);
    ~defectTracker();

private:
    Ui::defectTracker *ui;
};

#endif // DEFECTTRACKER_H

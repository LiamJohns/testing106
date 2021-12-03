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



    void on_idEdit_textChanged(const QString &arg1);

    void on_nameEdit_textChanged(const QString &arg2);

    void on_statusEdit_textChanged(const QString &arg3);

    void on_descEdit_textChanged(const QString des);

    void on_reportedEdit_textChanged(const QString &arg4);

private:
    Ui::addDefect *ui;
};

#endif // DEFECTTRACKER_H

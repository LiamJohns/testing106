#ifndef TRACKINGCLASSES_H
#define TRACKINGCLASSES_H

#include <string>
#include <QDate>
#include <vector>
#include <QFile>
#include <QDebug>

// *-- DEFINING CLASSES --*

class Contributor{
protected:
    QString name;
    QString username;
    QString password;

public:

};

class Tester : public Contributor{
private:

public:

};

class Developer : public Contributor{
private:

public:

};

class Administrator : public Contributor{
private:

public:

};

class Defect{
private:
    int id;
    QString name;
    QString status;
    QString desc;
    Contributor reported_by;
    Contributor working_on;
    QDate registered;
    QDate completed;

public:
};

// *-- READ FROM FILE FUNCTIONS --*
QVector<Defect> read_defect(){
    QVector<Defect> defects;
    Defect *d;

    QStringList fileData;
    QFile dcsv("C:/Users/270121842/OneDrive - UP Education/Desktop/CS106/CapitalBugTracker/defects.csv");

    if(dcsv.open(QIODevice::ReadOnly)){
        QTextStream in(&dcsv);
        while(!in.atEnd()){
            QString line = dcsv.readLine().replace("\r\n","");
            fileData.clear();
            fileData.append(line.split('`'));

            //reading into class
            d = new Defect;
        }
    }

    return defects;
}

#endif // TRACKINGCLASSES_H

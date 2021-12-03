#ifndef TRACKINGCLASSES_H
#define TRACKINGCLASSES_H

#include <string>
#include <QDate>
#include <vector>
#include <QFile>
#include <QDebug>


    // *-- DEFINING CLASSES --*


//Base Class Contributor
class Contributor{
protected:
    QString name;
    QString username;
    QString password;
    bool logged_in;

public:
    virtual int authority_level() = 0;

    void read_file(QString a, QString b, QString c, bool d){
        name = a;
        username = b;
        password = c;
        logged_in = d;
    }

    virtual void read_file_dev(QString a, QString b, QString c, bool d, bool e);
};

//Derived Class Tester
class Tester : public Contributor{
private:

public:
    int authority_level(){
        return 0;
    }
};

//Derived Class Developer
class Developer : public Contributor{
private:
    bool is_working;
public:
    int authority_level(){
        return 1;
    }

    void read_file_dev(QString a, QString b, QString c, bool d, bool e){
        name = a;
        username = b;
        password = c;
        logged_in = d;
        is_working = e;
    }
};

//Derived Class Administrator
class Administrator : public Contributor{
private:

public:
    int authority_level(){
        return 2;
    }
};

//Standalone Base Class Defect
class Defect{
private:
    QString id;
    QString name;
    QString status;
    QString desc;
    QString reported_by;
    QString working_on;
    QDate registered;
    QDate completed;

public:
    void read_file(int a, QString b, QString c, QString d, QString e, QString f, int g, int h, int i, int j, int k, int l){
        id = a;
        name = b;
        status = c;
        desc = d;
        reported_by = e;
        working_on = f;
        registered.setDate(g, h, i);
        completed.setDate(j, k, l);
    }

    //getter functions
    QString get_id(){
        return id;
    }

    QString get_name(){
        return name;
    }

    QString get_status(){
        return status;
    }

    QString get_desc(){
        return desc;
    }

    QString get_reported_by(){
        return reported_by;
    }

    QString get_working_on(){
        return working_on;
    }

    QDate get_registered(){
        return registered;
    }

    QDate get_completed(){
        return completed;
    }

    //setter functions
    void set_id(QString i){
        id = i;
    }

    void set_name(QString s){
        name = s;
    }

    void set_status(QString s){
        status = s;
    }

    void set_desc(QString s){
        desc = s;
    }

    void set_reported_by(QString s){
        reported_by = s;
    }

    void set_working_on(QString s){
        working_on = s;
    }

    void set_registered(int y, int m, int d){
        registered.setDate(y, m, d);
    }

    void set_completed(int y, int m, int d){
        completed.setDate(y, m, d);
    }
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
            d->read_file(fileData[0].toInt(), fileData[1], fileData[2], fileData[3], fileData[4], fileData[5], fileData[6].toInt(), fileData[7].toInt(), fileData[8].toInt(), fileData[9].toInt(), fileData[10].toInt(), fileData[11].toInt());
            defects.push_back(*d);
        }
    }

    return defects;
}

//QVector<Contributor> read_contributor(){
//    QVector<Contributor> users;
//    Contributor* user;
//    QStringList fileData;

//    //reading from Tester file
//    QFile tcsv("C:/Users/270121842/OneDrive - UP Education/Desktop/CS106/CapitalBugTracker/testers.csv");

//    if(tcsv.open(QIODevice::ReadOnly)){
//        QTextStream test_in(&tcsv);
//        while(!test_in.atEnd()){
//            QString line = tcsv.readLine().replace("\r\n","");
//            fileData.clear();
//            fileData.append(line.split('`'));

//            //reading into class
//            user = new Tester;
//            user->read_file(fileData[0], fileData[1], fileData[2], fileData[3].toInt());
//            users.push_back(*user);
//        }
//    }

//    //reading from Developer files
//    QFile dcsv("C:/Users/270121842/OneDrive - UP Education/Desktop/CS106/CapitalBugTracker/devs.csv");

//    if(dcsv.open(QIODevice::ReadOnly)){
//        QTextStream dev_in(&dcsv);
//        while(!dev_in.atEnd()){
//            QString line = dcsv.readLine().replace("\r\n","");
//            fileData.clear();
//            fileData.append(line.split('`'));

//            //reading into class
//            user = new Developer;
//            user->read_file_dev(fileData[0], fileData[1], fileData[2], fileData[3].toInt(), fileData[4].toInt());
//            users.push_back(*user);
//        }
//    }

//    //reading from Admin files
//    QFile acsv("C:/Users/270121842/OneDrive - UP Education/Desktop/CS106/CapitalBugTracker/devs.csv");

//    if(acsv.open(QIODevice::ReadOnly)){
//        QTextStream admin_in(&acsv);
//        while(!admin_in.atEnd()){
//            QString line = acsv.readLine().replace("\r\n","");
//            fileData.clear();
//            fileData.append(line.split('`'));

//            //reading into class
//            user = new Administrator;
//            user->read_file(fileData[0], fileData[1], fileData[2], fileData[3].toInt());
//            users.push_back(*user);
//        }
//    }

//    return users;
//}


    // *-- WRITE TO FILE FUNCTIONS --*


void write_defects(QVector<Defect> defects){
    QFile dcsv("C:/Users/270121836/OneDrive - UP Education/Desktop/github4/defects.csv");

    if(dcsv.open(QIODevice::WriteOnly|QIODevice::Truncate)){
        QTextStream out(&dcsv);
        bool at_start = 1;

        for(auto element : defects){
            if(at_start == 1){ //if else statement to neatly print line breaks before each line except the first
                at_start = 0;
            }else{
                out << "\n";
            }

            out << element.get_id() << "`" << element.get_name() << "`" << element.get_status() << "`" << element.get_desc() << "`" << element.get_reported_by() << "`" << element.get_working_on() << "`" << element.get_registered().year() << "`" << element.get_registered().month() << "`" << element.get_registered().day() << "`" << element.get_completed().year() << "`" << element.get_completed().month() << "`" << element.get_completed().day();
        }
    }
}

#endif // TRACKINGCLASSES_H

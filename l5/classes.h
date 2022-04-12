#ifndef CLASSES_H
#define CLASSES_H
#include <QString>
class myclass
{
public:
    myclass();
    void obr(int num);

private:
};
class Human
{
protected:
    QString name;
    QString age;

public:
    Human() : name("Qwerty"), age("23") {}
    Human(QString name1, QString age1)
    {
        name = name1;
        age = age1;
    }
    virtual ~Human(){};
    virtual QString getmain(){return name; }
    virtual QString getname() { return name; };
    virtual QString getage() { return age; };

};
class Student : public Human
{
    QString course;

public:
    Student() : Human(), course("2") {}
    Student(QString course1) : course(course1) {}
    Student(QString name1, QString age1, QString course1) : Human(name1, age1)
    {
        course = course1;
    }
    ~Student(){};
    QString getmain() { return course; };
    QString getcourse() { return course; };
    void setname(QString name1){ name = name1; }
    void setage(QString age1){ age = age1; }
    void setcourse(QString course1){ course = course1; }
};
class Teacher : public Human
{
    QString institute;
    QString department;

public:
    Teacher() : Human(), institute("OSU"), department("IPAIT") {}
    Teacher(QString institute1, QString department1) : institute(institute1), department(department1) {}
    Teacher(QString name1, QString age1, QString institute1, QString department1) : Human(name1, age1)
    {
        institute = institute1;
        department = department1;
    }
    ~Teacher(){};
    QString getinstitute(){ return institute; }
    QString getmain(){ return institute; }
    QString getdepartment() { return department; }
    void setname(QString name1){ name = name1; }
    void setage(QString age1){ age = age1; }
    void setinstitute(QString institute1){ institute = institute1; }
    void setdepartment(QString department1){ department = department1; }
};
#endif // CLASSES_H

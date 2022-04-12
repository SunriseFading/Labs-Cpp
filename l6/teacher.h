#ifndef TEACHER_H
#define TEACHER_H
#include <QString>
#include "showtab.h"
class myclass
{
public:
    myclass();
    void obr(int num);

private:
};
class Teacher
{
protected:
    QString surname;
    QString name;
    QString patronymic;
    QString subject;
    QString experience;
public:
    Teacher *Next;
    Teacher *Prev;

public:
    void setteacher(QString surname1, QString name1, QString patronymic1, QString subject1, QString experience1, Teacher *n, Teacher *p)
    {
        surname = surname1;
        name = name1;
        patronymic = patronymic1;
        subject = subject1;
        experience = experience1;
        Next = n;
        Prev = p;
    }
    Teacher *Getnext() { return Next; }
    Teacher *Getprev() { return Prev; }
    QString getsurname(){ return surname; }
    QString getname(){ return name; }
    QString getpatronymic(){ return patronymic; }
    QString getsubject(){ return subject; }
    QString getexperience(){ return experience; }
};
class List
{
public:
    Teacher *Head, *Tail;
    showtab *sh;

public:
    List() : Head(nullptr), Tail(nullptr){};
    void addteacher(QString surname2, QString name2, QString patronymic2, QString subject2, QString experience2);
    void getteacher();
    void deletteacher(QString del_surname);
};
#endif // MYCODE_H

#include "teacher.h"
#include "addlist.h"
#include "showlist.h"
#include "dellist.h"
#include <locale.h>
#include <iostream>
#include <QDebug>
#include <list>
using namespace std;
class Teacher
{
protected:
    QString surname;
    QString name;
    QString subject;
    QString experience;

public:
    Teacher() : surname("Qwerty"), name("Asdf"), subject("Math"), experience("15") {}
    Teacher(QString surname1, QString name1, QString subject1, QString experience1) : surname(surname1), name(name1), subject(subject1), experience(experience1) {}
    void getteacher(QString &A, QString &B, QString &C, QString &D)
    {
        A = surname;
        B = name;
        C = subject;
        D = experience;
    }
    QString getsurname(QString &A)
    {
        A = surname;
        return A;
    }
};
list<Teacher> mylist;
list<Teacher>::iterator it;
void code::obr(int number)
{
    int key = number;
    switch (key)
    {
    case 1:
    {
        QString A, B, C, D;
        addlist q;
        q.exec();
        q.taketeacher(A, B, C, D);
        mylist.push_back(Teacher(A, B, C, D));
        break;
    }
    case 2:
    {
        QString A;
        dellist q;
        q.exec();
        q.del1(A);
        for (it = mylist.begin(); it != mylist.end(); it++)
        {
            if (it->getsurname(A) == A)
            {
                mylist.erase(it);
                break;
            }
        }
        break;
    }
    case 3:
    {
        QString A, B, C, D;
        showlist q;
        for (it = mylist.begin(); it != mylist.end(); it++)
        {
            it->getteacher(A, B, C, D);
            q.settab1(A, B, C, D);
        }
        q.exec();
        q.reset();
    }
    break;
    }
}

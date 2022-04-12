#include "teacher.h"
#include "addvector.h"
#include "showvector.h"
#include "delvector.h"
#include <locale.h>
#include <iostream>
#include <QDebug>
#include <vector>
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
vector<Teacher> myvector;
void code::obr(int number)
{
    int key = number;
    setlocale(LC_ALL, "RUS");
    switch (key)
    {
    case 1:
    {
        QString A, B, C, D;
        addvector q;
        q.exec();
        q.taketeacher(A, B, C, D);
        myvector.push_back(Teacher(A, B, C, D));
        break;
    }
    case 2:
    {
        QString A;
        delvector q;
        q.exec();
        q.del1(A);
        for (int i = 0; myvector.size(); i++)
        {
            if (myvector[i].getsurname(A) == A)
            {
                for (int j = i; j < myvector.size() - 1; j++)
                {
                    myvector[j] = myvector[j + 1];
                }
                myvector.pop_back();
                break;
            }
        }
        break;
    }
    case 3:
    {
        QString A, B, C, D;
        showvector q;
        for (int i = 0; i < myvector.size(); i++)
        {
            myvector[i].getteacher(A, B, C, D);
            q.settab1(A, B, C, D);
        }
        q.exec();
        q.reset();
    }
    break;
    }
}

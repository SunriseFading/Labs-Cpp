#include "classes.h"
#include "add.h"
#include "show.h"
#include "delet.h"
#include <iostream>
#include <string>
#include <locale.h>
#include <QString>
#include <QDebug>
int m1 = 0;
int m2 = 60;
using namespace std;
Human *H[120];
myclass::myclass()
{
    for (int i = 0; i < 120; i++)
    {
        if (i < 60)
        {
            H[i] = new Student();
        }
        else
            H[i] = new Teacher();
    }
}
void myclass::obr(int num)
{
    int sw = num;
    setlocale(LC_ALL, "RUS");
    switch (sw)
    {
    case 1:
    {
        add a;
        QString name1, age1, course1, institute1, department1, E;
        QString name2, age2;
        a.exec();
        a.takestudent(name1, age1, course1, E);
        a.taketeacher(name2, age2, institute1, department1, E);
        if (E == ".")
        {

            ((Student *)H[m1])->setname(name1);
            ((Student *)H[m1])->setage(age1);
            ((Student *)H[m1])->setcourse(course1);
            m1++;
        }
        else if (E == "*")
        {
            ((Teacher *)H[m2])->setname(name2);
            ((Teacher *)H[m2])->setage(age2);
            ((Teacher *)H[m2])->setinstitute(institute1);
            ((Teacher *)H[m2])->setdepartment(department1);
            m2++;
        }
        break;
    }
    case 2:
    {
        QString R1, R2, E;
        delet de;
        de.exec();
        de.takedelstudent(R1, E);
        de.takedelteacher(R2, E);
        if (E == ".")
        {
            for (int j = 0; j < m1; j++)
            {
                if (((Student *)H[j])->getname() == R1)
                {
                    ((Student *)H[j])->setname(((Student *)H[j + 1])->getname());
                    ((Student *)H[j])->setage(((Student *)H[j + 1])->getage());
                    ((Student *)H[j])->setcourse(((Student *)H[j + 1])->getcourse());
                    m1--;
                }
            }
        }
        else if (E == "*")
        {
            for (int j = 60; j <= m2; j++)
            {
                if (((Teacher *)H[j])->getname() == R2)
                {
                    ((Teacher *)H[j])->setname(((Teacher *)H[j + 1])->getname());
                    ((Teacher *)H[j])->setage(((Teacher *)H[j + 1])->getage());
                    ((Teacher *)H[j])->setinstitute(((Teacher *)H[j + 1])->getinstitute());
                    ((Teacher *)H[j])->setdepartment(((Teacher *)H[j + 1])->getdepartment());
                    m2--;
                }
            }
        }
        break;
    }
    case 3:
    {
        show sh;
        for (int i = 0; i < m1; i++)
        {
            QString A, B, C;
            A = ((Student *)H[i])->getname();
            B = ((Student *)H[i])->getage();
            C = (H[i])->getmain();
            sh.table1(A, B, C);
        }
        for (int i = 60; i < m2; i++)
        {
            QString A, B, C, D;
            A = ((Teacher *)H[i])->getname();
            B = ((Teacher *)H[i])->getage();
            C = (H[i])->getmain();
            D = ((Teacher *)H[i])->getdepartment();
            sh.table2(A, B, C, D);
        }
        sh.exec();
        sh.reset();
        break;
    }
    }
}

#include "teacher.h"
#include "addteacher.h"
#include "delteacher.h"
#include <locale.h>
#include <QString>
#include <iostream>
#include <QDebug>
#include <list>
List L;
using namespace std;
myclass::myclass() {}
void List::addteacher(QString surname2, QString name2, QString patronymic2, QString subject2, QString experience2)
{
    Teacher *temp = new Teacher;
    temp->Next = nullptr;
    temp->setteacher(surname2, name2, patronymic2, subject2, experience2, Head, Tail);
    if (Head)
    {
        temp->Prev = Tail;
        Tail->Next = temp;
        Tail = temp;
    }
    else
    {
        temp->Prev = nullptr;
        Head = Tail = temp;
    }
}
void List::getteacher()
{
    QString A,B,C,D,E;
    sh = new showtab();
    Teacher *temp = Tail;
    while(temp != nullptr)
    {
        A = temp->getsurname();
        B = temp->getname();
        C = temp->getpatronymic();
        D = temp->getsubject();
        E = temp->getexperience();
        sh->settab1(A, B, C, D, E);
        temp = temp->Prev;
    }
    sh->exec();
    sh->reset();
}
void List::deletteacher(QString del_surname)
{
    Teacher *current = Tail;
    if(Head!=nullptr){
        if(Head->getsurname() == del_surname){
            Head = Head -> Next;
            if (Head == nullptr){Tail = nullptr;}
            else{Head->Prev = nullptr;}
            return;
        }
        if(Tail->getsurname() == del_surname){
            Tail = Tail->Prev;
            if(Tail == nullptr){Head = nullptr;}
            else{Tail->Next = nullptr;}
            return;
        }
        while(current != nullptr){
            if(current->getsurname() == del_surname){
                current->Prev->Next = current->Next;
                current->Next->Prev = current->Prev;
                current = current->Next;
                return;
            }
            current = current->Prev;
        }
    }
}
void myclass::obr(int number)
{
    int key = number;
    switch (key)
    {
    case 1:
    {
        QString s1, n1, p1, sub1, exp1;
        addteacher q;
        q.exec();
        q.taketeacher(s1, n1, p1, sub1, exp1);
        L.addteacher(s1, n1, p1, sub1, exp1);
        break;
    }
    case 2:
    {
        QString del_surname;
        delteacher q;
        q.exec();
        q.del1(del_surname);
        L.deletteacher(del_surname);
        break;
    }
    case 3:
    {
        L.getteacher();
        break;
    }
    }
}

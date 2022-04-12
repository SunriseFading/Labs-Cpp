#include <bits/stdc++.h>
#include <iostream>
#ifndef _add_module_H_
#define _add_module_H_

using namespace std;

struct Data
{
    int day;
    int month;
    int year;
};

class teacher
{
private:
    int timesheet;
    string surname;
    string name;
    string patronymic;
    string gender;
    struct Data born;
    string address;
    string num;
    string subject;
    int experience;
    bool degree;
    static string school;

public:
    teacher();
    teacher(int timesheet,
            string surname,
            string name,
            string patronymic,
            string gender,
            struct Data born,
            string address,
            string num,
            string subject,
            int experience,
            bool degree,
            string school);

    void add()
    {
        cout << "Введите табельный номер учителя:";
        cin >> timesheet;
        cout << "Введите фамилию учителя:";
        cin >> surname;
        cout << "Введите имя учителя:";
        cin >> name;
        cout << "Введите отчество учителя:";
        cin >> patronymic;
        cout << "Введите пол учителя:";
        cin >> gender;
        cout << "Введите день рождения учителя:";
        cin >> born.day;
        cout << "Введите месяц рождения учителя:";
        cin >> born.month;
        cout << "Введите год рождения учителя:";
        cin >> born.year;
        cout << "Введите адрес учителя:";
        cin >> address;
        cout << "Введите мобильный номер учителя:";
        cin >> num;
        cout << "Введите предмет учителя:";
        cin >> subject;
        cout << "Введите стаж учителя:";
        cin >> experience;
        cout << "Есть ли у учителя ученая степень?";
        cin >> degree;
    }
    int GET_TIMESHEET() { return timesheet; }
    string GET_SURNAME() { return surname; }
    string GET_NAME() { return name; }
    string GET_PATRONYMIC() { return patronymic; }
    string GET_GENDER() { return gender; }
    int GET_DAY() { return born.day; }
    int GET_MONTH() { return born.month; }
    int GET_YEAR() { return born.year; }
    string GET_ADDRESS() { return address; }
    string GET_NUM() { return num; }
    string GET_SUBJECT() { return subject; }
    int GET_EXPERIENCE() { return experience; }
    int GET_DEGREE() { return degree; }
    static void SET_SCHOOL(string HJK) { school = HJK; }
    static void SHOW_SCHOOL() { cout << "Школа =" << school << endl; }
    void show()
    {
        cout << setw(16) << timesheet << "|";
        cout << setw(11) << surname << "|";
        cout << setw(11) << name << "|";
        cout << setw(13) << patronymic << "|";
        cout << setw(7) << born.day << "." << born.month << "." << born.year << "|";
        cout << setw(5) << gender << "|";
        cout << setw(15) << subject << "|";
        cout << setw(6) << experience << "|";
        cout << setw(13) << num << "|";
        cout << setw(19) << address << "|";
        cout << setw(13) << degree << "|";
        cout << setw(13) << school << "|" << endl;
    }

    teacher *del(int &timesheet, int &n, teacher *T)
    {
        for (int i = 0; i <= n - 1; i++)
        {
            if (T[i].GET_TIMESHEET() == timesheet)
            {
                for (int j = i; j <= n - 1; j++)
                {
                    T[j] = T[j + 1];
                    T[j].~teacher();
                }
                n--;
                return T;
            }
        }
    }

    teacher *del(string &surname, int &n, teacher *T)
    {
        for (int i = 0; i <= n; i++)
        {
            if (T[i].GET_SURNAME() == surname)
            {
                for (int j = i; j <= n - 1; j++)
                {
                    T[j] = T[j + 1];
                    T[j].~teacher();
                }
                n--;
                return T;
            }
        }
    }

    teacher *del(int &timesheet, string &surname, int &n, teacher *T)
    {
        for (int i = 0; i <= n; i++)
        {
            if ((T[i].GET_SURNAME() == surname) && (T[i].GET_TIMESHEET() == timesheet))
            {
                for (int j = i; j <= n - 1; j++)
                {
                    T[j] = T[j + 1];
                    T[j].~teacher();
                }
                n--;
                return T;
            }
        }
    }
};
string teacher::school = "ASD";
teacher::teacher()
{
    timesheet = 1;
    surname = "Qwerty";
    name = "Asdfg";
    patronymic = "Zxcvbn";
    born.day = 11;
    born.month = 10;
    born.year = 1988;
    gender = "M";
    address = "VB street 12";
    num = "1234567899";
    subject = "Computer-Scince";
    experience = 10;
    degree = 1;
};

#endif
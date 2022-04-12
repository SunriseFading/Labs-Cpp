#include <bits/stdc++.h>
#include <iostream>
#ifndef _add_module_H_
#define _add_module_H_

using namespace std;
enum Gender
{
    male = 'M',
    female = 'F',
};

struct Data
{
    string day = "";
    string month = "";
    string year = "";
};
struct teacher
{
    int timesheet = 0;
    string name = "";
    string surname = "";
    string patronymic = "";
    Gender gender;
    struct Data born;
    string address = "";
    int experience;
    string num = "";
    string subject = "";
    bool degree;

public:
    void AddTeacher(int *n, teacher **T, int timesheet = 1, string name = "Asdf", string surname = "Qwer", string patronymic = "Zxcv", string bday = "10", string bmonth = "12", string byear = "2000", Gender gender = male, string address = "Gorgorod city", int experience = 10, string num = "88005553555", string subject = "Wasted", bool degree = 1)
    {
        int choice;
        string temp;
        *T = (struct teacher *)realloc(*T, (*n + 1) * sizeof(struct teacher));
        cout << "Введите табельный номер или 0, для применения значения по умолчанию - ";
        cin >> temp;
        if (temp != "0")
            timesheet = atoi(temp.c_str());
        cout << "Введите фамилию или 0, для применения значения по умолчанию - ";
        cin >> temp;
        if (temp != "0")
            surname = temp;
        cout << "Введите имя или 0, для применения значения по умолчанию - ";
        cin >> temp;
        if (temp != "0")
            name = temp;
        cout << "Введите отчество или 0, для применения значения по умолчанию - ";
        cin >> temp;
        if (temp != "0")
            patronymic = temp;
        cout << "Введите день рождения или 0, для применения значения по умолчанию - ";
        cin >> temp;
        if (temp != "0")
            bday = temp;
        cout << "Введите месяц рождения или 0, для применения значения по умолчанию - ";
        cin >> temp;
        if (temp != "0")
            bmonth = temp;
        cout << "Введите год рождения или 0, для применения значения по умолчанию - ";
        cin >> temp;
        if (temp != "0")
            byear = temp;
        cout << "Введите пол(1 - male, 2 - female) - ";
        cin >> choice;
        if (choice == 1)
            gender = Gender::male;
        else if (choice == 2)
            gender = Gender::female;
        cout << "Введите адрес или 0, для применения значения по умолчанию - ";
        cin >> temp;
        if (temp != "0")
            address = temp;
        cout << "Введите предмет или 0, для применения значения по умолчанию - ";
        cin >> temp;
        if (temp != "0")
            subject = temp;
        cout << "Введите опыт работы или 0, для применения значения по умолчанию - ";
        cin >> temp;
        if (temp != "0")
            experience = atoi(temp.c_str());
        cout << "Введите номер или 0, для применения значения по умолчанию - ";
        cin >> temp;
        num = temp;
        cout << "Есть ли у учителя ученая степень?(1 - Да, 0 - Нет) - ";
        cin >> degree;
        {
            (*T + *n)->timesheet = timesheet;
            (*T + *n)->name = name;
            (*T + *n)->surname = surname;
            (*T + *n)->patronymic = patronymic;
            (*T + *n)->born.day = bday;
            (*T + *n)->born.month = bmonth;
            (*T + *n)->born.year = byear;
            (*T + *n)->gender = gender;
            (*T + *n)->address = address;
            (*T + *n)->num = num;
            (*T + *n)->subject = subject;
            (*T + *n)->experience = experience;
            (*T + *n)->degree = degree;
        }
    }

    teacher *Del(int &timesheet, int *n, teacher *T)
    {

        for (int i = 0; i < *n; i++)
        {
            if (T[i].timesheet == timesheet)
            {

                for (int j = i; j < *n - 1; j++)
                {
                    T[j] = T[j + 1];
                }
                *n = *n - 1;
                return T;
            }
        }
        if (*n == 0)
        {
            T = (struct teacher *)malloc(*n * sizeof(struct teacher));
            return T;
        }
        T = (struct teacher *)realloc(T, *n * sizeof(struct teacher));
        return T;
    }
    teacher *Del(string &surname, int *n, teacher *T)
    {

        for (int i = 0; i < *n; i++)
        {
            if (T[i].surname == surname)
            {

                for (int j = i; j < *n - 1; j++)
                {
                    T[j] = T[j + 1];
                }
                *n = *n - 1;
                return T;
            }
        }
        if (*n == 0)
        {
            T = (struct teacher *)malloc(*n * sizeof(struct teacher));
            return T;
        }
        T = (struct teacher *)realloc(T, *n * sizeof(struct teacher));
        return T;
    }
    teacher *Del(int &timesheet, string &surname, int *n, teacher *T)
    {

        for (int i = 0; i < *n; i++)
        {
            if ((T[i].timesheet == timesheet) && (T[i].surname == surname))
            {

                for (int j = i; j < *n - 1; j++)
                {
                    T[j] = T[j + 1];
                }
                *n = *n - 1;
                return T;
            }
        }
        if (*n == 0)
        {
            T = (struct teacher *)malloc(*n * sizeof(struct teacher));
            return T;
        }
        T = (struct teacher *)realloc(T, *n * sizeof(struct teacher));
        return T;
    }

    void ShowTeach(int j, struct teacher *T)
    {
        cout << setw(16) << T[j].timesheet << "|";
        cout << setw(11) << T[j].surname << "|";
        cout << setw(11) << T[j].name << "|";
        cout << setw(13) << T[j].patronymic << "|";
        cout << setw(7) << T[j].born.day << "." << T[j].born.month << "." << T[j].born.year << "|";
        if (T[j].gender == male)
            cout << setw(5) << "M"
                 << "|";
        else if (T[j].gender == female)
            cout << setw(5) << "F"
                 << "|";
        cout << setw(15) << T[j].subject << "|";
        cout << setw(6) << T[j].experience << "|";
        cout << setw(13) << T[j].num << "|";
        cout << setw(19) << T[j].address << "|";
        cout << setw(13) << T[j].degree << "|" << endl;
    }
};

void Save(struct teacher *T, int *n)
{
    char file_name[20];
    cout << "Введите название файла - ";
    cin >> file_name;
    FILE *f;
    f = fopen(file_name, "wb");
    fwrite(n, sizeof(int), 1, f);
    fwrite(T, sizeof(struct teacher), *n, f);
    fclose(f);
}

// long int get_file_size(FILE *f)
// {
//     long int curr_pos, end_pos;
//     curr_pos = ftell(f);
//     fseek(f, 0, SEEK_END);
//     end_pos = ftell(f);
//     fseek(f, curr_pos, SEEK_SET);
//     return end_pos;
// }

void Load(struct teacher *T, int *n)
{
    char f_name[20];
    cout << "Введите имя файла - ";
    cin >> f_name;
    FILE *f;
    f = fopen(f_name, "rb");
    // int temp_n;
    // temp_n = get_file_size(f) / sizeof(struct teacher);
    // n += temp_n;
    fread(n, sizeof(int), 1, f);
    T = (struct teacher *)realloc(T, *n * sizeof(struct teacher));
    fread(T, sizeof(struct teacher), *n, f);
    fclose(f);
    return;
}
#endif

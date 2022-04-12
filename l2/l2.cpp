#include <bits/stdc++.h>
#include <iostream>
#include "add_module.h"

using namespace std;
int main()
{
    int n = 0, timesheet, choice, check_day, check_month, check_year, counter = 0;
    string surname, school;
    teacher T[500];
    do
    {
        cout << ("\n");
        cout << ("Меню программы:\n");
        cout << ("1.Добавление информации о новом учителе\n");
        cout << ("2.Удаление информации об учителе\n");
        cout << ("3.Отображение информации об учетелях в виде таблицы\n");
        cout << ("4.Поиск инофрмации об учителях по году рождения\n");
        cout << ("5.Определение кол-ва учителей мужского пола с ученой степенью\n");
        cout << ("6.Изменение названия школы, в которой работают учителя. \n");
        cout << ("7.Выход из программы\n");
        cout << ("Выбранный пункт меню - ");
        cin >> choice;
        cout << ("\n");
        switch (choice)
        {
        case 1:
            T[n].add();
            n++;
            break;

        case 2:
            cout << "1.Удаление по табельному номеру\n2.Удаление по фамилии\n3.Удаление по табельному номеру и фамилии\n";
            cout << ("Выбранный пункт меню - ");
            cin >> choice;
            if (choice == 1)
            {
                cout << "Введите табельный номер:";
                cin >> timesheet;
                T->del(timesheet, n, T);
            }
            else if (choice = 2)
            {
                cout << "Введите фамилию учителя - ";
                cin >> surname;
                T->del(surname, n, T);
            }
            else if (choice = 3)
            {
                cout << "Введите табельный номер:";
                cin >> timesheet;
                cout << "Введите фамилию учителя - ";
                cin >> surname;
                T->del(timesheet, surname, n, T);
            }
            else
            {
                cout << "Error\n";
            }
            break;
        case 3:
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("|Табельный номер|  Фамилия  |    Имя    |  Отчество   | Дата рождения | Пол |    Предмет    | Стаж |    Номер    |       Адрес       | Уч. степень |    Школа    |\n");
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            for (int i = 0; i < n; i++)
            {
                T[i].show();
            }
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
            break;

        case 4:
            cout << "Введите год рождения - ";
            cin >> check_year;
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("|Табельный номер|  Фамилия  |    Имя    |  Отчество   | Дата рождения | Пол |    Предмет    | Стаж |    Номер    |       Адрес       | Уч. степень |    Школа    |\n");
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            for (int i = 0; i < n; i++)
            {
                if (T[i].GET_YEAR() == check_year)
                {
                    T[i].show();
                }
            }
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
            break;

        case 5:
            for (int i = 0; i < n; i++)
            {
                if ((T[i].GET_GENDER() == "M") && (T[i].GET_DEGREE() == 1))
                {
                    counter++;
                }
                counter = 0;
            }
            cout << "Учителей мужского пола с ученой степенью - " << counter << endl;
            break;
        case 6:
            cout << "Введите название школы: ";
            cin >> school;
            teacher::SET_SCHOOL(school);
            break;
        case 7:
            return 0;
            break;
        default:
            cout << "Error\n";
        }
    } while (choice != 8);
}
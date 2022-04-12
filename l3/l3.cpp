#include <bits/stdc++.h>
#include <iostream>

using namespace std;
main()
{
    string choice, s;
    do
    {
        cout << "Z1 - Подсчет гласных букв во введенном тексте" << endl;
        cout << "Z2 - Удаление всех знаков препинания" << endl;
        cout << "Z3 - Редактирование текста по следующим правилам: перед запятой нет пробела, после запятой 1 пробел, две запятые не могут стоять рядом " << endl;
        cout << "Exit - выход из программы" << endl;
        cout << "Выберите пункт - ";
        getline(cin, choice);
        if (choice == "Z1")
        {
            cout << "Введите текст: ";
            getline(cin, s);
            regex const pattern("[AaEeYyUuOoIi]");
            ptrdiff_t const match_count(distance(sregex_iterator(s.begin(), s.end(), pattern), sregex_iterator()));
            cout << "Гласных букв во введенном тексте - " << match_count << endl;
        }
        else if (choice == "Z2")
        {
            cout << "Введите текст: ";
            getline(cin, s);
            s = regex_replace(s, regex("[-.?!)(,:/]"), "");
            cout << s << endl;
        }
        else if (choice == "Z3")
        {
            cout << "Введите текст: ";
            getline(cin, s);
            s = regex_replace(s, regex("( )*\,+( )*"), ", ");
            cout << s << endl;
        }
        else if (choice == "Exit")
        {
            exit(0);
            break;
        }
        else
        {
            cout << "Error" << endl;
        }
    } while (1 == 1);
}
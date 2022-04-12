#include <bits/stdc++.h>
#include <iostream>
#include "add_module.h"
using namespace std;

int main()
{
    int T, S, choice;
    float addendum, divider, q, mat;
    Matrix Object1, Object2(2, 2, 2, 2), Object3(3, 3, 3, 3), Object4;
    Number num1;
    do
    {
        cout << "Меню:" << endl;
        cout << "1.Сложение" << endl;
        cout << "2.Деление" << endl;
        cout << "3.Инкремент префиксный" << endl;
        cout << "4.Инкремент постфиксный" << endl;
        cout << "5.От основного к пользовательскому" << endl;
        cout << "6.От пользовательского к основному" << endl;
        cout << "7.От пользовательского к пользовательскому" << endl;
        cout << "8.Выход из программы" << endl;
        cout << ("Выбранный пункт меню - ");
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Введите первую матрицу:"<<endl;
            cin >> Object1;
            cout << "Введите вторую матрицу:"<< endl;
            cin >> Object2;
            cout << Object1;
            cout << "+" << endl;
            cout << Object2;
            cout << "=" << endl;
            Object1 = Object1 + Object2;
            cout << Object1;
            break;

        case 2:
            cout << "Введите первую матрицу:" << endl;
            cin >> Object1;
            cout << "Введите вторую матрицу:" << endl;
            cin >> Object2;
            cout << Object1;
            cout << "/" << endl;
            cout << Object2;
            cout << "=" << endl;
            Object1 = Object1 / Object2;
            cout << Object1;
            break;

        case 3:
            cin >> Object1;
            ++Object1;
            cout << Object1;
            break;

        case 4:
            cin >> Object1;
            Object1++;
            cout << Object1;
            break;

        case 5:
            cout << "Введите число - ";
            cin >> mat;
            Object2 = mat;
            cout << "Вывод матрицы" << endl;
            cout << Object2;
            break;

        case 6:
            cin >> Object1;
            mat = static_cast<float>(Object1);
            cout << "Вывод" << endl;
            cout << mat << endl;
            break;

        case 7:
            float r;
            cout << "Введите число - ";
            cin >> r;
            num1 = r;
            Object2 = num1;
            cout << "Вывод матрицы" << endl;
            cout << num1;
            break;

        case 8:
            exit(0);
            break;

        default:
            cout << "Error" << endl;
        }
    } while (1 == 1);
}
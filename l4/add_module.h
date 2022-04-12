#include <bits/stdc++.h>
#include <iostream>
#ifndef _add_module_H_
#define _add_module_H_

using namespace std;
class Number
{
    float NUM;

public:
    Number() : NUM(3) {}
    Number(float num) : NUM(num) {}
    float get_num() { return NUM; }
};
class Matrix
{
    float A;
    float B;
    float C;
    float D;

public:
    Matrix() : A(1), B(1), C(1), D(1) {}
    Matrix(float a, float b, float c, float d) : A(a), B(b), C(c), D(d) {}
    friend ostream &operator<<(ostream &out, const Matrix &Object);
    friend istream &operator>>(istream &in, Matrix &Object);
    Matrix operator+(Matrix object)
    {
        A = A + object.A;
        B = B + object.B;
        C = C + object.C;
        D = D + object.D;
        return Matrix(A, B, C, D);
    }
    Matrix operator/(Matrix object)
    {
        A = A / object.A;
        B = B / object.B;
        C = C / object.C;
        D = D / object.D;
        return Matrix(A, B, C, D);
    }
    Matrix operator++()
    {
        A += 1;
        float a = A;
        B += 1;
        float b = B;
        C += 1;
        float c = C;
        D += 1;
        float d = D;
        return Matrix(a, b, c, d);
    }
    Matrix operator++(int)
    {
        float a = A;
        A += 1;
        float b = B;
        B += 1;
        float c = C;
        C += 1;
        float d = D;
        D += 1;
        return Matrix(a, b, c, d);
    }
    Matrix(float matr)
    {
        A = matr;
        B = matr;
        C = matr;
        D = matr;
    }
    operator float() const
    {
        float f_matr = A * D - C * B;
    }
    Matrix(Number numb)
    {
        A = numb.get_num();
        B = numb.get_num();
        C = numb.get_num();
        D = numb.get_num();
    }
};
ostream &operator<<(ostream &out, const Matrix &Object)
{
    out << Object.A << " " << Object.B << endl;
    out << Object.C << " " << Object.D << endl;
    return out;
}

istream &operator>>(istream &in, Matrix &Object)
{
    cout << "[0][0] = ";
    in >> Object.A;
    cout << "[0][1] = ";
    in >> Object.B;
    cout << "[1][0] = ";
    in >> Object.C;
    cout << "[1][1] = ";
    in >> Object.D;
    return in;
}

#endif
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <cstdio>
 
using namespace std;

enum Otdel 
{
     Net,
     Apteka_1, 
     Apteka_2, 
     Apteka_3, 
     Apteka_4, 
     Apteka_5
};

struct Date
{
       int day;
       int month;
       int year;
};

struct lecarstvo
{
       int kod;
       char name[20] = {' '};
       struct Date release;
       float price;
       Otdel otdel;
       bool nal;
       char description[100] = {' '};
};

void New_lecarstvo (int *n, lecarstvo** A)
{
     int a;
     int k, b;
     *A = (struct lecarstvo *)realloc (*A, (*n + 1) * sizeof (struct lecarstvo));
     cout << "������� ���������� � " << *n + 1 << " ���������:" << endl;
     cout << "������ ������ ��� ���������? 1 - ��, 2 - ���: ";
     cin >> k;
     if (k == 1)
     {
           cout << "������� ��� ���������: ";
           cin >> (*A + *n)->kod; 
     }
     else
     {
         (*A + *n)->kod = 0;
     }
     cout << endl;
     cout << "������ ������ �������� ���������? 1 - ��, 2 - ���: ";
     cin >> k; 
     if (k == 1) 
     {
           cout << "������� �������� ���������: ";
           cin.ignore();
           cin >> (*A + *n)->name;
           
     }
     else (*A+*n)->name[0] = 'd';
     cout << endl;
     cout << "������ ������ ���� ������������ ���������? 1 - ��, 2 - ���: ";
     cin >> k; 
     if (k == 1)
     {
           cout << "������� ��� ������������ ���������: ";
           cin >> (*A + *n)->release.year;
           cout << "������� ����� ������������ ���������: ";
           cin >> (*A + *n)->release.month;
           cout << "������� ���� ������������ ���������: ";
           cin >> (*A + *n)->release.day; 
     }
     else
     {
         (*A+*n)->release.year = 0;
         (*A+*n)->release.month = 0;
         (*A+*n)->release.day = 0;
     }
     cout << endl;
     cout << "������ ������ ���� ���������? 1 - ��, 2 - ���: ";
     cin >> k; 
     if (k == 1)
     {
           cout << "������� ���� �� ���������: ";
           cin >> (*A + *n)->price; 
     }
     else (*A+*n)->price = 0;
     cout << endl;
     cout << "������ ������ ����� ������? 1 - ��, 2 - ���: ";
     cin >> k;
     if (k == 1)
     {
           cout << "������� ����� ������(1..5): ";
           cin >> a; 
           switch(a)
           {
                    case Apteka_1:
                                  (*A + *n)->otdel = Otdel::Apteka_1;
                                   break;
                    case Apteka_2:
                                   (*A + *n)->otdel = Otdel::Apteka_2;
                                   break;
                    case Apteka_3:
                                   (*A + *n)->otdel = Otdel::Apteka_3;
                                   break;
                    case Apteka_4:
                                   (*A + *n)->otdel = Otdel::Apteka_4;
                                   break;
                    case Apteka_5:
                                   (*A + *n)->otdel = Otdel::Apteka_5;
                                   break;
                    default:
                            cout << "������� ������ �� ����������" << endl;
                            (*A + *n)->otdel = Otdel::Net;
           }  
     }
     else (*A + *n)->otdel = Otdel::Net;
     cout << endl;
     cout << "������ ������� ������� ������� �����? 1 - ��, 2 - ���: ";
     cin >> k; 
     if (k == 1)
     {
           cout << "���� ��������� ������������ ������ �� ���������� �����, ������� 1. ���� ���������� ����� �� ���������, ������� 2: ";
           cin >> b; 
           if (b == 1) (*A + *n)->nal = 1;
           else if (b == 2) (*A + *n)->nal = 0;
     }
     else (*A + *n)->nal = 2;
     cout << endl;
     cout << "������ ������ �������� ���������? 1 - ��, 2 - ���: ";
     cin >> k; 
     if (k == 1)
     {
           cout << "������� �������� ���������: ";
           cin.ignore();
           cin >> (*A + *n)->description;
     }
     cout << endl;
}

struct lecarstvo * del (int kod, int *n, struct lecarstvo *A)
{
	if (*n == 0)
	   {
		printf("�������� ����\n");
	    }
    for (int i = 0; i < *n; i++)
        {
            if (A[i].kod == kod)
                {
                    for (int j = i; j < *n; j++)
                        {
                            A[j] = A[j + 1];
                        }
					*n = *n - 1;
                }
        }
        if (*n == 0)
	    {
		A = (struct lecarstvo *)malloc (*n * sizeof (struct lecarstvo));
		return A;
	    }
        A = (struct lecarstvo *)realloc (A, *n * sizeof (struct lecarstvo));
    return A;
        
}

int table (int g, struct lecarstvo* A)
{
     if (g == 0) return 0;
     else
     {
         table(g-1, A);
         cout << setw(1) << g << "|";
              if (A[g-1].kod == 0) cout << setw(14) << ' ' << "|";
              else cout << setw(14) << A[g-1].kod << "|"; 
              if (A[g-1].name[0] == 'd') cout << setw(18) << ' ' << "|";
              else cout << setw(18) << A[g-1].name << "|"; 
              if ((A[g-1].release.day == 0) && (A[g-1].release.month == 0) && (A[g-1].release.day == 0)) cout << setw(17) << ' ' << "|";
              else cout << setw(10) << A[g-1].release.day << "." << A[g-1].release.month << "." << A[g-1].release.year << "|"; 
              if (A[g-1].price == 0) cout << setw(14) << ' ' << "|";
              else cout << setw(14) << A[g-1].price << "|"; 
              if (A[g-1].otdel == 0) cout << setw(10) << ' ' << "|";
              else cout << setw(10) << A[g-1].otdel << "|";
              if (A[g-1].nal == 2) cout << setw(15) << ' ' << "|"; 
              else cout << setw(15) << boolalpha << A[g-1].nal << "|";
              cout << A[g-1].description << endl; 
     }
     return 0;
}

int year_lec (int year, int g, struct lecarstvo* A)
{
    if (g == 0) return 0;
    else
    {
        year_lec (year, g-1, A);
        if (A[g-1].release.year == year) 
        {
         if (A[g-1].kod == 0) cout << setw(14) << ' ' << "|";
              else cout << setw(14) << A[g-1].kod << "|"; 
              if (A[g-1].name[0] == 'd') cout << setw(18) << ' ' << "|";
              else cout << setw(18) << A[g-1].name << "|";  
              if ((A[g-1].release.day == 0) && (A[g-1].release.month == 0) && (A[g-1].release.day == 0)) cout << setw(17) << ' ' << "|";
              else cout << setw(10) << A[g-1].release.day << "." << A[g-1].release.month << "." << A[g-1].release.year << "|"; 
              if (A[g-1].price == 0) cout << setw(14) << ' ' << "|";
              else cout << setw(14) << A[g-1].price << "|"; 
              if (A[g-1].otdel == 0) cout << setw(10) << ' ' << "|";
              else cout << setw(10) << A[g-1].otdel << "|";
              if (A[g-1].nal == 2) cout << setw(15) << ' ' << "|"; 
              else cout << setw(15) << boolalpha << A[g-1].nal << "|";
              cout << A[g-1].description << endl;                 
        }
    }
    return 0;
}

int nal_lec (bool m, Otdel s, int g, struct lecarstvo* A)
{
    int count = 0;
    if (g == 0) return count;
    else 
    {
        if ((A[g-1].nal == m) && (A[g-1].otdel == s))
        {
            count = nal_lec(m, s, g-1, A) + 1;
        }
        else
        {
            count = nal_lec(m, s, g-1, A);  
        } 
    }
    
    return count;
}

int save (int *n, struct lecarstvo* A, FILE *fp, char str[50])
{
    fp = fopen(str, "wb");
    fwrite(n, sizeof(int), 1, fp);
    fwrite(A, sizeof(struct lecarstvo), *n, fp);
    fclose(fp);
    return 0;
}

int load (int *n, struct lecarstvo* A, FILE *fp, char str[50])
{
    fp = fopen(str, "rb");
    fread(n, sizeof(int), 1, fp);
    A = (struct lecarstvo *)realloc (A, *n * sizeof (struct lecarstvo));
    fread(A, sizeof(struct lecarstvo), *n, fp);
    fclose(fp);
    return 0;
}

enum Menu {Z1 = 1, Z2, Z3, Z4, Z5, Z6, Z7, Z8};

int main()
{
    SetConsoleCP (1251);
    SetConsoleOutputCP (1251);
    setlocale(LC_ALL, "rus");
    FILE* file; 
    int n = 0, d, kod, y, l, c, a;
    char str[50];
    Otdel s;
    bool m;
    lecarstvo* A = new lecarstvo[n];
    do
    {
           cout << "����:" << endl;
           cout << "1) �������� ���������� � ����� ���������;" << endl;
           cout << "2) ������� ���������� � ���������;" << endl;
           cout << "3) ���������� ���������� � ���������� � �������;" << endl;
           cout << "4) ���������� ���������� � ���������� �� ���������� ���� �������;" << endl;
           cout << "5) �����������  ����������  ��������  ��  ����������  ������  �  �������������  �� �������;" << endl;
           cout << "6) ���������� ������ � ���������� � ����" << endl;
           cout << "7) ������ ������ � ���������� �� �����" << endl;
           cout << "8) ����� �� ���������" << endl << endl;
           cout << "�������� ������ �����:";
           cin >> c;
           cout << endl;
           switch(c)
           {
                    case Z1:
                         New_lecarstvo(&n, &A);
                         n += 1;
                         cout << endl;
                         break;
                         
                    case Z2:
                         cout << "������� ��� ���������, ������� �� ����������� �������";
                         cin >> kod;
                         del(kod, &n, A);
                         cout << endl;
                         break;
                         
                    case Z3:
                         cout << "���������:" << endl;
                         cout << setw(2) << "�|" 
                              << setw(15) << "��� ���������|" 
                              << setw(19) << "�������� ���������|" 
                              << setw(18) << "���� ������������|" 
                              << setw(15) << "���� ���������|" 
                              << setw(11) << "�����|" 
                              << setw(16) << "������� �������|" 
                              << "��������" << endl;
                         table(n, A);
                         cout << endl;
                         break;
                         
                    case Z4:
                      cout << "������� ������ ��� ���:";
                      cin >> y; cout << endl;
                      cout << "���������, ������������� � " << y << " ����:" << endl;
                      cout << setw(15) << "��� ���������|" 
                           << setw(19) << "�������� ���������|" 
                           << setw(18) << "���� ������������|" 
                           << setw(15) << "���� ���������|" 
                           << setw(11) << "�����|" 
                           << setw(16) << "������� �������|" 
                           << "��������" << endl;
                      year_lec(y, n, A);
                      cout << endl;
                      break;
                 
                 case Z5:
                      cout << "������� ����� ������(1..5):";
                      cin >> a; cout << endl; 
                      switch(a)
                      {
                               case Apteka_1:
                                    s = Otdel::Apteka_1;
                                    break;
                               case Apteka_2:
                                    s = Otdel::Apteka_2;
                                    break;
                               case Apteka_3:
                                    s = Otdel::Apteka_3;
                                    break;
                               case Apteka_4:
                                    s = Otdel::Apteka_4;
                                    break;
                               case Apteka_5:
                                    s = Otdel::Apteka_5;
                                    break;
                      }
                      cout << "����� �� ������ ��� ������� ���������? 1 - ��, 2 - ���";
                      cin >> l; cout << endl;
                      if (l == 1) m == true;
                      else if (l == 2) m == false;
                      cout << "���������: " << nal_lec(m, s, n, A) << endl << endl;
                      break;
                     
                 case Z6:
                      cout << "������� ���� ���������� �����:";
                      cin.ignore();
                      cin.getline(str, 50); cout << endl;
                      save(&n, A, file, str);
                      cout << endl;
                      break;
                      
                 case Z7:
                      cout << "������� ���� � �����:";
                      cin.ignore();
                      cin.getline(str, 50); cout << endl;
                      load(&n, A, file, str);
                      cout << endl;
                      break;
                      
                 case Z8:
                      return 0;
                      break;
                      
                 default:
                         cout << "������, ������ ������ ���� �� ����������" << endl << endl;
                         break;                         
        } 
    }while(c != 8);
}

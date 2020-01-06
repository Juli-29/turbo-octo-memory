//Напишите эффективную программу, находящую все числа длины n являющиеся палиндромами.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = n % 2;
    int k = n / 2 + n % 2;
    int s = pow(10, k - 1);
    int e = pow(10, k);
    int a;
    int b;
    string d;
    if (n != 1) {
        for (int i = s; i < e; i++)
        {
            a = i / pow(10, c);
            b = 0;
            d = "";
            while (a % 10 == 0 && a > 0)
            {
                d += "0";
                a /= 10;
            }
             while (a > 0)
            {
                b = b * 10 + a % 10;
                a /= 10;
            }
            cout << i << d << b << "\n";
        }
    } 
    else 
    {
        for (int i = 0; i < 10; i++) 
        {
            cout << i << "\n";
        }
    }
    return 0;
}

//Не надо перебирать все числаю Достаточно перебрать числа с размером (по разрядам) в два раза меньшим.


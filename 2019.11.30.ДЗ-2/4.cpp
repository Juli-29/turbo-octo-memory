/*Напишите эффективную процедуру, выписывающую из массива длины n все элементы, у которых 
произведение ненулевых цифр больше k.*/

#include <iostream>
#include <vector>

using namespace std;

bool check(int n, int k)
{
    int m = n;
    int r = 1;
    int d;
    while (m > 0)
    {
        d = m % 10;
        if (d > 0)
        {
            r *= d;
            if (r > k)
            {
                cout << n << " ";
                return 1;
            }
            
        }
        m /= 10;
    }
    return 0;
}

int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        check(a[i], k);
    }
    return 0;
}
// если цифры числа уже дают в произведении число, большее k, то дальше программа не проверяет 
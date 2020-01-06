//Напишите программу, находящую все простые числа Ченя не превосходящие n. Программа должна работать не более чем за O(n*log log n) шагов.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> a(1);
    a[0] = 2;
    int i = 0;
    int n;
    cin >> n;
    if (n >= 2) 
    {
        cout << 2 << " ";
    }
    for (int j = 3; j <= n + 2; j += 2)
    {
        int j1 = j;
        bool f = 0;
        int g = 3;
        for (int k = 0; k < a.size() && g > 0; k++)
        {
            if (j1 % a[k] == 0)
            {
                if (!f)
                {
                    f = 1;
                }
                g--;
                j1 /= a[k];
                k--;
            }
        }
        if (g > 0)
        {
            if (a[a.size() - 1] == j - 2)
            {
                cout << a[a.size() - 1] << " ";
            }
            if (!f)
            {
                a.resize(a.size() + 1);
                a[a.size() - 1] = j;
            }
        }
    }
    return 0;
}
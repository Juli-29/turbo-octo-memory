//Напишите программу находящую первые n составных чисел. Программа должна работать не более чем за O(n*log log n) шагов.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> a(0);
    int i = 0;
    int n;
    cin >> n;
    for (int j = 2; i < n; j++)
    {
        bool f = 0;
        for (int k = 0; k < a.size() && !f; k++)
        {
            if (j % a[k] == 0)
            {
                f = 1;
            }
        }
        if (f)
        {
            cout << j << "\n";
            i++;
        }
        else
        {
            a.resize(a.size() + 1);
            a[a.size() - 1] = j;
        }
    }
    return 0;
}

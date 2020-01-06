//Напишите программу, находящую k-ую порядковую статистику. Программа должна работать за время O(n) в среднем.

#include <iostream>
#include <vector>

using namespace std;

vector<int> a(0);

static int Statistics(int l, int r, int k)
{
	int o = (l + r) / 2;
	int e = a[o];
	int i = l;
	int j = r;
	while (i < j)
	{
		while (a[i] < e)
		{
			i++;
		}
		while (e < a[j])
		{
			j--;
		}
		if (i < j)
		{
			int s = a[i];
			a[i] = a[j];
			a[j] = s;
			if (i == o)
			{
				o = j;
				j++;
			}
			else
			{
				if (j == o)
				{
					o = i;
					i--;
				}
			}
			i++;
			j--;
		}
	}
	if (k == o)
	{
		return e;
	}
	else
	{
		if (k < o)
		{
			return Statistics(l, o - 1, k);
		}
		else
		{
			return Statistics(o + 1, r, k);
		}
	}
}

int main()
{
	int n;
	int k;
	cin >> n >> k;
	a.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << Statistics(0, a.size() - 1, k - 1);
	return 0;
}
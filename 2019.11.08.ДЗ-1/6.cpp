#include <iostream>
#include <vector>

using namespace std;

vector<vector<int» put_reserve_snake(int m, int n) 
{
	vector<vector<int» s(n);
	for (int i = 0; i < n; i++) 
	{
		s[i].resize(m);
	}
	bool lb = 1;
	bool rb = 0;
	int n1 = 0;
	int m1 = 0;
	int n2 = n - 1;
	int m2 = m - 1;
	int i = 0;
	while (i < n * m) 
	{
		if (lb) 
		{
			if (rb) 
			{
				for (int j = m1; j <= m2; j++)
				{
					i++;
					s[n1][j] = i;
				}
				n1++;
				lb = 0;
			}
			else 
			{
				for (int j = n2; j >= n1; j--)
				{
					i++;
					s[j][m1] = i;
				}
				m1++;
				rb = 1;
			}
		}
		else 
		{
			if (rb) 
			{
				for (int j = n1; j <= n2; j++)
				{
					i++;
					s[j][m2] = i;
				}
				m2--;
				rb = 0;
			}
			else 
			{
				for (int j = m2; j >= m1; j--)
				{
					i++;
					s[n2][j] = i;
				}
				n2--;
				lb = 1;
			}
		}
	}
	return s;
}

int main () 
{
	int n, m;
	cin » n » m;
	vector<vector<int» Snake = put_reserve_snake(n, m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout « Snake[j][i] « "\t";
		}
		cout « "\n";
	}
	return 0;
}
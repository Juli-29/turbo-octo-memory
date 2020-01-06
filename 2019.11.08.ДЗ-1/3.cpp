#include <iostream>
#include <vector>

using namespace std;

vector<vector<int» build_ziggurat(int n) 
{
	vector<vector<int» z(n);
	for (int i = 0; i < n; i++) 
	{
		z[i].resize(n);
	}
	for (int i = 1; i <= n / 2 + n % 2; i++)
	{
		for (int j = i - 1; j <= n - i; j++)
		{
			z[i - 1][j] = i;
			z[j][i - 1] = i;
			z[n - i][j] = i;
			z[j][n - i] = i;
		}
	}
	return z;
}

int main () 
{
	int n;
	cin » n;
	vector<vector<int» Ziggurat = build_ziggurat(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout « Ziggurat[i][j] « " ";
		}
	cout « "\n";
	}
	return 0;
}
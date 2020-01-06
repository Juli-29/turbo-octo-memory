#include <iostream>
#include <vector>

using namespace std;

vector<vector<int» dig_trench(int n) 
{
	vector<vector<int» d(n);
	for (int i = 0; i < n; i++) 
	{
		d[i].resize(n);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			d[i + j][j] = i;
			d[j][i + j] = i;
		}
	}
	return d;
}

int main () 
{
	int n;
	cin » n;
	vector<vector<int» Trench = dig_trench(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout « Trench[i][j] « " ";
		}
		cout « "\n";
	}
	return 0;
}
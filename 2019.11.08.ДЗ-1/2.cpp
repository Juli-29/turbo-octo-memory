#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool check_simple(int n) 
	{
	bool s = 1;
	if (n >= 2) 
	{
		for (int i = 2; i <= sqrt(n) && s; i++) 
		{
			if (n % i == 0) 
			{
				s = 0;
			}
		}
	}
	else 
	{
		s = 0;
	}
return s;
}

vector<int> delete_duplicates(vector<int> a, int n) 
{
	vector <int> b(0);
	for (int i = 0; i < n; i++) 
	{
		bool f = 1;
		for (int j = 0; j < b.size(); j++) 
		{
			if (a[i] == b[j]) 
			{
				f = 0;
			}
		}
		if (f || !check_simple(a[i])) 
		{
			b.resize(b.size() + 1);
			b[b.size() - 1] = a[i];
		}
	}
	return b;
}

int main() 
{
	int n;
	cin » n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) 
	{
		cin » a[i];
	}
	vector<int> b = delete_duplicates(a, n);
	for (int i = 0; i < b.size(); i++) 
	{
		cout « b[i] « " ";
	}
	return 0;
} 
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>>stuff;
	for (int i = 0; i < 5; i++)
	{
		vector<int>temp;
		for (int j = 0; j < 5; j++)
		{	
			temp.push_back(i);
		}
		stuff.push_back(temp);
	}
	for (int i = 0; i < stuff.size(); i++)
	{
		for (int j = 0; j < stuff[i].size(); j++)
		{
			cout << stuff[i][j];
		}
		cout << endl;
	}
}
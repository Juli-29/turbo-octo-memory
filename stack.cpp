#include <iostream>
#include <vector>

using namespace std;

class StackNumber
{
public:
	StackNumber* prev;
	int num;
};

class Stack
{
private:
	StackNumber* lastNumber;
public:
	void AddElement(int num)
	{
		StackNumber* stackNumber = new StackNumber();
		*stackNumber = { lastNumber, num };
		lastNumber = stackNumber;
	}
	int GetElement()
	{
		int num = lastNumber->num;
		lastNumber = lastNumber->prev;
		return num;
	}
};

int main()
{
	return 0;
}
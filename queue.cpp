#include <iostream>
#include <vector>

using namespace std;

class QueueNumber
{
public:
	QueueNumber* next;
	int num;
};

class Queue
{
private:
	QueueNumber* firstNumber;
	QueueNumber* lastNumber;
public:
	void AddElement(int num)
	{
		QueueNumber* queueNumber = new QueueNumber();
		*queueNumber = { NULL, num };
		if (firstNumber == NULL)
		{
			firstNumber = queueNumber;
		}
		else
		{
			lastNumber->next = queueNumber;
		}
		lastNumber = queueNumber;
	}
	int GetElement()
	{
		int num = firstNumber->num;
		if (firstNumber->next == NULL)
		{
			firstNumber = NULL;
			lastNumber = NULL;
		}
		else
		{
			firstNumber = firstNumber->next;
		}
		return num;
	}
};

int main()
{
	return 0;
}
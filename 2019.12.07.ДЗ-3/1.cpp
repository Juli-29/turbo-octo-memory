//Напишите функцию находящую корень монотонной вещественной функции f бинарным поиском(бисекцией).
//Можно считать что корень обязательно существует. Корнем будем считать значение x, такое что |f(x)|<10^(-6).  В комментариях напишите, почему решение- эффективное

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

float function(float x)
{
    return 5646 * x + 913;
}

int main()
{
		float c1 = -10000;
		float c2 = 10000;
		while (abs(function((c1 + c2) / 2)) >= pow(10, -6))
		{
				if (function((c1 + c2) / 2) > 0)
				{
					c2 = (c1 + c2) / 2;
				}
				else
				{
					c1 = (c1 + c2) / 2;
				}
		}
		cout << (c1 + c2) / 2;
	return 0;
}

//решение эффективное, потому что используется бинарный поиск.
//Реализуйте структуру LongInt, позволяющую использовать длинные натуральные числа, а также пример использования. 

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class LongInt
{
    private:
    bool sign = 1;
    vector<unsigned> numbers(0);
    public:
    LongInt()
    {
        numbers.resize(1);
        numbers[0] = 0;
    }
    ~LongInt()
    {
        delete(sign);
        delete(numbers);
    }
    void Null()
    {
        numbers.resize(1);
        numbers[0] = 0;
    }
    bool Compare(LongInt number)
    {
        if (number->numbers.size() == numbers.size())
        {
            if (number->numbers[number.numbers.size() - 1] > numbers[numbers.size() - 1])
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            if (number->numbers.size() > numbers.size())
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    public Sum(LongInt number)
    {
        if (sign == number->sign)
        {
            bool f = 0;
            int m = min(numbers.size(), number->numbers.size());
            for (int i = 0; i < m; i++)
            {
                if (f)
                {
                    numbers[i]++;
                    f = 0;
                }
                numbers[i] += number->numbers[i];
                if (numbers[i] >= pow(10, 9))
                {
                    f = 1;
                    numbers[i] %= pow(10, 9);
                }
            }
        }
        else
        {
            
        }
    }
    void Copy(int number)
    {
        numbers.resize(1);
        numbers[0] = number;
    }
    void Copy(LongInt number)
    {
        Null();
        
    }
    void Read()
    {
        for (int i = 0; i < numbers->size(); i++)
        {
            cout << numbers[numbers->size() - i - 1];
        }
        cout << "\n";
    }
}

int main()
{
	LongInt number1;
	LongInt number2;
	number1.Copy(123456789);
	number2.Copy(987654321);
	number1.Read();
	number1.Sum(number2);
	number1.Read();
	return 0;
}


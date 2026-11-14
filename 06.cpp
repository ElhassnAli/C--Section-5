#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{

    int Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;
    } while (Number < 1);

    return Number;
}

int SumOfNumbers(int Number)
{

    int Remainder = 0;
    int Sum = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Sum += Remainder;
    }
    return Sum;
}

void PrintResult(int Number)
{

    cout << "Sum Of Digits = " << Number << endl;
}

int main()
{
    PrintResult(SumOfNumbers(ReadPositiveNumber("Enter a Number")));
    return 0;
}
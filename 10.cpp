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

int ReversedNumber(int Number)
{

    int Remainder = 0;
    int ReversedNumber = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        ReversedNumber = (ReversedNumber * 10) + Remainder;
    }
    return ReversedNumber;
}

void PrintReversedNumber(int Number)
{
    int Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}
int main()
{
    PrintReversedNumber(ReversedNumber(ReadPositiveNumber("Enter a Positive Number")));
    return 0;
}
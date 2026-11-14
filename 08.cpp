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
int CountDigitFrequency(int DigitToCheck, int Number)
{

    int Remainder = 0;
    int Count = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        if (Remainder == DigitToCheck)
        {
            Count += 1;
        }
    }
    return Count;
}

void PrintResult(int Number, short Digit)
{

    cout << "Digit " << Digit << " Frequency  = " << Number << " Time(s)" << endl;
}

int main()
{
    int Number = ReadPositiveNumber("Enter Main Number");
    short Digit = ReadPositiveNumber("Enter One Digit To Check");
    int CountDigit = CountDigitFrequency(Digit, Number);
    PrintResult(CountDigit, Digit);
    return 0;
}
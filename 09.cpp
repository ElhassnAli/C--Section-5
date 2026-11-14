#include <iostream>
using namespace std;

long long ReadPositiveNumber(string message)
{
    long long Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;
    } while (Number < 1);

    return Number;
}
int CountDigitFrequency(int DigitToCheck, long long Number)
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

    cout << "Digit " << Digit << " Frequency Count  = " << Number << " Time(s)" << endl;
}

int main()
{
    long long MainNumber = ReadPositiveNumber("Enter Main Number");
    for (int i = 0; i < 10; i++)
    {
        int count = CountDigitFrequency(i, MainNumber);
        if (count > 0)
        {
            PrintResult(count, i);
        }
    }

    return 0;
}

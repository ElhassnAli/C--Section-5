#include <iostream>
#include <string>
using namespace std;

int readNumber(string message)
{

    int num = 0;
    cout << message << endl;
    cin >> num;
    return num;
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
    PrintReversedNumber(readNumber("Enter a Number"));
    return 0;
}
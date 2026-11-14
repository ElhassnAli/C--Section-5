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

void PrintLetterFromAAAToZZZ()
{
    for (int j = 65; j <= 90; j++)
    {
        for (int i = 65; i <= 90; i++)
        {
            for (int k = 65; k <= 90; k++)
            {
                cout << char(j) << char(i) << char(k) << endl;
            }
        }
    }
}
int main()
{
    PrintLetterFromAAAToZZZ();

    return 0;
}
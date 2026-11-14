#include <iostream>
using namespace std;

int readNumber(string massage)
{

    int num = 0;
    cout << massage << endl;
    cin >> num;
    return num;
}
bool checkNumber(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {

        if (num % i == 0)
        {
            sum += i;
        }
    }

    return num == sum;
}

void Print(int num)
{
    for (int i = 1; i < num; i++)
    {
        if (checkNumber(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    Print(readNumber("Enter a Number"));
    return 0;
}
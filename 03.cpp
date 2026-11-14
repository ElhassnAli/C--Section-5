#include <iostream>
using namespace std;

enum enCheckPerfectNumber
{
    perfect = 1,
    notPerfect = 2
};
int readNumber(string massage)
{

    int num = 0;
    cout << massage << endl;
    cin >> num;
    return num;
}
enCheckPerfectNumber checkNumber(int num)
{
    int count = 0;
    for (int i = 1; i < num; i++)
    {

        if (num % i == 0)
        {
            count += i;
        }
    }
    if (count == num)
    {
        return enCheckPerfectNumber::perfect;
    }
    else
    {
        return enCheckPerfectNumber::notPerfect;
    }
}

void Print(enCheckPerfectNumber isPrime)
{

    if (enCheckPerfectNumber::perfect == isPrime)
    {
        cout << "perfect";
    }
    else
    {
        cout << "not perfect";
    }
}

int main()
{
    Print(checkNumber(readNumber("Enter a Number")));
    return 0;
}
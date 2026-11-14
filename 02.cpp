#include <iostream>
#include <cmath>
using namespace std;

void ReadNumber(string massage)
{

    cout << massage << endl;
}
enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 2
};

enPrimeNotPrime checkNumber(int num)
{

    int sque = sqrt(num);
    for (int i = 2; i <= sque; i++)
    {
        if (num % i == 0)
        {
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prime;
}

void printPrimeNumbers()
{
    int number = 0;
    ReadNumber("Enter a number");
    cin >> number;
    cout << endl;
    for (int i = 2; i <= number; i++)
    {
        if (checkNumber(i)==enPrimeNotPrime::Prime)
        {

            cout << i << endl;
        }
    }
}
// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
int main()
{
    printPrimeNumbers();
    return 0;
}
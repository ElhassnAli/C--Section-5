#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

bool checkNumber(int num)
{
    if (num <= 1)
        return false;
    int squareNum = sqrt(num);
    for (int i = 2; i <= squareNum; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

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
int RandomNumber(int From, int To)
{

    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}
void fillArray(int array[], int num)
{

    for (int i = 1; i <= num; i++)
    {
        array[i - 1] = RandomNumber(1, 100);
    }
}
void PrintArray(int array[], int num)
{

    for (int i = 1; i <= num; i++)
    {
        cout << "  " << array[i - 1];
    }
    cout << endl;
}
void fillArrayWithPrimeNumbers(int array[], int num, int PrimeArray[], int &PrimeArrayLength)
{

    for (int i = 0; i < num; i++)
    {
        if (checkNumber(array[i]))
        {
            PrimeArray[PrimeArrayLength] = array[i];
            PrimeArrayLength++;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int ArrayLength = ReadPositiveNumber("Enter Length Of Array U Want :");
    int Array[ArrayLength], PrimeArrayLength = 0;
    int PrimeArray[ArrayLength];

    fillArray(Array, ArrayLength);
    cout << "Array Number 1 Is : ";
    PrintArray(Array, ArrayLength);
    fillArrayWithPrimeNumbers(Array, ArrayLength, PrimeArray, PrimeArrayLength);
    cout << "Prime Array Is  : ";
    PrintArray(PrimeArray, PrimeArrayLength);
    return 0;
}
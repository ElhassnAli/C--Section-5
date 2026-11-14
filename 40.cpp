#include <iostream>
#include <cstdlib>
#include <cmath>
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
void AddArrayElement(int Number, int arr[100], int &oddArrayLength)
{
    oddArrayLength++;
    arr[oddArrayLength - 1] = Number;
}
int RandomNumber(int From, int To)
{

    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}

void fillArray(int array[100], int num)
{

    for (int i = 1; i <= num; i++)
    {
        array[i - 1] = RandomNumber(1, 9) * 10;
    }
}
void PrintArray(int array[100], int num)
{

    for (int i = 1; i <= num; i++)
    {
        cout << array[i - 1] << " ";
    }
    cout << "\n";
}

void extractPrimeNumbers(int mainArray[100], int oddArray[100], int mainArrayLength, int &oddArrayLength)
{
    
    for (int i = 0; i < mainArrayLength; i++)
    {

        if (mainArray[i] != oddArray[i])
        {
            AddArrayElement(mainArray[i], oddArray, oddArrayLength);
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int array[100];
    int oddArray[100];
    int oddArrayLength = 0;
    int arrayLength = ReadPositiveNumber("Enter Length Of Array U Want ");
    fillArray(array, arrayLength);
    extractPrimeNumbers(array, oddArray, arrayLength, oddArrayLength);
    cout << "Main Array Elemants : " << endl;
    PrintArray(array, arrayLength);
    cout << "The Array 2 Prime numbers : " << endl;
    PrintArray(oddArray, oddArrayLength);

    return 0;
}

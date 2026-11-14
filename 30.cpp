#include <iostream>
#include <ctime>
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
void SumOfTwoArrays(int ArrayOne[], int ArrayTwo[], int ArrayThree[], int LengthOfArray)
{

    for (int i = 0; i < LengthOfArray; i++)
    {
        ArrayThree[i] = ArrayOne[i] + ArrayTwo[i];
    }
}
int main()
{
    srand((unsigned)time(NULL));

    int ArrayLength = ReadPositiveNumber("Enter Length Of Array U Want :");
    int ArrayOne[ArrayLength];
    int ArrayTwo[ArrayLength];
    int ArrayThree[ArrayLength];
    
    fillArray(ArrayOne, ArrayLength);
    cout << "Array Number 1 Is : " << endl;
    PrintArray(ArrayOne, ArrayLength);
    
    fillArray(ArrayTwo, ArrayLength);
    cout << "Array Number 2 Is : " << endl;
    PrintArray(ArrayTwo, ArrayLength);
    
    cout << "Sum Of ArrayOne And ArrayTwo : " << endl;
    SumOfTwoArrays(ArrayOne, ArrayTwo, ArrayThree, ArrayLength);
    PrintArray(ArrayThree, ArrayLength);
    return 0;
}
#include <iostream>
#include <ctime>
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
    cout << "Array Elements : ";
    for (int i = 1; i <= num; i++)
    {
        cout << "  " << array[i - 1];
    }
    cout << endl;
}
int GetMaxNumberFromArray(int array[], int num)
{

    int Num = 0;
    for (int i = 0; i < num; i++)
    {
        if (array[i] > Num)
        {
            Num = array[i];
        }
    }
    return Num;
}
int main()
{
    srand((unsigned)time(NULL));
    int ArrayLength = ReadPositiveNumber("Enter Length Of Array U Want :");
    int Array[ArrayLength];
    fillArray(Array, ArrayLength);
    PrintArray(Array, ArrayLength);
    cout << "Max Number Is : " << GetMaxNumberFromArray(Array, ArrayLength);
    return 0;
}
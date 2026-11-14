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
    
    for (int i = 1; i <= num; i++)
    {
        cout << "  " << array[i - 1];
    }
    cout << endl;
}
void copiedArray(int array[], int num, int newArray[])
{

    for (int i = 0; i < num; i++)
    {

        newArray[i] = array[i];
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int ArrayLength = ReadPositiveNumber("Enter Length Of Array U Want :");
    int Array[ArrayLength];
    int copied[ArrayLength];
    fillArray(Array, ArrayLength);
    cout << "Array Number 1 Is : ";
    PrintArray(Array, ArrayLength);
    copiedArray(Array, ArrayLength, copied);
    cout << "Array Number 2 Is Copied : ";
    PrintArray(copied, ArrayLength);
    return 0;
}
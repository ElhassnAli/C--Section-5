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
        array[i - 1] = i;
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
void shuffleArray(int array[], int num)
{
    for (int i = 0; i < num; i++)
    {
        swap(array[i], array[RandomNumber(0, i )]);
    }
}
int main()
{
    srand((unsigned)time(NULL));

    int ArrayLength = ReadPositiveNumber("Enter Length Of Array U Want :");
    int ArrayOne[ArrayLength];
    
    fillArray(ArrayOne, ArrayLength);
    cout << "Array Number 1 Is : " << endl;
    PrintArray(ArrayOne, ArrayLength);
    shuffleArray(ArrayOne, ArrayLength);
    
    cout << "Array Number 2 After Shuffle : " << endl;
    PrintArray(ArrayOne, ArrayLength);
    return 0;
}
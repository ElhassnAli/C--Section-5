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
void fillArray(int array[100], int num)
{

    for (int i = 0; i < num; i++)
    {
        array[i] = RandomNumber(1, 100);
    }
}
void PrintArray(int array[100], int num)
{

    for (int i = 1; i <= num; i++)
    {
        cout << "  " << array[i - 1];
    }
    cout << endl;
}
void reverseArray(int array[100], int num)
{
    for (int i = 0; i < num/2; i++)
    {
        int temp = array[i];
        array[i] = array[num-1-i] ;
        array[num - 1 - i] = temp;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int array[100];
    int ArrayLength = ReadPositiveNumber("Enter Length Of Array U Want :");
    
    fillArray(array, ArrayLength);
    cout << "Array Number 1 Is : " << endl;
    PrintArray(array, ArrayLength);
    reverseArray(array, ArrayLength);
    
    cout << "Array Number 2 After  Revers : " << endl;
    PrintArray(array, ArrayLength);
    return 0;
}



#include <iostream>
using namespace std;
int ReadPositiveNumber(string message)
{
    int Number = 0;
    cout << message << endl;
    cin >> Number;

    return Number;
}

void fillArray(int array[100], int &num)
{
    do
    {
        int number = ReadPositiveNumber("Please Enter a number");
        array[num] = number;
        num++;
    } while (ReadPositiveNumber("You Want To Add anther Number ? No[0] , Yes[1] ") == 1);
}
void PrintArray(int array[100], int &num)
{
    cout << "The Array Length is : " << num << endl;
    cout << "The Array Is : " << endl;
    for (int i = 1; i <= num; i++)
    {
        cout << array[i - 1] << " ";
    }
    cout << "\n";
}

int main()
{

    int array[100];
    int arrayLength = 0;
    fillArray(array, arrayLength);
    PrintArray(array, arrayLength);

    return 0;
}

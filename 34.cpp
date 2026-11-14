#include <iostream>
#include <cstdlib>
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

    for (int i = 1; i <= num; i++)
    {
        array[i - 1] = RandomNumber(1, 100);
    }
}
void PrintArray(int array[100], int num)
{
    cout << "The Array Is : " << endl;
    for (int i = 1; i <= num; i++)
    {
        cout << array[i - 1] << " ";
    }
    cout << "\n";
}

void NumberIndex(int array[100], int num, int arrayLength)
{
    bool found = false;
    int index = 0;
    cout << "The Number U Looking For Is : " << num << "\n";
    for (int i = 0; i < arrayLength; i++)
    {
        if (array[i] == num)
        {
            found = true;
            index = i;
            break;
        }
    }
    if (found)
    {
        cout << "The Number Found A Postion  : " << index << "\n";
        cout << "The Number Found ,its Order Is  : " << index + 1 << "\n";
    }
    else
    {
        cout << "The Number Not Found ): \n";
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int array[100];
    int arrayLength = ReadPositiveNumber("Enter Length Of Array U Want ");
    fillArray(array, arrayLength);
    PrintArray(array, arrayLength);
    int searchNum = ReadPositiveNumber("Enter The Number U Want To Search For");
    NumberIndex(array, searchNum, arrayLength);

    return 0;
}

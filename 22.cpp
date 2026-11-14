#include <iostream>
using namespace std;

int ReadNumber(string massage)
{
    int numOfArray;
    cout << massage << endl;
    cin >> numOfArray;
    return numOfArray;
}

void fillArray(int array[], int num)
{
    cout << "Enter Array Of Element" << endl;
    for (int i = 1; i <= num; i++)
    {
        cout << "Element [" << i << "] : ";
        cin >> array[i - 1];
    }
}

void result(int array[], int checknum, int countOfArray)
{
    int count = 0;
    for (int i = 0; i < countOfArray; i++)
    {
        if (array[i] == checknum)
        {
            count++;
        }
    }
    cout << checknum << " Is Repeated  " << count << " Times";
}
main()
{
    int num = ReadNumber(" Enter Number Of Array ");
    int Array[num];
    fillArray(Array, num);
    int checkNum = ReadNumber("Enter The Number U Want To Check !");
    result(Array, checkNum, num);
    return 0;
}
#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType
{
    small = 1,
    capital = 2,
    spChar = 3,
    number = 4
};

int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
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
char getRandomChar(enCharType chartype)
{
    switch (chartype)
    {
    case ::small:
    {
        return char(RandomNumber(97, 122));
        break;
    }
    case ::capital:
    {
        return char(RandomNumber(65, 90));
        break;
    }
    case ::spChar:
    {
        return char(RandomNumber(33, 47));
        break;
    }
    case ::number:
    {
        return char(RandomNumber(48, 57));
        break;
    }
    }
    return '\0';
}

string word(enCharType charType, short lengthOfWord)
{
    string key = "";
    for (int i = 1; i <= lengthOfWord; i++)
    {
        key += getRandomChar(charType);
    }
    return key;
}

string generateKey()
{
    string key;

    key = word(enCharType::capital, 4) + "-";
    key = key + word(enCharType::capital, 4) + "-";
    key = key + word(enCharType::capital, 4) + "-";
    key = key + word(enCharType::capital, 4);

    return key;
}


void fillArray(string array[100], int num)
{

    for (int i = 1; i <= num; i++)
    {
        array[i - 1] = generateKey ();
    }
}
void PrintArray(string array[100], int num)
{
    cout << "The Array Is : " << endl;
    for (int i = 1; i <= num; i++)
    {
        cout <<"Array [ "<<i<<" ] : " << array[i - 1]<<endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    string array[100];
    int numOfKeys = ReadPositiveNumber("Enter Number Of Keys U Want ");
    fillArray(array, numOfKeys);
    PrintArray(array, numOfKeys);
    return 0;
}

#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{

    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}
enum enCharType
{
    small = 1,
    capital = 2,
    spChar = 3,
    number = 4
};

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

int main()
{
    srand((unsigned)time(NULL));
    cout << getRandomChar(enCharType::small) << endl;
    cout << getRandomChar(enCharType::capital) << endl;
    cout << getRandomChar(enCharType::spChar) << endl;
    cout << getRandomChar(enCharType::number) << endl;
    return 0;
}
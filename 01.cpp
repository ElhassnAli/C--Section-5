#include <iostream>
using namespace std;

void header()
{
    cout << "\n\n\t\t\t\nmultiplication Table From 1 To 10\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n__________________________________________________________________________________\n";
}

void multiplication_1_to_10()
{
    header();
    for (int i = 1; i <= 10; i++)
    {
        if (i >= 10)
        {
            cout << i << "  " << "|";
        }
        else
        {
            cout << i << "   " << "|";
        }

        for (int j = 1; j <= 10; j++)
        {
            if (i * j >= 10)
            {
                cout << "\t" << i * j;
            }
            else
            {
                cout << "\t" << i * j;
            }
        }
        cout << endl;
    }
}
int main()
{

    multiplication_1_to_10();
    return 0;
}
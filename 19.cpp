#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{

    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}
int main()
{

    srand((unsigned)time(NULL));
    cout << RandomNumber(10, 20) << endl;
    cout << RandomNumber(10, 20) << endl;
    cout << RandomNumber(10, 20) << endl;
    return 0;
}
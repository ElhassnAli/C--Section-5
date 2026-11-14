#include <iostream>

using namespace std;

string ReadCapitalLetterPass(string message)
{
    string password = "";
    do
    {
        cout << message << endl;
        cin >> password;
    } while (password.length() < 3 || password.length() > 3);
    return password;
}
void PrintLetterFromAAAToZZZ(string pass)
{

    string word = "";
    int count = 0;
    for (int j = 65; j <= 90; j++)
    {
        for (int i = 65; i <= 90; i++)
        {
            for (int k = 65; k <= 90; k++)
            {
                count++;
                word = word + char(j);
                word = word + char(i);
                word = word + char(k);
                if (word != pass)
                {
                    cout << "Trail [" << count << "] : " << word << endl;
                }
                else
                {
                    cout << "Trail [" << count << "] : " << word << endl;
                    cout << "Password is " << pass << endl;
                    cout << "Found After " << count << " Trail(s) \n";
                    return;
                }
                word = "";
            }
        }
    }
}
int main()
{
    string pass = ReadCapitalLetterPass("Enter a pass with capital letter");
    PrintLetterFromAAAToZZZ(pass);

    return 0;
}
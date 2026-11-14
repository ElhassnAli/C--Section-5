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

bool FoundNumber(int array[100], int num, int arrayLength)
{
  for (int i = 0; i < arrayLength; i++)
  {
    if (array[i] == num)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  srand((unsigned)time(NULL));
  int array[100];
  int arrayLength = ReadPositiveNumber("Enter Length Of Array U Want ");
  fillArray(array, arrayLength);
  PrintArray(array, arrayLength);
  int searchNum = ReadPositiveNumber("Enter The Number U Want To Search For");
  cout << "The Number U Looking For Is : " << searchNum << "\n";
  if (FoundNumber(array, searchNum, arrayLength))
  {
    cout << "Yes ,The Number Found :)\n ";
  }
  else
  {
    cout << "No ,The Number Not Found ):\n";
  }

  return 0;
}

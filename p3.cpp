#include <iostream>

using namespace std;

enum kNumberType {
     Odd = 1,
     Even = 2
};

int ReadNumber()
{
    int Number;

    cout << "Please enter a number: ";
    cin >> Number;

    return Number;
}

kNumberType CheckNumberType (int Num)
{
    int Result = Num % 2;

    if (Result != 0)
      return kNumberType::Odd;

    else
      return kNumberType::Even;
}

void PrintNumberType(kNumberType NumberType)
{
  if (NumberType == kNumberType::Even)
    cout << "\nNumber is Even." << endl;

  else
    cout << "\nNumber is Odd." << endl;
}

int main()
{
  PrintNumberType(CheckNumberType(ReadNumber()));

  return 0;
}

#include <iostream>

using namespace std;

int ReadAge()
{
  int Age = 0;

  cout << "Enter your Age: ";
  cin >> Age;

  cout << endl;
  return Age;
}

bool ValidateAgeInRange(int Age, int From, int To)
{
  return (Age >= From && Age <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
  int Age = 0;
  Age = ReadAge();

  do {

  cout << "Invalid Age, Enter your Age (must be between 18 and 45): ";
  cin >> Age;
  cout << endl;

  } while (!(ValidateAgeInRange(Age, From, To)));

  return Age;
}

void PrintResult(int Age)
{
  cout << "Valid Age";
  cout << endl;
}

int main()
{
  PrintResult(ReadUntilAgeBetween(18, 45));
  
  return 0;
}

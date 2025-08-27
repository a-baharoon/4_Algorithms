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

void PrintResult(int Age)
{
  if (ValidateAgeInRange(Age, 18, 45))
    cout << "Valid Age\n";

  else
    cout << "Invlaid Age\n";
}
int main()
{
  PrintResult(ReadAge());
  
  return 0;
}

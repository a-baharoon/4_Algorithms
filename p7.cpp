#include <iostream>

using namespace std;

int ReadNumber ()
{
  int Number;
  
  cout << "Please enter a number: ";
  cin >> Number;
    
  return Number;
}

double CalculateHalfNumber(int Number)
{
  return (double) Number / 2;
}

void PrintResults(int Number)
{
  string Result = "Half of " + to_string(Number) + " is " + to_string(CalculateHalfNumber(Number));
  cout << '\n' << Result << endl;
}

int main()
{
  PrintResults(ReadNumber());
  
  return 0;
}



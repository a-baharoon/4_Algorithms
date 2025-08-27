#include <iostream>
#include <cmath>

using namespace std;

double ReadCircumference()
{
  double Circumference = 0;

  cout << "Enter the Circumference of the Circle: ";
  cin >> Circumference;

  cout << endl;

  return Circumference;
}

double CirculeAreaAlongCircumference(double C)
{
  const double PI = 3.14159;
  return pow(C, 2) / (4 * PI);
}

void PrintResults(double Area)
{
  cout << "The Circle Area along the circumference is: " << Area << endl;
}

int main()
{
  PrintResults(CirculeAreaAlongCircumference(ReadCircumference()));

  return 0;
}

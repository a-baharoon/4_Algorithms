#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(double &A, double &B, double &C)
{
  cout << "Enter Value A: ";
  cin >> A;

  cout << "\nEnter Value B: ";
  cin >> B;
  
  cout << "\nEnter Value C: ";
  cin >> C;

  cout << endl;
}

double circleAreaAroundArbitraryTraingle(double a, double b , double c)
{
  double PI = 3.14159;

  double p = (a + b + c) / 2;

  return PI * pow( (a * b * c) / (4 * sqrt(p * (p-a) * (p-b) * (p-c)) ), 2);
}

void PrintResults(double Area)
{
  cout << "The Area of a circle described around an arbitrary traingle is: " << Area << endl;
}

int main()
{
  double A = 0, B = 0, C = 0;

  ReadNumbers(A, B ,C);

  PrintResults(circleAreaAroundArbitraryTraingle(A, B ,C));
  
  return 0;
}

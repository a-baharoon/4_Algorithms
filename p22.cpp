#include <iostream>
#include <cmath>

using namespace std;

void ReadLegLengthAndBase(double &L, double &B)
{
  cout << "Enter the Leg Length of the Isosceles Traingle: ";
  cin >> L;
  
  cout << "Enter the Base Length of the Isosceles Traingle: ";
  cin >> B;

  cout << endl;  
}

double CirculeAreaInscribedInIsoscelesTraingle(double L, double B)
{
  const double PI = 3.14159;
  return PI * pow(B,2) / 4 * ((2 * L - B) / (2 * L + B));
}

void PrintResults(double Area)
{
  cout << "The Circle Area Inscribed in an Isosceles Traingle is: " << Area << endl;
}

int main()
{

  double L = 0, B = 0;

  ReadLegLengthAndBase(L,B);

  PrintResults(CirculeAreaInscribedInIsoscelesTraingle(L, B));

  return 0;
}

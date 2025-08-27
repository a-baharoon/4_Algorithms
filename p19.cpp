#include <iostream>
#include <cmath>

using namespace std;

void ReadDiameter(double &D)
{
	cout << "\nEnter Diametre D: ";
	cin >> D;
	cout << endl;
}

double CircleAreaWithDiameter(double D)
{
  const double PI = 3.14159;
  return PI * pow(D, 2) / 4;
}

void PrintResult(double Area)
{
	cout << "The Circle Area Through Diameter: " << Area << endl;
}

int main()
{
    double D = 0;

    ReadDiameter(D);

    PrintResult(CircleAreaWithDiameter(D));

    return 0;
}





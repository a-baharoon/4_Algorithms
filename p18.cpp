#include <iostream>
#include <cmath>

using namespace std;

void ReadRadius(double &R)
{
	cout << "Enter Circle Radius R: ";
	cin >> R;
	cout << endl;
}

double CircleArea(double R)
{
  const double PI = 3.14159;
  return R * R * PI;
}

void PrintResult(double Area)
{
	cout << "The Circle Area is: " << Area << endl;
}

int main()
{
    double R = 0;

    ReadRadius(R);

    PrintResult(CircleArea(R));
}





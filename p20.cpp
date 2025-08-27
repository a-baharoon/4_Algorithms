#include <iostream>
#include <cmath>

using namespace std;

void ReadSquareArea(double &A)
{
    cout << "Enter Square Area A: ";
	cin >> A;
	cout << endl;
}

double CircleAreaInscribedInSquare(double A)
{
  const double PI = 3.14159;
  return PI * pow(A/2, 2);
}

void PrintResult(double Area)
{
	cout << "The Circle Area Inscribed In a Square is: " << Area << endl;
}

int main()
{
    double A = 0;

    ReadSquareArea(A);

    PrintResult(CircleAreaInscribedInSquare(A));

    return 0;
}





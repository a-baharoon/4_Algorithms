#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(double &A, double &D)
{
	cout << "Enter Width or Height A: ";
	cin >> A;

	cout << "\nEnter Diagonal D: ";
	cin >> D;

	cout << endl;
}

double RectangleAreaFromDiagnoal(double A, double D)
{
  return A * sqrt(D * D - A * A);
}

void PrintResult(double Area)
{
	cout << "The rectangle area through diagonal and side is: " << Area << endl;
}

int main()
{
    double A = 0, B = 0;

    ReadNumbers(A, B);

    PrintResult(RectangleAreaFromDiagnoal(A,B));

    return 0;
}





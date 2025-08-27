#include <iostream>

using namespace std;

void ReadNumbers(double &A, double &B)
{
	cout << "Enter Width A: ";
	cin >> A;

	cout << "\nEnter Width B: ";
	cin >> B;

	cout << endl;
}

double CalculateRectangleArea(double A, double B)
{
	return A * B;
}

void PrintResult(double Area)
{
	cout << "The rectangle area is: " << Area << endl;
}

int main()
{
    double A = 0, B = 0;

    ReadNumbers(A, B);

    PrintResult(CalculateRectangleArea(A, B));

    return 0;
}





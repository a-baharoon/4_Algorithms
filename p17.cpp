#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(double &H, double &B)
{
	cout << "Enter Height (H): ";
	cin >> H;

	cout << "\nEnter Base (B): ";
	cin >> B;

	cout << endl;
}

double TraingleArea(double &H, double &B)
{
  return B / 2 * H ;
}

void PrintResult(double Area)
{
	cout << "The Traingle Area is: " << Area << endl;
}

int main()
{
    double H = 0, B = 0;

    ReadNumbers(H, B);

    PrintResult(TraingleArea(H, B));
}





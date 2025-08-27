#include <iostream>

using namespace std;

void ReadNumbers(int &Number1, int &Number2)
{
	  cout << "Please enter Number 1 : ";
	  cin >> Number1;

	  cout << "\nPlease enter Number 2 : ";
	  cin >> Number2;

	  cout << endl;
}

void Swap(int &A, int &B)
{
	int Temp = A;
	A = B;
	B = Temp;
}

void PrintNumbers(int Number1, int Number2)
{
	cout << "Number 1 = " << Number1 << endl;
	cout << "Number 2 = " << Number2 << endl;
	cout << endl;
}

int main()
{
	int Number1 = 0, Number2 = 0;

	ReadNumbers(Number1, Number2);

	PrintNumbers(Number1, Number2);

	Swap(Number1, Number2);

	PrintNumbers(Number1, Number2);

	return 0;
}

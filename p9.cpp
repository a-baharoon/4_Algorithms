#include <iostream>

using namespace std;

void ReadNumbers(int &Number1, int &Number2, int &Number3)
{
	cout << "Please enter Number 1 ";
	cin >> Number1;

	cout << "\nPlease Enter Number 2: ";
	cin >> Number2;

	cout << "\nPlease Enter Number 3: ";
	cin >> Number3;

	cout << endl;
}

int SumOfThree(int Number1, int Number2, int Number3)
{
	return (Number1 + Number2 + Number3);
}

void PrintResults(int Sum)
{
	cout << "The total sum of 3 numbers is: " << Sum << endl;
}

int main()
{
	int Number1 = 0, Number2 = 0, Number3 = 0;

	ReadNumbers(Number1, Number2, Number3);

	PrintResults(SumOfThree(Number1, Number2, Number3));

	return 0;
}


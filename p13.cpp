#include <iostream>

using namespace std;

void ReadNumbers(int &A, int &B, int &C)
{
	  cout << "Please enter Number A ? ";
	  cin >> A;

	  cout << "\nPlease enter Number B ? ";
	  cin >> B;

	  cout << "\nPlease enter Number C ? ";
	  cin >> C;
	  cout << endl;
}

int MaxOf3Numbers(int A, int B, int C)
{
	if (A > B) {

		if (A > C) {
			return A;
		}

		else {
			return C;
		}
	}

	else {

		if (B > C) {
			return B;
		}

		else {
			return C;
		}
	}
}

void PrintResults(int Max)
{
	cout << "The Max of 3 Numbers is: " << Max << endl;
}
 

int main()
{
	int A = 0, B = 0, C = 0;

	ReadNumbers(A, B, C);

	PrintResults(MaxOf3Numbers(A, B, C));

	return 0;
}

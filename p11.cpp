#include <iostream>

using namespace std;

enum kPassFail {
    Pass = 1,
	Fail = 2
};

void ReadMarks(int &Mark1, int &Mark2, int &Mark3)
{
	cout << "Please Enter Mark 1: ";
	cin >> Mark1;

	cout << "\nPlease Enter Mark 2: ";
	cin >> Mark2;

	cout << "\nPlease Enter Mark 3: ";
	cin >> Mark3;

	cout << endl;
}

int SumOfThree(int Mark1, int Mark2, int Mark3)
{
	return (Mark1 + Mark2 + Mark3);
}

double CalculateAverage(int Mark1, int Mark2, int Mark3)
{
	return (double)SumOfThree(Mark1, Mark2, Mark3) / 3;
}

kPassFail CheckAverage(double Average)
{
	if (Average >= 60)
		return kPassFail::Pass;

	else
		return kPassFail::Fail;
}

void PrintResults(double Average)
{
	cout << "The Average of 3 Marks is: " << Average << " Mark." << endl;

	if (CheckAverage(Average) == kPassFail::Pass)
		cout << "\nYou Passed.\n";

	else
		cout << "\nYou Failed.\n";
}

int main()
{
	int Mark1 = 0, Mark2 = 0, Mark3= 0;

	ReadMarks(Mark1, Mark2, Mark3);

	PrintResults(CalculateAverage(Mark1, Mark2, Mark3));

	return 0;
}


#include <iostream>

using namespace std;

enum kPassFail {
    Pass = 1,
	Fail = 2
};

int ReadMark()
{
	int Mark = 0;

	cout << "Please enter your mark: ";
	cin >> Mark;
	cout << endl;

	return Mark;
}

kPassFail CheckMark(int Mark)
{
	if (Mark >= 60)
		return kPassFail::Pass;

	else
		return kPassFail::Fail;
}

void PrintResults(int Mark)
{
	if (CheckMark(Mark) == kPassFail::Pass)
		cout << "You Passed." << endl;

	else
		cout << "You Failed." << endl;
}

int main()
{
	PrintResults(ReadMark());

	return 0;
}




#include <iostream>

using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;

    cout << Message;
    cin >> Number;

    return Number;
}

int SumNumbers ()
{
   int Sum = 0, Number = 0;

   do {

       Number = ReadNumber("Please enter a Number: ");

       if (Number == -99)
           break;

       Sum += Number;

   } while (Number != -99);

    return Sum;
}

void PrintResults(int Result)
{
    cout << "\nThe total sum is: " << Result << endl;
}

int main()
{
    PrintResults(SumNumbers());

    return 0;
}

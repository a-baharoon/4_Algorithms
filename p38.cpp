#include <iostream>
#include <cmath>

using namespace std;

enum kIsPrime {
   Prime = 1,
   NotPrime = 2
};

int ReadNumber(string Message)
{
    int Number = 0;

    cout << Message;
    cin >> Number;

    while(Number < 0) {
        cout << "Please enter a positive number: ";
        cin >> Number;
    }

    cout << endl;
    return Number;
}

kIsPrime IsPrime (int Number)
{
    int M = round(Number / 2);

    if (Number == 0 || Number == 1)
        return kIsPrime::NotPrime;

    for (int i = 2; i <= M; i++)
        if(Number % i == 0)
            return kIsPrime::NotPrime;

    return kIsPrime::Prime;
}

void PrintNumberType(int Number)
{
    switch (IsPrime(Number)) {

        case kIsPrime::Prime:
           cout << "The number is Prime." << endl;
           break;

        default:
            cout << "The number is not Prime." << endl;
    }
}

int main()
{
    int Number = 0;

    Number = ReadNumber("Please enter a Number: ");

    PrintNumberType(Number);

    return 0;
}

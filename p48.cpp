#include <iostream>

using namespace std;

double ReadPositiveNumber(string Message)
{
    int Number = 0;

    do {
       cout << Message << ' ';
       cin >> Number;
    } while(Number <= 0);

    return Number;
}

double LoanPayment(double LoanAmount, double LoanDuration)
{
    return LoanAmount / LoanDuration;
}

int main()
{
    double LoanAmount = 0;
    double LoanDuration = 0;
    double MonthlyPayment = 0;

    LoanAmount   = ReadPositiveNumber("Enter loan amount:");
    LoanDuration = ReadPositiveNumber("Enter loan duration in months:");

    MonthlyPayment = LoanPayment(LoanAmount, LoanDuration);

    cout << '\n';
    cout << MonthlyPayment << " Monthly Payments" << endl;

   return 0;
}

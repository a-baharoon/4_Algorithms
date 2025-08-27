#include <iostream>

using namespace std;

double ReadPositiveNumber(string Message)
{
    int Number = 0;

    do {
       cout << Message << ' ';
       cin >> Number;
    } while(Number < 0);

    return Number;
}

double TotalMonths(double LoanAmount, double MonthlyPayment)
{
    return LoanAmount / MonthlyPayment;
}

int main() {

   double LoanAmount = 0;
   double MonthlyPayment = 0;
   double Months = 0;

   LoanAmount = ReadPositiveNumber("Enter loan amount:");
   MonthlyPayment = ReadPositiveNumber("Enter monthly payment:");
   Months = TotalMonths(LoanAmount, MonthlyPayment);

   cout << '\n';
   cout << Months << " Months" << endl;

   return 0;
}

#include <iostream>

using namespace std;

struct stPiggyBank {
  int Penny = 1,
      Nickel = 5,
      Dime = 10,
      Quarter = 25,
      Dollar = 100;
};

stPiggyBank ReadPiggyBank ()
{
  stPiggyBank PiggyBank;

  cout << "Enter the amount of Pennies you have: ";
  cin >> PiggyBank.Penny;

  cout << "\nEnter the amount of Nickels you have: ";
  cin >> PiggyBank.Nickel;

  cout << "\nEnter the amount of Dimes you have: ";
  cin >> PiggyBank.Dime;

  cout << "\nEnter the amount of Quarters you have: ";
  cin >> PiggyBank.Quarter;

  cout << "\nEnter the amount of Dollars you have: ";
  cin >> PiggyBank.Dollar;

  cout << endl;
  return PiggyBank;
}

int PiggyTotalPennies(stPiggyBank PiggyBank)
{
  return PiggyBank.Dollar * 100 + PiggyBank.Quarter * 25 + PiggyBank.Dime * 10 + PiggyBank.Nickel * 5 + PiggyBank.Penny;
}

double PiggyTotalDollars(int TotalPennies)
{
  return (double) TotalPennies / 100;
}

void PrintResults(int TotalPennies)
{
  cout << "The total amount of pennies is: " << TotalPennies << endl << endl;
  cout << "The total amount of dollars is: " << PiggyTotalDollars(TotalPennies) << endl;
}

int main()
{
  PrintResults(PiggyTotalPennies(ReadPiggyBank()));

  return 0;
}

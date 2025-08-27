#include <iostream>

using namespace std;

double ReadBill()
{
   double Bill = 0;

   cout << "Enter bill amount: ";
   cin >> Bill;

   cout << endl;
   return Bill;
}

double ServiceFee(double Bill)
{
   return Bill * 0.1;
}

double SalesTax(double Bill)
{
   return Bill * 0.16;
}

double TotalBill (double Bill)
{
   Bill += ServiceFee(Bill);

   return Bill + SalesTax(Bill);
}

int main()
{
    cout << TotalBill(ReadBill()) << endl;

    return 0;
}

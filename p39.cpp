#include <iostream>

using namespace std;

int ReadPayment()
{
    int PaidCash = 0;

    cout << "Enter paid amount in cash: ";
    cin >> PaidCash;

    cout << endl;
    return PaidCash;
}

int ReadBill()
{
    int TotalBill = 0;

    cout << "Enter total bill amount: ";
    cin >> TotalBill;

    cout << endl;
    return TotalBill;
}


int PaymentReminder(int PaidCash, int TotalBill)
{
    return TotalBill-PaidCash;
}

void PrintResults(int PaymentReminder)
{
    cout << "The reminder amount is: " << PaymentReminder << endl;
}

int main()
{
    int Bill = ReadBill();
    int Payment = ReadPayment();

    PrintResults(PaymentReminder(Payment, Bill));

    return 0;
}

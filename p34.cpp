#include <iostream>

using namespace std;

double ReadTotalSales()
{
    double TotalSales;  

    cout << "Please enter Total Sales? ";
    cin >> TotalSales;

    cout << endl;
    return TotalSales;
}

double GetCommissionPercentage(float TotalSales)
{
  if (TotalSales >= 1000000)
    return 0.01;

  else if (TotalSales >= 500000)
    return 0.02;

  else if (TotalSales >= 100000)
    return 0.03;

  else if (TotalSales >= 50000)
    return 0.05;

  else
    return 0.00;
}

double CalculateTotalCommission(float TotalSales)
{
  return GetCommissionPercentage(TotalSales) * TotalSales;  // Multiply sales by commission percentage.
}


int main()
{
    double TotalSales = ReadTotalSales();

    cout << "Commission Percentage is " << GetCommissionPercentage(TotalSales) * 100 << "%" << endl;
    cout << endl << "Total Commission is " << CalculateTotalCommission(TotalSales) << endl;

    return 0;
}

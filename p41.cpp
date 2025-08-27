#include <iostream>

using namespace std;

double ReadHours()
{
   double Hours = 0;

   cout << "Enter the number hours: ";
   cin >> Hours;

   cout << endl;
   return Hours;
}

double HoursToWeeks(double Hours)
{
    return Hours / 24 / 7;
}

double HoursToDays(double Hours)
{
    return Hours / 24;
}

int main()
{
    double Hours = ReadHours();

    cout << HoursToWeeks(Hours) << " Weeks\n" << endl;
    cout << HoursToDays(Hours) << " Days" << endl;

    return 0;
}

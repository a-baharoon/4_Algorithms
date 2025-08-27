#include <iostream>

using namespace std;

enum enDays {Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int ReadNumber()
{
    int Number = 0;

    cout << "Enter Day Number (1-7) ";
    cin >> Number;

    while (!(Number <= 7 && Number > 0)) {
        cout << endl;
        cout << "Please enter a number between 1-7: ";
        cin >> Number;
    }

    cout << endl;
    return Number;
}

string DetermineDay(int Number)
{
    enDays Day;
    Day = (enDays) Number;

    switch (Day) {
        case enDays::Sun:
           return "Sunday";

        case enDays::Mon:
           return "Monday";

        case enDays::Tue:
          return "Tuesday";

        case enDays::Wed:
          return "Wednesday";

        case enDays::Thu:
          return "Thursday";

        case enDays::Fri:
          return "Friday";

        case enDays::Sat:
          return "Saturday";
    }
}

void PrintDay(string Day)
{
    cout << Day << endl;
}

int main()
{
   PrintDay(DetermineDay(ReadNumber()));

   return 0;
}

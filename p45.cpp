#include <iostream>

using namespace std;

enum enMonths {
   Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5,
   Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10,
   Nov = 11, Dec = 12
};

int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;

    do {
        cout << Message;
        cin >> Number;

        cout << endl;
    } while (Number < From || Number > To);

    return Number;
}

enMonths ReadMonth()
{
     return (enMonths) ReadNumberInRange("Please enter a month [1 to 12]: ", 1, 12);
}

string MonthOfYear(enMonths Month)
{
    switch (Month) {
            case Jan:
                return "January";
            case Feb:
                return "February";
            case Mar:
                return "March";
            case Apr:
                return "April";
            case May:
                return "May";
            case Jun:
                return "June";
            case Jul:
                return "July";
            case Aug:
                return "August";
            case Sep:
                return "September";
            case Oct:
                return "October";
            case Nov:
                return "November";
            case Dec:
                return "December";
    }
}

int main()
{
    string Month = MonthOfYear(ReadMonth());

    cout << Month << endl;

    return 0;
}

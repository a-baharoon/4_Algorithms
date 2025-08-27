#include <iostream>
#include <cmath>

using namespace std;

void secondsToDaysHoursMinutesSeconds(int totalSeconds)
{
    int secondsPerDay = 60 * 60 * 24;
    int secondsPerHour = 60 * 60;
    int secondsPerMinute = 60;
    int days = 0, hours = 0, minutes = 0, seconds = 0, remainder = 0;

    days = totalSeconds / secondsPerDay;
    remainder = totalSeconds % secondsPerDay;

    hours = remainder / secondsPerHour;
    remainder = remainder % secondsPerHour;

    minutes = remainder / secondsPerMinute;
    remainder = remainder % secondsPerMinute;

    seconds = remainder;

    cout << days <<":"<< hours <<":"<< minutes <<":"<< seconds << endl;
}

int main()
{
	int secondsNumber = 0;

    cin >> secondsNumber;

    secondsToDaysHoursMinutesSeconds(secondsNumber);

    return 0;
}

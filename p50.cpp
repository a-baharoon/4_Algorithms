#include <iostream>

using namespace std;

string ReadPIN()
{
    string PIN;

    cout << "Please enter your PIN: ";
    cin >> PIN;
    cout << endl << endl;

    return PIN;
}

bool Login()
{
    string PIN = ReadPIN();
    int i = 3;

    if (PIN == "1234") {
        system("tput setab 2; clear");
        return 1;
    }

    while (i >= 1 && PIN != "1234") {
       system("tput setab 1; clear");
       cout << "Wrong PIN. You have " << i << " trails left: ";
       cin >> PIN;
       i--;
       cout << endl;
    }

    if (PIN == "1234") {
        cout << endl;
        return 1;
    }

    cout << endl;
    return 0;
}

int main() {

    if (Login()) {
        system("tput setab 2; clear");
        cout << "Your account balance is: " << 7500 << endl;
    }

    else {
        system("tput setab 1; clear");
        cout << "Your card has been blocked. Contact your bank for support." << endl;
    }

    return 0;
}

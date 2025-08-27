#include <iostream>

using namespace std;

// Sol Inspired by Abo-Hadhoud.

string ReadPIN(string Message)
{
   string PIN;

   cout << Message;
   cin >> PIN;

   return PIN;
}

bool Login()
{
    string PIN = ReadPIN("Please enter your PIN: ");
    cout << endl;

    int i = 0;

    while (PIN != "1234") {

        if (i == 0)
            cout << endl;

        ReadPIN("Wrong PIN, Please enter your PIN again: ");
        cin >> PIN;
        i++;
    }

    cout << endl;
    return 1;
}

int main() {

    if (Login()) {
        cout << "Your account balance is: " << 7500 << endl;
    }

    return 0;
}

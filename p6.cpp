#include <iostream>
#include <string> // in case we wanted to use getline()

using namespace std;

struct stInfo {
  string FirstName;
  string LastName;
};

stInfo ReadInfo()
{
  stInfo Info;
  
  cout << "Please enter your first name: ";
  cin >> Info.FirstName;

  cout << "Please enter your last name:  ";
  cin >> Info.LastName;
  
  return Info;  
}

string GetFullName(stInfo Info, bool Reversed)
{
  if (Reversed)
    return Info.LastName + " " + Info.FirstName;

  else
    return Info.FirstName + " " + Info.LastName;
}

void PrintFullName(string FullName)
{
  cout << '\n' << FullName << endl;
}

int main()
{
  PrintFullName(GetFullName(ReadInfo(), true));

  return 0;
}

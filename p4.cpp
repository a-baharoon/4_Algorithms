#include <iostream>

using namespace std;

struct stInfo {
  int Age;
  bool HasDriverLicense;
};

stInfo ReadInfo()
{
  stInfo Info;
  
  cout << "Please enter your Age: ";
  cin >> Info.Age;
    
  cout << "\nDo you have a drivers license: ";
  cin >> Info.HasDriverLicense;
  
  return Info;
}

bool IsAccepted(stInfo Info)
{
  return (Info.Age > 21 && Info.HasDriverLicense);
}

void PrintResult(stInfo Info)
{
  if (IsAccepted(Info))
    cout << "\nHired" << endl;

  else
    cout << "\nRejected" << endl;
}

int main()
{
  PrintResult(ReadInfo());

  return 0;
} 

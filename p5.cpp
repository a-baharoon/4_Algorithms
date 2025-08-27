#include <iostream>

using namespace std;

struct stInfo {
  int Age;
  bool HasDriverLicense;
  bool HasRecommendation;
};

stInfo ReadInfo()
{
  stInfo Info;
  
  cout << "Please enter your Age: ";
  cin >> Info.Age;
    
  cout << "\nDo you have a drivers license: ";
  cin >> Info.HasDriverLicense;

  cout << "\nDo you have a recommendation: ";
  cin >> Info.HasRecommendation; 
  
  return Info;
}

bool IsAccepted(stInfo Info)
{
    if (Info.HasRecommendation)
      return true ;

    else
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

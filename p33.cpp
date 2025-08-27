#include <iostream>

using namespace std;

int ReadNumberInRange(int From, int To)
{
  int Number = 0;

  do {
    
    cout << "Enter your Mark From " << From << " to " << To << " : ";
    cin >> Number;
    
  } while (!(Number >= From && Number <= To));

  return Number;
}

char MarkGrade(int Mark) {

  // division would return an int that resembeles the grade nothing fancy here.
  switch (Mark / 10) {

        case 10:  // For 100
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        case 5:
            return 'E';
        default:
            return 'F';
  }
}

int main()
{
  char Grade = MarkGrade(ReadNumberInRange(0, 100));

  cout << "Your Grade is " << Grade  << endl;

  return 0;
}

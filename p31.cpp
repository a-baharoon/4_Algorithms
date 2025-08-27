#include <iostream>

using namespace std;

int ReadNumber()
{
  int N = 0;

  cout << "Please enter a Number: ";
  cin >> N;

  cout << endl;
  return N;
}

int Exponent(int Number, int M)
{
   int Expo = 1;

   for (int i = 0; i < M; i++)
       Expo *= Number;

   return Expo;
}

void PrintResult(int N)
{
  for (int i = 2; i <= 4; i++)
      cout << Exponent(N, i) << endl;
}

int main()
{
  PrintResult(ReadNumber());

  return 0;
}

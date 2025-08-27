#include <iostream>

using namespace std;

void ReadNumber(int &N, int &M)
{
  cout << "Please enter a Number: ";
  cin >> N;

  cout << "\nPlease enter the Exponent: ";
  cin >> M;

  cout << endl;
}

int Exponent(int Number, int M)
{
  int Expo = 1;

  for (int i = 0; i < M; i++)
     Expo *= Number;

  return Expo;
}

void PrintResult(int N, int M)
{
  cout << "The Number " << N << "^" << M << " = " << Exponent(N, M) << endl;
}

int main()
{
  int N = 0, M = 0;

  ReadNumber(N, M);
  
  PrintResult(N, M);

  return 0;
}


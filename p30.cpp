#include <iostream>

using namespace std;

int ReadNumber()
{
  int N;

  cout << "Enter N: ";
  cin >> N;

  cout << '\n';
  return N;
}

int Factorial(int N)
{
    int factorial = 1;

    for (int i = N; i > 0; i--)
         factorial *= i;

    return factorial;
}

int main ()
{
  cout << Factorial(ReadNumber()) << endl;

  return 0;
}

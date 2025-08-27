#include <iostream>

using namespace std;

int ReadNumber()
{
  int N = 0;

  cout << "Enter N: ";
  cin >> N;

  cout << endl;
  return N;
}

int OddSumToN(int N)
{
  int sum = 0;

  for (int i = 1; i <= N; i++) {

      if (i % 2 != 0)
        sum += i;

   }

  return sum;
}

void PrintResult()
{
 int N = ReadNumber();
 cout << "The sum of odd numbers from 1 to " << N << " is " << OddSumToN(N) << endl;
}

int main ()
{
  PrintResult();

  return 0;
}

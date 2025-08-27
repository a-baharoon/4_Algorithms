#include <iostream>

using namespace std;

int ReadNum()
{
  int N = 0;

  cout << "Enter N: ";
  cin >> N;

  cout << endl;
  return N;
}

void OneToN(int N)
{
  for (int i = 1; i <= N; i++)
    cout << i << endl;
}

int main()
{
  OneToN(ReadNum());
  
  return 0;
}

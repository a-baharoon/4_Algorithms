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

void NtoOne(int N)
{
  for (int i = N; i >= 1; i--)
    cout << i << endl;
}

int main()
{
  NtoOne(ReadNum());
  
  return 0;
}


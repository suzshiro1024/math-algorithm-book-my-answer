#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  string res;
  while (N >= 1)
  {
    if (N % 2 == 0)
      res = "0" + res;
    if (N % 2 == 1)
      res = "1" + res;
    N = N / 2;
  }

  cout << res << endl;
}
#include <iostream>

using namespace std;

int rr(int N)
{
  if (N < 2)
  {
    return 1;
  }
  else
  {
    return rr(N - 1) + 2;
  }
}

int main()
{
  int N;
  cin >> N;

  int res = rr(N);

  cout << res << endl;

  return 0;
}
#include <iostream>

using namespace std;

int rr(int N)
{
  if (N < 3)
    return 1;
  else
    return rr(N - 1) + rr(N - 2);
}

int main()
{
  int N;
  cin >> N;

  int res = rr(N);

  cout << res << endl;

  return 0;
}
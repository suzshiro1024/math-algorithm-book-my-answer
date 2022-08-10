#include <iostream>

using namespace std;

int main()
{
  int N, X, Y;
  cin >> N >> X >> Y;

  int res = 0;
  for (int i = N; i > 0; i--)
  {
    if (i % X == 0 || i % Y == 0)
      res++;
  }

  cout << res << endl;

  return 0;
}
#include <iostream>

using namespace std;

using ll = long long;

int main()
{
  ll N;
  cin >> N;

  long long F[N + 10] = {0};
  F[1] = 1, F[2] = 1;
  for (int i = 3; i <= N; i++)
  {
    F[i] = (F[i - 1] + F[i - 2]) % 1000000007;
  }

  cout << F[N] % 1000000007 << endl;

  return 0;
}
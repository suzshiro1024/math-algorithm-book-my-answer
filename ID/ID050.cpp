#include <iostream>

using namespace std;
using ll = long long;

int main()
{
  ll a, b;
  cin >> a >> b;

  ll mod = 1000000007;

  ll ans = 1, p = a;
  for (int i = 0; i < 30; i++)
  {
    if ((b & (1 << i)) != 0)
    {
      ans *= p;
      ans %= mod;
    }
    p *= p;
    p %= mod;
  }

  cout << ans << endl;

  return 0;
}
#include <iostream>

using namespace std;
using ll = long long;

ll pow(ll A, ll B, ll mod)
{
  ll P = A, ans = 1;
  for (int i = 0; i < 30; i++)
  {
    if ((B & (1 << i)) != 0)
    {
      ans *= P;
      ans %= mod;
    }
    P *= P;
    P %= mod;
  }
  return ans;
}

ll div(ll A, ll B, ll mod)
{
  ll ans = pow(B, mod - 2, mod);

  return (A * ans) % mod;
}

int main()
{
  int X, Y;
  cin >> X >> Y;

  const ll mod = 1000000007;

  ll A = 1, B = 1;
  for (int i = 1; i <= X + Y; i++)
  {
    A *= i;
    A %= mod;
  }

  for (int i = 1; i <= X; i++)
  {
    B *= i;
    B %= mod;
  }

  for (int i = 1; i <= Y; i++)
  {
    B *= i;
    B %= mod;
  }

  cout << div(A, B, mod) << endl;

  return 0;
}
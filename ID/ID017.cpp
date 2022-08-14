#include <iostream>

using namespace std;

long long gcd(long long A, long long B)
{
  if (B == 0)
    return A;
  else
    return gcd(B, A % B);
}

long long lcm(long long A, long long B)
{
  if (A < B)
  {
    long long tmp = A;
    A = B;
    B = tmp;
  }

  return A / gcd(A, B) * B;
}

int main()
{
  int N;
  cin >> N;

  long long numbers[N];
  for (int i = 0; i < N; i++)
    cin >> numbers[i];

  long long res = numbers[0];
  for (int i = 1; i < N; i++)
  {
    res = lcm(res, numbers[i]);
  }

  cout << res << endl;

  return 0;
}
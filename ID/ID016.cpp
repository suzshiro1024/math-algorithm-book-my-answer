#include <iostream>

using namespace std;

long long euclid(long long A, long long B)
{
  if (B == 0)
    return A;
  else
    return euclid(B, A % B);
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
    if (res > numbers[i])
      res = euclid(res, numbers[i]);
    else
      res = euclid(numbers[i], res);
  }

  cout << res << endl;

  return 0;
}
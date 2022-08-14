#include <iostream>

using namespace std;

int main()
{
  long long N;
  cin >> N;

  for (long long i = 2; i * i <= N; i++)
  {
    if (N % i != 0)
      continue;

    while (N % i == 0)
    {
      cout << i << " ";
      N = N / i;
    }
  }

  if (N != 1)
    cout << N;

  cout << endl;
  return 0;
}
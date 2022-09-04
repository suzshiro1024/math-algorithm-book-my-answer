#include <iostream>
#include <cmath>

using namespace std;

void solver(bool prime[], int N)
{
  for (int i = 2; i * i <= N; i++)
  {
    if (prime[i])
    {
      for (int j = i * 2; j <= N; j += i)
      {
        prime[j] = false;
      }
    }
  }
}

int main()
{
  int N;
  cin >> N;

  bool prime[N + 1];

  for (int i = 2; i <= N; i++)
  {
    prime[i] = true;
  }

  solver(prime, N);

  for (int i = 2; i <= N; i++)
  {
    if (prime[i])
      cout << i << endl;
  }

  return 0;
}
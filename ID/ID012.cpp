#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(long long x)
{
  for (long long i = 2; i * i <= x; i++)
  {
    if (x % i == 0)
      return false;
  }
  return true;
}

int main()
{
  long long N;
  cin >> N;

  bool prime = is_prime(N);

  if (prime)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
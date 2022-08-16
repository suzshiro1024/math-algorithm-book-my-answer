#include <iostream>

using namespace std;

int main()
{
  long long n, r;
  cin >> n >> r;

  long long f = 1;
  long long d = 1;
  for (long long i = 0; i < r; i++)
  {
    f *= n - i;
    d *= r - i;
  }

  cout << f / d << endl;

  return 0;
}
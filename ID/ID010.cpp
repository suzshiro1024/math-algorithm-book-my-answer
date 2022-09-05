#include <iostream>
using namespace std;

int main()
{
  long long N;
  cin >> N;

  long long res = 1;
  for (long long i = N; i > 0; i--)
  {
    res *= i;
  }

  cout << res << endl;

  return 0;
}
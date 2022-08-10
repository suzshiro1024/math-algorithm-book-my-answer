#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  for (int i = 2; i <= N; i++)
  {
    bool isPrime = true;
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        isPrime = false;
        continue;
      }
    }
    if (isPrime)
      cout << i << endl;
  }

  return 0;
}
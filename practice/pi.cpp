#include <iostream>

using namespace std;

int main()
{
  long long N;
  cin >> N;

  long long count = 0;
  for (long long i = 0; i < N; i++)
  {
    double x = rand() / (double)RAND_MAX;
    double y = rand() / (double)RAND_MAX;

    if (x * x + y * y <= 1)
      count++;
  }

  cout << count * 4 / (double)N << endl;

  return 0;
}
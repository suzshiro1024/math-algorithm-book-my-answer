#include <iostream>

using namespace std;

int main()
{
  const double range = 100;

  int N;
  cin >> N;

  double A[N + 1];
  for (int i = 1; i <= N; i++)
    A[i] = range * rand() / (double)RAND_MAX;

  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= N; j++)
    {
      if (A[i] < A[j])
        swap(A[i], A[j]);
    }
  }

  for (int i = 1; i <= N; i++)
    cout << A[i] << endl;

  return 0;
}
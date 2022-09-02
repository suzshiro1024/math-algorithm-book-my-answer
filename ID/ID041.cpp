#include <iostream>

using namespace std;

int main()
{
  int T, N;
  cin >> T >> N;

  long long A[T + 1], B[T + 1] = {};
  long long L[N + 1], R[N + 1] = {};

  for (int i = 1; i <= N; i++)
  {
    cin >> L[i] >> R[i];
    B[L[i]] += 1;
    B[R[i]] -= 1;
  }

  A[0] = 0;
  for (int i = 1; i <= T; i++)
  {
    A[i] = A[i - 1] + B[i];
  }

  for (int i = 0; i < T; i++)
    cout << A[i] << endl;

  return 0;
}
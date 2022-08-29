#include <iostream>

using namespace std;

int main()
{
  int N, Q;
  cin >> N >> Q;

  long long A[N + 1], B[N + 1];
  int L[Q + 1], R[Q + 1];
  B[0] = 0;

  for (int i = 1; i <= N; i++)
    cin >> A[i];

  for (int j = 1; j <= Q; j++)
    cin >> L[j] >> R[j];

  for (int i = 1; i <= N; i++)
    B[i] = B[i - 1] + A[i];

  for (int j = 1; j <= Q; j++)
  {
    cout << B[R[j]] - B[L[j] - 1] << endl;
  }
  return 0;
}
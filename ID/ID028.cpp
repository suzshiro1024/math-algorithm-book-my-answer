#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int A[N];
  for (int i = 0; i < N; i++)
    cin >> A[i];

  int dp[N];
  for (int i = 0; i < N; i++)
  {
    if (i == 0)
      dp[i] = 0;
    if (i == 1)
      dp[i] = abs(A[i] - A[i - 1]);
    if (i >= 2)
    {
      int hp1 = dp[i - 1] + abs(A[i] - A[i - 1]);
      int hp2 = dp[i - 2] + abs(A[i] - A[i - 2]);
      dp[i] = min(hp1, hp2);
    }
  }

  cout << dp[N - 1] << endl;

  return 0;
}
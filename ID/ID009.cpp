#include <iostream>

using namespace std;

int main()
{
  long long N, S;
  cin >> N >> S;

  long long A[N + 1];
  for (int i = 1; i <= N; i++)
    cin >> A[i];

  long long dp[N + 1][S + 1];

  dp[0][0] = 1;
  for (int i = 1; i <= S; i++)
    dp[0][i] = 0;

  for (int i = 1; i <= N; i++)
  {
    for (int j = 0; j <= S; j++)
    {
      if (j < A[i])
        dp[i][j] = dp[i - 1][j];
      else
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - A[i]]);
    }
  }

  if (dp[N][S] == 1)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
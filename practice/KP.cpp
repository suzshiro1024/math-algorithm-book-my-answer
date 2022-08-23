#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
  long long W, N;
  cin >> W >> N;

  long long weight[N + 1];
  long long value[N + 1];

  long long dp[N + 1][W + 1];
  for (int i = 1; i <= N; i++)
    cin >> weight[i] >> value[i];

  dp[0][0] = 0;
  for (int i = 1; i <= W; i++)
    dp[0][i] = LLONG_MIN;

  for (int i = 1; i <= N; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      if (j < weight[i])
        dp[i][j] = dp[i - 1][j];
      else
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
    }
  }

  long long res = LLONG_MIN;
  for (int i = 0; i <= W; i++)
    res = max(res, dp[N][i]);

  cout << res << endl;

  return 0;
}
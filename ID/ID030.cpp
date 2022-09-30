#include <iostream>
#include <climits>

using namespace std;

int main()
{
  int N;
  long long W;

  cin >> N >> W;

  long long dp[N + 10][W + 10] = {LLONG_MIN}, value[N + 10] = {0}, weight[N + 10] = {0};
  for (int i = 1; i <= N; i++)
    cin >> weight[i] >> value[i];

  dp[1][0] = 0;
  dp[1][weight[1]] = value[1];

  for (int i = 2; i <= N; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      if (j < weight[i])
        dp[i][j] = dp[i - 1][j];
      else
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
    }
  }

  long long ans = LLONG_MIN;
  for (int i = 0; i <= W; i++)
    if (ans < dp[N][i])
      ans = dp[N][i];

  cout << ans << endl;

  return 0;
}
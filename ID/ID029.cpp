#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int dp[N + 1];
  for (int i = 0; i <= N; i++)
  {
    if (i == 0)
      dp[i] = 1;
    if (i == 1)
      dp[i] = 1;
    if (i >= 2)
      dp[i] = dp[i - 1] + dp[i - 2];
  }

  cout << dp[N] << endl;

  return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int A[5] = {8, 6, 9, 2, 1};

  int dp[5];
  for (int i = 0; i < 5; i++)
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

  for (int i = 0; i < 5; i++)
    cout << dp[i] << endl;

  return 0;
}
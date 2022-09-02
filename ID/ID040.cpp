#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  long long dist[N], c_dist[N + 1] = {};
  long long B[M + 1];

  c_dist[1] = 0;
  for (int i = 1; i < N; i++)
  {
    cin >> dist[i];
  }

  for (int i = 2; i <= N; i++)
  {
    c_dist[i] = c_dist[i - 1] + dist[i - 1];
  }

  for (int i = 1; i <= M; i++)
    cin >> B[i];

  long long res = 0;
  for (int i = 2; i <= M; i++)
  {
    res += abs(c_dist[B[i]] - c_dist[B[i - 1]]);
  }

  cout << res << endl;

  return 0;
}
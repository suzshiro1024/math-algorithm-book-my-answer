#include <iostream>
#include <vector>

using namespace std;

using Graph = vector<vector<int>>;

Graph graph_init(int N, int M)
{
  Graph g(N);

  for (int i = 1; i <= M; i++)
  {
    int from, to;
    cin >> from >> to;

    g[from].push_back(to);
    g[to].push_back(from);
  }

  return g;
}

int main()
{
  int N, M;
  cin >> N >> M;

  Graph g = graph_init(N + 1, M);

  int ans = 0;
  for (int i = 1; i <= N; i++)
  {
    int cnt = 0;
    for (int j = 0; j < g[i].size(); j++)
    {
      if (i > g[i][j])
        cnt++;
    }

    if (cnt == 1)
      ans++;
  }

  cout << ans << endl;

  return 0;
}
#include <iostream>
#include <vector>

using namespace std;

using Graph = vector<vector<int>>;

Graph graph_init(int N, int M)
{
  Graph g(N);

  for (int i = 0; i < M; i++)
  {
    int from, to;
    cin >> from >> to;

    g[from].push_back(to);
    g[to].push_back(from);
  }

  return g;
}

void dfs_solver(Graph &g, bool seen[], int v)
{
  seen[v] = true;

  for (auto next : g[v])
  {
    if (seen[next])
      continue;
    dfs_solver(g, seen, next);
  }
}

int main()
{
  int N, M;
  cin >> N >> M;

  Graph g = graph_init(N, M);

  bool seen[N];

  dfs_solver(g, seen, 0);

  return 0;
}
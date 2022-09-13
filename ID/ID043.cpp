#include <iostream>
#include <vector>

using namespace std;

using Graph = vector<vector<int>>;

Graph graph_init(int N, int M)
{
  Graph g(N + 1);

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

  bool seen[N + 1];
  for (int i = 0; i <= N; i++)
    seen[i] = false;

  dfs_solver(g, seen, 1);

  bool flag = true;
  for (int i = 1; i <= N; i++)
  {
    if (!seen[i])
      flag = false;
  }

  if (flag)
  {
    cout << "The graph is connected." << endl;
  }
  else
  {
    cout << "The graph is not connected." << endl;
  }

  return 0;
}
#include <iostream>
#include <vector>
#include <deque>

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

void bfs_solver(Graph g, bool seen[], int start)
{
  deque<int> queue;

  seen[start] = true;
  queue.push_back(start);

  while (!queue.empty())
  {
    int v = queue[0];
    queue.pop_front();

    for (auto next : g[v])
    {
      if (seen[next])
        continue;
      seen[next] = true;
      queue.push_back(next);
    }
  }
}

int main()
{
  int N, M;
  cin >> N >> M;

  Graph g = graph_init(N, M);

  bool seen[N];

  bfs_solver(g, seen, 0);

  return 0;
}
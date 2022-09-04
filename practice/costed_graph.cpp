#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

struct edge
{
  int to;
  int weight;
  edge(int to, int weight)
  {
    this->to = to;
    this->weight = weight;
  }
};

using Graph = vector<vector<edge>>;

int main()
{
  int N, M;
  cin >> N >> M;

  Graph G(N);

  for (int i = 0; i < M; i++)
  {
    int from, to, weight;
    cin >> from >> to >> weight;

    edge e(to, weight);

    G[from].push_back(e);
  }

  for (int i = 0; i < N; i++)
  {
    cout << i << ": {";
    for (int j = 0; j < (int)G[i].size(); j++)
    {
      if (j >= 1)
        cout << ",";
      cout << G[i][j].to << ":" << G[i][j].weight;
    }
    cout << "}" << endl;
  }

  return 0;
}
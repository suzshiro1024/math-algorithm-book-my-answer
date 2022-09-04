#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
using Graph = vector<vector<int>>;

int main()
{
  int N, M;
  cin >> N >> M;

  Graph G(N);

  for (int i = 0; i < M; i++)
  {
    int from, to;
    cin >> from >> to;

    G[from].push_back(to);
  }

  for (int i = 0; i < N; i++)
  {
    cout << i << ": {";
    for (int j = 0; j < (int)G[i].size(); j++)
    {
      if (j >= 1)
        cout << ",";
      cout << G[i][j];
    }
    cout << "}" << endl;
  }

  return 0;
}
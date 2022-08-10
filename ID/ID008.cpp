#include <iostream>
using namespace std;

int main()
{
  int N, S;
  cin >> N >> S;

  int res = 0;
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= N; j++)
    {
      if (i + j <= S)
        res++;
    }
  }

  cout << res << endl;
}
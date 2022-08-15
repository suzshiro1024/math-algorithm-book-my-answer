#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int cards[N + 1];
  for (int i = 1; i < N + 1; i++)
    cin >> cards[i];

  int res = 0;
  for (int i = 1; i < N + 1; i++)
  {
    for (int j = i + 1; j < N + 1; j++)
    {
      for (int k = j + 1; k < N + 1; k++)
      {
        for (int l = k + 1; l < N + 1; l++)
        {
          for (int m = l + 1; m < N + 1; m++)
          {
            if (cards[i] + cards[j] + cards[k] + cards[l] + cards[m] == 1000)
              res++;
          }
        }
      }
    }
  }

  cout << res << endl;

  return 0;
}
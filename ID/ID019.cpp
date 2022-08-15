#include <iostream>
#include <map>

using namespace std;

int main()
{
  int N;
  cin >> N;

  map<int, int> cards{
      {1, 0},
      {2, 0},
      {3, 0},
  };

  for (int i = 0; i < N; i++)
  {
    int card;
    cin >> card;
    cards[card]++;
  }

  int choose_red = cards[1] / 2 * (cards[1] - 1);
  int choose_yellow = cards[2] / 2 * (cards[2] - 1);
  int choose_blue = cards[3] / 2 * (cards[3] - 1);

  cout << choose_red + choose_blue + choose_yellow << endl;

  return 0;
}
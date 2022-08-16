#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int dice_blue[N];
  int dice_red[N];

  for (int i = 0; i < N; i++)
    cin >> dice_blue[i];
  for (int i = 0; i < N; i++)
    cin >> dice_red[i];

  float expect = 0;
  for (int i = 0; i < N; i++)
    expect += (float)dice_blue[i] / N;

  for (int i = 0; i < N; i++)
    expect += (float)dice_red[i] / N;

  cout << expect << endl;

  return 0;
}
#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int time_a[N + 1];
  int time_b[N + 1];

  for (int i = 1; i < N + 1; i++)
    cin >> time_a[i] >> time_b[i];

  float expect = 0;
  for (int i = 1; i < N + 1; i++)
    expect += (float)time_a[i] / 3 + (float)2 * time_b[i] / 3;

  cout << expect << endl;

  return 0;
}
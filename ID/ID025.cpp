#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int time_a[N + 1];
  int time_b[N + 1];

  for (int i = 1; i < N + 1; i++)
    cin >> time_a[i];
  for (int i = 1; i < N + 1; i++)
    cin >> time_b[i];

  double expect = 0;
  for (int i = 1; i < N + 1; i++)
    expect += 1.0 * time_a[i] / 3 + 1.0 * 2 * time_b[i] / 3;

  cout << fixed << setprecision(15) << expect << endl;

  return 0;
}
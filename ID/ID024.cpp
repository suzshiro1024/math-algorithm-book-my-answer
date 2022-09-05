#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int score[N];
  int choice[N];

  for (int i = 0; i < N; i++)
    cin >> choice[i] >> score[i];

  double expect = 0;
  for (int i = 0; i < N; i++)
    expect += 1.0 * score[i] / choice[i];

  cout << fixed << setprecision(15) << expect << endl;

  return 0;
}
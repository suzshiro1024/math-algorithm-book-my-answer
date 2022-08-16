#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int score[N];
  int choice[N];

  for (int i = 0; i < N; i++)
    cin >> score[i];
  for (int i = 0; i < N; i++)
    cin >> choice[i];

  float expect = 0;
  for (int i = 0; i < N; i++)
    expect += (float)score[i] / choice[i];

  cout << expect << endl;

  return 0;
}
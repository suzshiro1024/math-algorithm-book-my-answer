#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  const long long range = 99999;

  long long count[range + 1];

  for (int i = 0; i < range + 1; i++)
  {
    count[i] = 0;
  }

  for (int i = 0; i < N; i++)
  {
    int num;
    cin >> num;
    count[num]++;
  }

  const long long target = 100000;

  int res = 0;
  for (int i = 1; i < 50000; i++)
  {
    res += count[i] * count[target - i];
  }

  res += (count[50000] * (count[50000] - 1)) / 2;

  cout << res << endl;

  return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  long long N;
  cin >> N;

  long long ability[N + 1];
  for (int i = 1; i <= N; i++)
    cin >> ability[i];

  long long not_studied[N + 1];
  long long studied[N + 1];

  studied[0] = 0;
  not_studied[0] = 0;

  for (int i = 1; i <= N; i++)
  {
    studied[i] = not_studied[i - 1] + ability[i];
    not_studied[i] = max(not_studied[i - 1], studied[i - 1]);
  }

  long long res = max(studied[N], not_studied[N]);
  cout << res << endl;

  return 0;
}
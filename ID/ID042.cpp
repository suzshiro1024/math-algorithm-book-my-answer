#include <iostream>
#include <cmath>

using namespace std;

long long func[1 << 24];

int main()
{
  long long N;
  cin >> N;

  for (int i = 1; i <= N; i++)
  {
    for (int j = i; j <= N; j += i)
    {
      func[j]++;
    }
  }

  long long res = 0;
  for (int i = 1; i <= N; i++)
  {
    res += (i * func[i]);
  }

  cout << res << endl;

  return 0;
}
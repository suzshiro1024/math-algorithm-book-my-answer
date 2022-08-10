#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int a[N];
  int sum = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
    sum += a[i];
  }

  cout << sum % 100 << endl;
}
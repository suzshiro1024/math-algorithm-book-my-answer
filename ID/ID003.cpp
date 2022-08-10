#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int A[N];
  int res = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    res += A[i];
  }

  cout << res << endl;
  return 0;
}
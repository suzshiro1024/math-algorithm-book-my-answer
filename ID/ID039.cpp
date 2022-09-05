#include <iostream>

using namespace std;

int main()
{
  int N, Q;
  cin >> N >> Q;

  long long B[N + 1] = {0};
  long long L[Q + 1], R[Q + 1], X[Q + 1] = {0};

  for (int i = 1; i <= Q; i++)
  {
    cin >> L[i] >> R[i] >> X[i];
    B[L[i]] += X[i];
    B[R[i] + 1] -= X[i];
  }

  for (int i = 2; i <= N; i++)
  {
    if (B[i] > 0)
      cout << "<";
    else if (B[i] == 0)
      cout << "=";
    else if (B[i] < 0)
      cout << ">";
  }
  cout << endl;

  return 0;
}
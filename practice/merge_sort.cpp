#include <iostream>

using namespace std;

void mergesort(int l, int r, long long A[], long long C[])
{
  if (r - l == 1)
    return;

  int c = (r + l) / 2;
  mergesort(l, c, A, C);
  mergesort(c, r, A, C);

  int p1 = l;
  int p2 = c;
  int cnt = 0;

  while (p1 != c || p2 != r)
  {
    if (p1 == c)
    {
      C[cnt] = A[p2++];
    }
    else if (p2 == r)
    {
      C[cnt] = A[p1++];
    }
    else
    {
      if (A[p1] < A[p2])
      {
        C[cnt] = A[p1++];
      }
      else
      {
        C[cnt] = A[p2++];
      }
    }

    cnt++;
  }

  for (int i = 0; i < cnt; i++)
    A[l + i] = C[i];
}

int main()
{

  int N;
  cin >> N;

  long long A[N + 1];
  long long C[N + 1];
  for (int i = 1; i <= N; i++)
  {
    cin >> A[i];
  }

  mergesort(1, N + 1, A, C);

  for (int i = 1; i <= N; i++)
    cout << A[i] << " ";
  cout << endl;

  return 0;
}
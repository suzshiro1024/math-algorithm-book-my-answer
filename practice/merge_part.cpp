#include <iostream>
#include <vector>

using namespace std;

void merge(vector<double> &A, vector<double> &B, vector<double> &C)
{
  if (A.empty() && B.empty())
    return;

  if (A.empty())
  {
    C.push_back(B.front());
    B.erase(B.begin());
  }
  else if (B.empty())
  {
    C.push_back(A.front());
    A.erase(A.begin());
  }
  else
  {
    if (A.front() < B.front())
    {
      C.push_back(A.front());
      A.erase(A.begin());
    }
    else
    {
      C.push_back(B.front());
      B.erase(B.begin());
    }
  }
  merge(A, B, C);
}

int main()
{
  const double range = 100;

  int N;
  cin >> N;

  vector<double> A;
  vector<double> B;

  for (int i = 0; i < N; i++)
  {
    A.push_back(range * random() / (double)RAND_MAX);
    B.push_back(range * random() / (double)RAND_MAX);
  }

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  vector<double> C;

  merge(A, B, C);

  for (int i = 0; i < 2 * N; i++)
    cout << C[i] << endl;

  return 0;
}
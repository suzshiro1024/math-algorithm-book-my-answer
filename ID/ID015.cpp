#include <iostream>

using namespace std;

long long euclid(long long A, long long B)
{
  if (B == 0)
    return A;
  else
    return euclid(B, A % B);
}

int main()
{
  long long A, B;
  cin >> A >> B;

  cout << euclid(A, B) << endl;

  return 0;
}
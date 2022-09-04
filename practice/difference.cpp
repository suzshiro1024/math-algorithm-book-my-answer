#include <iostream>
#include <cmath>

using namespace std;

const double eps = 1e-6;

double f(double x)
{
  return x * x;
}

// f'(a)
double diff(double a)
{
  return (f(a + eps) - f(a)) / eps;
}

int main()
{
  double a;
  cin >> a;

  cout << diff(a) << endl;

  return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

const double threshold = 1e-6;
const int limit = 100;

double f(double x)
{
  return x * x;
}

double solve(double l, double r)
{
  int count = 0;
  double c = 0;

  while (count <= limit)
  {
    c = (l + r) / 2;

    if (abs(r - l) < threshold)
      break;

    if (c * c < 2)
      l = c;
    else
      r = c;

    count++;
  }

  return c;
}

int main()
{
  double l, r;
  cin >> l >> r;

  cout << solve(l, r) << endl;

  return 0;
}
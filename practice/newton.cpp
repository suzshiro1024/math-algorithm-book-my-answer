#include <iostream>
#include <cmath>

using namespace std;

const double threshold = 1e-6;
const double eps = 1e-6;
const int limit = 100;

double f(double x)
{
  return x * x;
}

// f'(x) = (f(x+h)-f(x))/h
double diff(double x)
{
  return (f(x + eps) - f(x)) / eps;
}

double newton(double r, double x)
{
  int count = 0;
  double x_prev = x;
  double x_new = 0;

  while (count <= limit)
  {
    double f_x = f(x_prev);
    double diff_x = diff(x_prev);

    x_new = x_prev + (r - f_x) / diff_x;

    if (abs(x_new - x_prev) < threshold)
      break;

    x_prev = x_new;
    count++;
  }

  return x_new;
}

int main()
{
  double r, x;
  cin >> r >> x;

  cout << newton(r, x) << endl;

  return 0;
}
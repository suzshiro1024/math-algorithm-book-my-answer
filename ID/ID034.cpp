#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

//(x,y)
struct point_2D
{
  long long x;
  long long y;
};

int main()
{
  int N;
  cin >> N;

  struct point_2D points[N + 1];

  for (int i = 1; i <= N; i++)
    cin >> points[i].x >> points[i].y;

  double res = numeric_limits<double>::max();
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= N; j++)
    {
      if (i == j)
        continue;

      double dist = sqrt((points[j].x - points[i].x) * (points[j].x - points[i].x) + (points[j].y - points[i].y) * (points[j].y - points[i].y));
      if (dist < res)
        res = dist;
    }
  }

  cout << fixed << setprecision(12) << res << endl;

  return 0;
}
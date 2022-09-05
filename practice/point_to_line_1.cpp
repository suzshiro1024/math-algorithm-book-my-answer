#include <iostream>
#include <cmath>

using namespace std;

//(x,y)
struct point_2D
{
  long long x;
  long long y;
};

// ax + by + c = 0
struct line
{
  long long a;
  long long b;
  long long c;
};

int main()
{
  struct point_2D a;
  struct point_2D b;
  struct point_2D c;

  cin >> a.x >> a.y;
  cin >> b.x >> b.y;
  cin >> c.x >> c.y;

  struct line f;
  f.a = c.y - b.y;
  f.b = -1 * (c.x - b.x);
  f.c = c.x * b.y - b.x * c.y;

  double ans = abs(f.a * a.x + f.b * a.y + f.c) / sqrt(1.0 * (f.a * f.a + f.b * f.b));
  cout << ans << endl;

  return 0;
}
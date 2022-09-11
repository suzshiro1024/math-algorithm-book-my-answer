#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//(x,y)
struct point_2D
{
  long long x;
  long long y;
};

struct vector
{
  long long x;
  long long y;
};

int main()
{
  struct point_2D a;
  struct point_2D b;
  struct point_2D c;

  cin >> a.x >> a.y;
  cin >> b.x >> b.y;
  cin >> c.x >> c.y;

  struct vector BA = {a.x - b.x, a.y - b.y};
  struct vector BC = {c.x - b.x, c.y - b.y};
  struct vector CA = {a.x - c.x, a.y - c.y};
  struct vector CB = {b.x - c.x, b.y - c.y};

  double ans = 0.0;
  if (BA.x * BC.x + BA.y * BC.y < 0LL)
  {
    ans = sqrt(BA.x * BA.x + BA.y * BA.y);
  }
  else if (CA.x * CB.x + CA.y * CB.y < 0LL)
  {
    ans = sqrt(CA.x * CA.x + CA.y * CA.y);
  }
  else
  {
    double square = abs(BA.x * BC.y - BA.y * BC.x);
    double BC_len = sqrt(BC.x * BC.x + BC.y * BC.y);
    ans = square / BC_len;
  }

  cout << fixed << setprecision(12) << ans << endl;

  return 0;
}
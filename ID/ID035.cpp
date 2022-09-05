#include <iostream>
#include <cmath>

using namespace std;

struct point_2D
{
  double x;
  double y;
};

struct circle
{
  point_2D center;
  double r;
};

int main()
{
  circle A;
  circle B;

  point_2D center_A;
  point_2D center_B;

  cin >> center_A.x >> center_A.y >> A.r >> center_B.x >> center_B.y >> B.r;
  A.center = center_A, B.center = center_B;

  double dist = sqrt((B.center.x - A.center.x) * (B.center.x - A.center.x) + (B.center.y - A.center.y) * (B.center.y - A.center.y));

  if (dist < abs(A.r - B.r))
    cout << "1" << endl;
  else if (dist == abs(A.r - B.r))
    cout << "2" << endl;
  else if (dist > abs(A.r - B.r) && dist < A.r + B.r)
    cout << "3" << endl;
  else if (dist == A.r + B.r)
    cout << "4" << endl;
  else if (dist > A.r + B.r)
    cout << "5" << endl;

  return 0;
}
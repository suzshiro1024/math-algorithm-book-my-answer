#include <iostream>
#include <cmath>

using namespace std;

struct point_2D
{
  double x;
  double y;
};

double square(point_2D P1, point_2D P2, point_2D P3)
{
  double res;

  double a1, a2, b1, b2;
  a1 = P2.x - P1.x;
  a2 = P2.y - P1.y;
  b1 = P3.x - P1.x;
  b2 = P3.y - P1.y;

  res = 0.5 * ((a1 * b2) - (a2 * b1));

  return res;
}

int main()
{
  point_2D A, B, C, D;
  cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> D.x >> D.y;

  // AB, CDの交差判定 -> ABD * ABC < 0 && CDA * CDB < 0

  double ABD = square(A, B, D);
  double ABC = square(A, B, C);
  double CDA = square(C, D, A);
  double CDB = square(C, D, B);

  if (ABD * ABC < 0 && CDA * CDB < 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
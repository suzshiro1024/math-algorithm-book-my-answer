#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int N;
  cin >> N;

  const double range_x = 6.0;
  const double range_y = 9.0;

  int count = 0;
  for (int i = 0; i < N; i++)
  {
    double x = range_x * rand() / RAND_MAX;
    double y = range_y * rand() / RAND_MAX;

    double dist_33 = sqrt((x - 3.0) * (x - 3.0) + (y - 3.0) * (y - 3.0));
    double dist_37 = sqrt((x - 3.0) * (x - 3.0) + (y - 7.0) * (y - 7.0));

    if (dist_33 <= 3 || dist_37 <= 2)
      count++;
  }

  cout << count << endl;

  cout << range_x * range_y * ((double)count / N) << endl;

  return 0;
}
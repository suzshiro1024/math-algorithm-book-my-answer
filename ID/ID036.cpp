#include <iostream>
#include <cmath>

using namespace std;

struct clock_hands
{
  double length;
  double time;
};

int main()
{
  clock_hands hour, minute;
  cin >> hour.length >> hour.time >> minute.length >> minute.time;

  if (hour.time > 12)
    hour.time = fmod(hour.time, 12.0);

  double hour_angle = hour.time / 12 * 360;
  double minute_angle = minute.time / 60 * 360;

  double angle_dist = min(abs(hour_angle - minute_angle), 360 - abs(hour_angle - minute_angle)) * M_PI / 180;

  double res = sqrt(hour.length * hour.length + minute.length * minute.length - 2 * hour.length * minute.length * cos(angle_dist));

  cout << res << endl;

  return 0;
}
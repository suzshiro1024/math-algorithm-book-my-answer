#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int dice_blue[N];
  int dice_red[N];

  for (int i = 0; i < N; i++)
    cin >> dice_blue[i];
  for (int i = 0; i < N; i++)
    cin >> dice_red[i];

  double expect_red = 0, expect_blue = 0;
  for (int i = 0; i < N; i++)
    expect_blue += 1.0 * dice_blue[i] / N;

  for (int i = 0; i < N; i++)
    expect_red += 1.0 * dice_red[i] / N;

  cout << fixed << setprecision(15) << expect_red + expect_blue << endl;

  return 0;
}
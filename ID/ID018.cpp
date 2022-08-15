#include <iostream>
#include <map>

using namespace std;

int main()
{
  int N;
  cin >> N;

  map<int, int> product{
      {100, 0},
      {200, 0},
      {300, 0},
      {400, 0},
  };

  for (int i = 0; i < N; i++)
  {
    int price;
    cin >> price;
    product[price]++;
  }

  cout << (product[100] * product[400] + product[200] * product[300]) << endl;

  return 0;
}
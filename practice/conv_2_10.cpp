#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
  string N;
  cin >> N;

  int size = N.size();
  int res = 0;
  for (int i = 0; i < size; i++)
  {
    char c = N[i];
    int exp = int(c - '0');

    float number = pow(2, exp);
    res += (int)number;
  }

  cout << res << endl;
}
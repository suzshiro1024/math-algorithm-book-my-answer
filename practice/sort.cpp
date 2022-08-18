#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int N;
  cin >> N;

  double array[N];

  for (int i = 0; i < N; i++)
    array[i] = 100.0 * rand() / RAND_MAX;

  sort(array + 1, array + N);

  for (int i = 0; i < N; i++)
    cout << array[i] << endl;

  return 0;
}
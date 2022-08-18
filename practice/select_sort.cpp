#include <iostream>

using namespace std;

int main()
{

  const double range = 100;

  int N;
  cin >> N;
  double array[N];

  for (int i = 0; i < N; i++)
    array[i] = range * rand() / RAND_MAX;

  for (int i = 0; i < N; i++)
  {
    int min_index = i;
    double min = array[i];
    for (int j = i; j < N; j++)
    {
      if (array[j] < min)
      {
        min_index = j;
        min = array[j];
      }
    }
    swap(array[i], array[min_index]);
  }

  for (int i = 0; i < N; i++)
    cout << array[i] << endl;

  return 0;
}
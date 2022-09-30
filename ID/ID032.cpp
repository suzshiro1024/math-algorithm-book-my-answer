#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  long long N, X;
  cin >> N >> X;

  long long arr[N + 1];
  for (int i = 1; i <= N; i++)
    cin >> arr[i];

  long long left, right;
  left = 1, right = N;

  sort(arr + 1, arr + N + 1);

  long long mid;
  do
  {
    mid = (left + right) / 2;
    if (X < arr[mid])
      right = mid - 1;
    else
      left = mid + 1;
  } while (X != arr[mid] && left <= right);

  if (X == arr[mid])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
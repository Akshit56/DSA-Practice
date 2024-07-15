// Move all the negative numbers to the left of the given array

#include <iostream>
using namespace std;
// Durtch Flag Algorithm (basically 2 pointer approach)
// TC - O(n), SC - O(1)
void moveNegative(int *a, int n)
{
  int l = 0;
  int h = n - 1;
  while (l <= h)
  {
    if (a[l] < 0)
    {
      l++;
    }
    else if (a[h] > 0)
    {
      h--;
    }
    else
    {
      swap(a[l], a[h]);
    }
  }
}

int main()
{
  int a[] = {1, 3, -5, 8, -9, 10};
  int n = sizeof(a) / sizeof(a[0]);
  moveNegative(a, n);

  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}
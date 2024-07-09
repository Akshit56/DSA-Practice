#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// class Solution {
// public:
// Function to check if array has 2 elements
// whose sum is equal to the given value

bool findPair(vector<int> &arr, int x)
{
  int n = arr.size();
  int l = 0;
  int h = n - 1;

  while (l < h)
  {
    int sum = arr[l] + arr[h];
    if (sum == x)
    {
      return true;
    }
    if (sum < x)
    {
      l++;
    }
    else
    {
      h--;
    }
  }
  return false;
};

bool hasArrayTwoCandidates(vector<int> &arr, int x)
{
  sort(arr.begin(), arr.end());
  return findPair(arr, x);
};

// };

int main()
{
  vector<int> arr = {1, 4, 45, 6, 10, 8};
  cout << hasArrayTwoCandidates(arr, 15);
  return 0;
}

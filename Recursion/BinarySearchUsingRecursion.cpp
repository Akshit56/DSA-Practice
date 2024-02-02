#include <iostream>
using namespace std;

int binSearch(int arr[], int size, int target, int start, int end)
{

  int mid = start + (end - start) / 2;
  if (start > end)
  {
    return -1;
  }

  if (target == arr[mid])
  {
    return mid;
  }

  if (target < arr[mid])
  {
    end = mid - 1;
    return binSearch(arr, size, target, start, end);
  }

  if (target > arr[mid])
  {
    start = mid + 1;
    return binSearch(arr, size, target, start, end);
  }
};

int main()
{

  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
  int size = 8;
  int target = 80;
  int start = 0;
  int end = size - 1;
  int ans = binSearch(arr, size, target, start, end);
  if (ans != -1)
  {
    cout << "Found at : " << ans;
  }
  else
  {
    cout << "Not found";
  }
}
#include <iostream>
using namespace std;

int binSearch(int arr, int size, int target, int start, int end)
{

  int mid = start + (end - start) / 2;
  if (start > end)
  {
    return -1;
  }
}

int main()
{

  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
  int size = 8;
  int target = 40;
  int start = 0;
  int end = size - 1;
  int ans = binSearch(arr, size, target, start, end);
}
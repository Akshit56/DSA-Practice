// basically 3 types of questions in binary search
// 1. simple BS, 2. BS when we know that our answer lies in a range, 
// 3. when we have to use BS on indexes
// Binary Search Time Complexity - Olog(n)
#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(int arr[], int size, int target) {

  int start = 0;
  int end = size - 1;
  int mid = (start + end) / 2;

  while (start <= end) {
    int element = arr[mid];
    if (element == target) {
      return mid;
    } else if (target < element) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
    mid = (start + end) / 2;
  }
  return -1;
}

int main() {
  int arr[] = {2, 4, 6, 8, 10, 12};
  int size = 6;
  int target = 10;
  int index = BinarySearch(arr, size, target);

  if (index != -1) {
    cout << "Index: " << index;
  } else {
    cout << "Not Found";
  }
  return 0;
}
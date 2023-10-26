//Q) Find the first occurence of an element using binary search :
// Bilkul binary search ki tarah hai, bas agar element mid ke equal hota hai toh
// left search bhi karna coz first occcurence nikalna hai
#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> v, int target) {

  int size = v.size();
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  int ans = 0;
  while (start <= end) {

    if (target == v[mid]) {
      ans = mid;
      end = mid - 1;
    } else if (target > v[mid]) {
      start = mid + 1;
    } else if (target < v[mid]) {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

int main() {

  vector<int> v{2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7};
  int target = 3;
  int index = firstOccurence(v, target);
  cout << "First Occurence is at index : " << index;
  return 0;
}
// Sorting 0 and 1 by creating a new vector

#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> arr2;
  vector<int> arr{1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1};
  int start = 0;
  int end = arr.size() - 1;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == 0) {
      arr2.push_back(arr[i]);
    }
  }

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == 1) {
      arr2.push_back(arr[i]);
    }
  }

  for (int i = 0; i < arr2.size(); i++) {
    cout << arr2[i];
  }

  return 0;
}

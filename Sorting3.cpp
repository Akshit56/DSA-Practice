#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> nums) {
  int first = 0;
  int last = 5;
  for (int i = 0; i < 6; i++) {
    if (nums[i] == 0) {
      swap(nums[i], nums[first]);
      first++;
    }
    else if (nums[i] == 2) {
      swap(nums[last], nums[i]);
      last--;
    }
  }
};

int main() {

  vector<int> nums{2, 0, 2, 1, 1, 0};
  sortColors(nums);
  for (int i = 0; i < 6; i++) {
    cout << nums[i] << ",";
  }
  return 0;
}
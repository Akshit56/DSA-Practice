//Q) Square root of a number using BS

// sqrt of 25 using binary search
// mid*mid < target pe ans ki value save karli cuz ans can be like 5.2, 5.2
// smth, store nhi karenge toh maybe ans hi print na ho also e = number/2 cuz
// agar 25 hai toh square 0 se 12 me hi hoga
#include <iostream>
using namespace std;

int findSquareRoot(int number) {
  int target = number;
  int s = 0;
  int e = number / 2;
  int mid = s + (e - s) / 2;
  int ans = 0;
  while (s <= e) {
    if (mid * mid == target) {
      return mid;
    } else if (mid * mid < target) {
      s = mid + 1;
      ans = mid;
    } else if (mid * mid > target) {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

int main() {
  int number = 25;
  int squareRoot = findSquareRoot(number);
  cout << "Square root is : " << squareRoot;
  return 0;
}
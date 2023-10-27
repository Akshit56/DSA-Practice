//Q) Binary search to find precise square root of a number:

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
  int number;
  cin>>number;
  int squareRoot = findSquareRoot(number);
  cout << "Square root is : " << squareRoot<<endl;
  int precision;
  cout<<"Enter precision: ";
  cin>>precision;
  double finalAns = squareRoot;
  double step = 0.1;

  for(int i=0; i<precision; i++){
    for(double j=finalAns; j*j<=number; j+=step){
      finalAns = j;
    }
    step/=10;
  }
  cout<<finalAns;
  return 0;
}
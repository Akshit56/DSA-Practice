// To print all the pairs:

#include <iostream>
#include <vector>
using namespace std;
int main() {
  int sum = 5;
  vector<int> arr{1, 3, 5, 7, 9};
  vector<int> brr{2, 4, 6, 8};
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < brr.size(); j++) {
      cout << arr[i] << "," << brr[j] << endl;
    }
  }
  return 0;
}
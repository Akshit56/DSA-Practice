// To find a unique element in a dynamic array vector
// approach 1 : use 2 loops i and j and compare their values, if same
// then make them 0 and last mein check which is not zero, that is the answer
// BEST APPROACH : use XOR (shown below - babbar dsa arrays vid 2 [35:00])

#include <iostream>
#include <vector>
using namespace std;

int unique(vector<int> arr) {
  int ans = 0;
  for (int i = 0; i < arr.size(); i++) {
    ans = ans ^ arr[i];
  }
  return ans;
}

int main() {

  int n;
  cout << "Enter the size of the array " << endl;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < arr.size(); i++) {
    cin >> arr[i];
  }

  int uniqueElement = unique(arr);
  cout << "Unique element is " << uniqueElement << endl;
  return 0;
}
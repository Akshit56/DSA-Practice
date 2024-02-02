// #include <iostream>
// #include <vector>
// using namespace std;

// void evenValues(vector<int> arr, int index, int size, vector<int> &ans)
// {

//   if (index >= size)
//   {
//     return;
//   }
//   if (arr[index] % 2 == 0)
//   {
//     ans.push_back(arr[index]);
//   }
//   evenValues(arr, index + 1, size, ans);
//   return;
// }

// int main()
// {
//   vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
//   int size = 9;
//   vector<int> ans;
//   int index = 0;
//   evenValues(arr, index, size, ans);
//   // for (int i : ans)
//   // {
//   //   cout << i << " ";
//   // }
//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i];
//   }
// }

// finding index of a number in an array
//  #include <iostream>
//  #include <vector>
//  using namespace std;

// void evenValues(vector<int> arr, int index, int size, vector<int> &ans)
// {

//   if (index >= size)
//   {
//     return;
//   }
//   ans.push_back(arr[index] * 2);
//   evenValues(arr, index + 1, size, ans);
//   return;
// }

// int main()
// {
//   vector<int> arr{10, 20, 30, 40, 50};
//   int size = 5;
//   vector<int> ans;
//   int index = 0;
//   evenValues(arr, index, size, ans);
//   // for(int i:ans){
//   //     cout<<i;
//   // }
//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i] << " ";
//   }
// }

// printing digits of a number
#include <iostream>
#include <vector>
using namespace std;

void showDigits(int n)
{
  if (n == 0)
    return;
  int digit = n % 10;
  n /= 10;
  showDigits(n);
  cout << digit << " ";
}

int main()
{
  int n;
  cin >> n;
  showDigits(n);
}

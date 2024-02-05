#include <iostream>
using namespace std;

bool checkSort(int arr[], int size, int index)
{

  if (index > size)
  {
    return true;
  }
  if (arr[index] >= arr[index - 1])
  {
    checkSort(arr, size, index + 1);
  }
  else
  {
    return false;
  }
};

int main()
{

  int arr[] = {
      1,
      2,
      3,
      4,
      5,
  };
  int size = 5;
  int index = 1;
  bool ans = checkSort(arr, size, index);
  if (ans)
  {
    cout << "Sorted";
  }
  else
  {
    cout << "Not sorted";
  }
  return 0;
}
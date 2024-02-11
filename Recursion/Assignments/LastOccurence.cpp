#include <iostream>
using namespace std;

int lastOccurence(string str, char target, int index, int &ans)
{
  // Base case
  if (index < 0)
    return ans;
  // Recursie call
  if (str[index] == target)
  {
    ans = index;
    return ans;
  }
  else
  {
    lastOccurence(str, target, index - 1, ans);
  }
}

int main()
{
  string str;
  cin >> str;
  char target;
  cin >> target;
  int ans = -1;

  lastOccurence(str, target, str.size() - 1, ans);
  cout << ans;
}
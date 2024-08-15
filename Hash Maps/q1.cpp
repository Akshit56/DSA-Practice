#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

  string a = "Lovebabbar";
  unordered_map<char, int> m;
  for (int i = 0; i < a.length(); i++)
  {
    m[a[i]]++;
  }

  for (auto i : m)
  {
    cout << i.first << " : " << i.second << endl;
  }
}
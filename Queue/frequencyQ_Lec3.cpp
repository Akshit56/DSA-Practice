#include <iostream>
#include <queue>
using namespace std;

void printFirstNonRepeatingChar(string &str, queue<char> &q, int *freq)
{
  for (int i = 0; i < str.length(); i++)
  {
    char ch = str[i];
    q.push(ch);
    freq[ch - 'a']++;
  }
  while (!q.empty())
  {
    char temp = q.front();
    if (freq[temp - 'a'] > 1)
    {
      q.pop();
    }
    else
    {
      cout << temp << "->";
      break;
    }
  }
}

int main()
{
  string str = "facfdcad";
  queue<char> q;
  int freq[26] = {0};
  printFirstNonRepeatingChar(str, q, freq);
}
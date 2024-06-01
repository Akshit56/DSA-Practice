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
    if (freq[temp - 'a'] == 1)
    {
      cout << temp;
      break;
    }
    else
    {
      q.pop();
    }
    if (q.empty())
    {
      cout << "No non-repeating character found";
    }
  }
}

int main()
{
  string str = "facfdca";
  queue<char> q;
  int freq[26] = {0};
  printFirstNonRepeatingChar(str, q, freq);
}
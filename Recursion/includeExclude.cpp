#include <iostream>
using namespace std;

void findSubsequence(string str, string output, int index)
{
  if (index >= str.length())
  {
    cout << "-> " << output << endl;
    return;
  }
  char ch = str[index];
  findSubsequence(str, output, index + 1);
  output.push_back(ch);
  findSubsequence(str, output, index + 1);
}

int main()
{

  string str = "abc";
  string output = "";
  int index = 0;
  findSubsequence(str, output, index);
}
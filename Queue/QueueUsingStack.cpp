#include <iostream>
#include <stack>
#include <iostream>
using namespace std;

int main()
{
  stack<int> s1;
  stack<int> s2;
  s1.push(1);
  s1.push(2);
  s1.push(3);
  while (!s1.empty())
  {
    int temp = s1.top();
    s1.pop();
    s2.push(temp);
  }
  while (!s2.empty())
  {
    int temp = s2.top();
    s2.pop();
    cout << temp << ' ';
  }
}
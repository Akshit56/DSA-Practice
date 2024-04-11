// middle element using stack

#include <iostream>
#include <stack>
using namespace std;

void midFinder(stack<int> &s, int &totalsize)
{
  if (s.size() == 0)
  {
    cout << "Stack is empty";
    return;
  }
  if (s.size() == totalsize / 2 + 1)
  {
    cout << s.top();
    return;
  }
  s.pop();
  midFinder(s, totalsize);
}

int main()
{

  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);
  s.push(70);
  int totalsize = s.size();
  midFinder(s, totalsize);
}
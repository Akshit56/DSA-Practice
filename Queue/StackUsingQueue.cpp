#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  for (int i = 0; i < q.size() - 1; ++i)
  {
    int temp = q.front();
    q.pop();
    q.push(temp);
  }
  while (!q.empty())
  {
    int temp = q.front();
    q.pop();
    cout << temp << " ";
  }
}
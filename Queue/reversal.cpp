#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reversal(queue<int> &q)
{
  stack<int> st;
  while (!q.empty())
  {
    int front = q.front();
    q.pop();
    st.push(front);
  }
  while (!st.empty())
  {
    int front = st.top();
    st.pop();
    q.push(front);
  }
}

int main()
{
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);
  reversal(q);
  while (!q.empty())
  {
    int front = q.front();
    q.pop();
    cout << front << " ";
  }
  return 0;
}

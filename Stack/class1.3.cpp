#include <iostream>
#include <stack>
using namespace std;

void insertAtLast(stack<int> &st, int element)
{
  if (st.empty())
  {
    st.push(element);
  }
  int top = st.top();
  st.pop();
  insertAtLast(st, element);
  st.push(top);
}

int main()
{

  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  int element = 400;
  insertAtLast(st, element);
  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
}
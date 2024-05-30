#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int element)
{
  if (st.empty())
  {
    st.push(element);
    return; // Add a return statement after pushing the element
  }
  int temp = st.top();
  st.pop();
  insertAtBottom(st, element);
  st.push(temp);
}

void revStack(stack<int> &st)
{
  if (st.empty())
  {
    return;
  }
  int temp = st.top();
  st.pop();

  revStack(st);

  insertAtBottom(st, temp);
}

int main()
{

  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);

  // revStack(st);

  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
  return 0;
}

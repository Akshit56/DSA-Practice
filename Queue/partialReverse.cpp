#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
  int k;
  cout << "Enter how many first numbers you want to reverse : ";
  cin >> k;
  stack<int> st;
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  // q.push(60);

  if (k > q.size() || k == 0)
  {
    cout << "Invalid";
  }

  for (int i = 0; i < k; i++)
  {
    int temp = q.front();
    q.pop();
    st.push(temp);
  }

  while (!st.empty())
  {
    int temp = st.top();
    st.pop();
    q.push(temp);
  }

  for (int i = 0; i < q.size() - k; i++)
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
#include <iostream>
#include <queue>
using namespace std;

void interleaveQueue(queue<int> &first)
{
  int size = first.size();
  queue<int> second;
  for (int i = 0; i < size / 2; i++)
  {
    int temp = first.front();
    first.pop();
    second.push(temp);
  }
  for (int i = 0; i < size / 2; i++)
  {
    int temp = second.front();
    second.pop();
    first.push(temp);

    temp = first.front();
    first.pop();
    first.push(temp);
  }
  return;
}

int main()
{
  queue<int> first;
  first.push(10);
  first.push(20);
  first.push(30);
  first.push(40);
  first.push(50);
  first.push(60);

  interleaveQueue(first);

  while (!first.empty())
  {
    int temp = first.front();
    first.pop();
    cout << temp << " ";
  }
}
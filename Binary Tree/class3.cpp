#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int data)
  {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *createTree()
{
  cout << "Enter the value for Node : ";
  int value;
  cin >> value;
  if (value == -1)
    return NULL;
  Node *root = new Node(value);
  root->left = createTree();
  root->right = createTree();
  return root;
}

int main()
{

  return 0;
}
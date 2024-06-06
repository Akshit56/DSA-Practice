#include <iostream>
#include <queue>
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
  cout << "Enter the value of node : ";
  int data;
  cin >> data;
  if (data == -1)
  {
    return NULL;
  }
  Node *root = new Node(data);
  root->left = createTree();
  root->right = createTree();
  return root;
}

void levelOrderTraversal(Node *root)
{
  if (root == NULL)
    return;

  queue<Node *> q;
  q.push(root);

  while (q.size() > 1)
  {
    Node *current = q.front();
    q.pop();

    if (current == NULL)
    {
      cout << endl;
      q.push(NULL);
    }
    else
    {
      cout << current->data << " ";

      if (current->left != NULL)
        q.push(current->left);

      if (current->right != NULL)
        q.push(current->right);
    }
  }
}

int main()
{
  Node *root = createTree();
  levelOrderTraversal(root);
}

// Make a tree from preorder and inorder traversal given to you{adobe q}

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  int left;
  int right;

  Node(int data)
  {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

int main()
{
  int preOrder[] = {2, 8, 10, 6, 4, 12};
  int inOrder[] = {10, 8, 6, 2, 4, 12};
  int preOrderIndex = 0;
  int inOrderStart = 0;
  int inOrderEnd = 5;
  return 0;
}
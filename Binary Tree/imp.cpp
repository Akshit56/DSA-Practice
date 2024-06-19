// Make a tree from preorder and inorder traversal given to you{adobe q}

#include <iostream>
#include <queue>
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

void levelOrderTraversal(Node *root)
{
  queue<Node *> q;
  q.push(root);
  q.push(NULL);

  // queue traversal
  while (q.size() > 1)
  {

    Node *front = q.front();
    q.pop();

    if (front == NULL)
    {
      cout << endl;
      q.push(NULL);
    }

    else
    {

      cout << front->data << " ";

      if (front->left != NULL)
      {
        q.push(front->left);
      }
      if (front->right != NULL)
      {
        q.push(front->right);
      }
    }
  }
}

int searchInorder(int inOrder[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (inOrder[i] == target)
      return i;
  }
}

Node *createTreeUsingPreAndInOrderTraversal(int preOrder[], int inOrder[], int &preOrderIndex, int inOrderStart, int inOrderEnd, int size)
{

  if (preOrderIndex >= size || inOrderStart > inOrderEnd)
    return NULL;

  int element = preOrder[preOrderIndex];
  preOrderIndex++;

  Node *root = new Node(element);

  int position = searchInorder(inOrder, size, element);

  root->left = createTreeUsingPreAndInOrderTraversal(preOrder, inOrder, preOrderIndex, inOrderStart, position - 1, size);

  root->right = createTreeUsingPreAndInOrderTraversal(preOrder, inOrder, preOrderIndex, inOrderStart, position + 1, size);

  return root;
}

int main()
{
  int preOrder[] = {2, 8, 10, 6, 4, 12};
  int inOrder[] = {10, 8, 6, 2, 4, 12};
  int preOrderIndex = 0;
  int inOrderStart = 0;
  int inOrderEnd = 5;
  int size = 6;
  Node *root = createTreeUsingPreAndInOrderTraversal(preOrder, inOrder, preOrderIndex, inOrderStart, inOrderEnd, size);

  cout << "printing" << endl;
  levelOrderTraversal(root);
  return 0;
}
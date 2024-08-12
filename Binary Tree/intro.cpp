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
    this->right = NULL;
    this->left = NULL;
  }
};

Node *createTree()
{
  cout << "Enter data : ";
  int data;
  cin >> data;
  // cout << "Root Node : " << data << endl;
  if (data == -1)
    return NULL;

  Node *root = new Node(data);

  // Left subtree:
  cout << "Left Node :" << root->data << endl;
  root->left = createTree();

  // Right subtree:
  cout << "Right Node : " << root->data << endl;
  root->right = createTree();
  return root;
}

void preOrderTraversal(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  // TC of all 3 is O(n)
  // NLR
  // 1.N
  cout << root->data << " ";
  // L
  preOrderTraversal(root->left);
  // R
  preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root)
{
  if (root == NULL)
    return;
  // LNR
  // 1.L
  inOrderTraversal(root->left);
  // 2.N
  cout << root->data << " ";
  // 3.R
  inOrderTraversal(root->right);
}
// TC OF ALL 3 Preorder, inorder, postorder is O(N)
void postOrderTraversal(Node *root)
{
  if (root == NULL)
    return;
  // LRN
  // 1.L
  postOrderTraversal(root->left);
  // 2.R
  postOrderTraversal(root->right);
  // 3.N
  cout << root->data << " ";
}

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

int main()
{
  Node *root = createTree();

  cout << "pre-order traversal : ";
  preOrderTraversal(root);
  cout << endl;

  cout << "in-order traversal : ";
  inOrderTraversal(root);
  cout << endl;

  cout << "post-order traversal : ";
  postOrderTraversal(root);
  cout << endl;

  cout << "level-order traversal : ";
  levelOrderTraversal(root);
  cout << endl;
}
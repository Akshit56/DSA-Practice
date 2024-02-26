// creation of LL

#include <iostream>
using namespace std;

class Node
{

public:
  int data;
  Node *next;

  Node()
  {
    this->data = 0;
    this->next = NULL;
    cout << "Default ctor" << endl;
  }

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
    cout << "param ctor";
  }
};

void printNode(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{

  Node a;                     // static Node creation, default constructor cuz no parameter passed
  Node *first = new Node(10); // Dynamic Node creation
  Node *second = new Node(20);
  Node *third = new Node(30);
  Node *fourth = new Node(40);
  Node *fifth = new Node(50);

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;

  Node *head = first;
  cout << "Printing LL" << endl;
  printNode(head);
  return 0;
}
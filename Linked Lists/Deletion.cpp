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
  }

  Node(int data)
  {
    this->data = data;
  }
};

int getLength(Node *&head)
{
  int count = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}

void insertAtHead(Node *&head, int data)
{
  Node *temp = new Node(data);
  temp->next = head;
  head = temp;
}

void printNode(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
}

void deleteNode(Node *&head, Node *&tail, int position)
{
  if (head == tail)
  {
    head = NULL;
    tail = NULL;
  }

  if (head == NULL)
  {
    cout << "not possible";
  }

  // first node deletion
  if (position == 1)
  {
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }

  // last position deleted
  else if (position > getLength(head))
  {
    Node *temp = head;
    while (temp->next != tail)
    {
      temp = temp->next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;
  }

  // middle me node deletion
  else
  {

    Node *prev = NULL;
    Node *curr = head;
    while (position != 1)
    {
      prev = curr;
      curr = curr->next;
      position--;
    }
    prev->next = curr->next;
    curr = NULL;
    delete curr;
  }
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  insertAtHead(head, 50);
  insertAtHead(head, 40);
  insertAtHead(head, 30);
  insertAtHead(head, 20);
  insertAtHead(head, 10);
  printNode(head);
  cout << endl;
  deleteNode(head, tail, 5);
  printNode(head);
  return 0;
}
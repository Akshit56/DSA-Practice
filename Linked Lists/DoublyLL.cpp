#include <iostream>
using namespace std;

class Node
{

public:
  int data;
  Node *prev;
  Node *next;

  Node()
  {
    this->prev = NULL;
    this->next = NULL;
  }

  Node(int data)
  {
    this->data = data;
    this->prev = NULL;
    this->next = NULL;
  }
};

int getLength(Node *&head)
{
  Node *temp = head;
  int count = 0;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
  if (head == NULL)
  {
    Node *temp = new Node(data);
    head = temp;
    tail = temp;
  }
  else
  {
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
  }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
  Node *temp = new Node(data);
  tail->next = temp;
  temp->prev = tail;
  tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
  Node *prev = NULL;
  Node *curr = head;
  while (position != 1)
  {
    prev = curr;
    curr = curr->next;
    position--;
  }
  Node *temp = new Node(data);
  prev->next = temp;
  temp->prev = prev;
  temp->next = curr;
  curr->prev = temp;
}

void printNode(Node *&head)
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
  int length = getLength(head);
  if (head == NULL)
  {
    cout << "Not possible to delete";
  }
  if (head == tail)
  {
    Node *temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
  }
  if (position == 1)
  {
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    head->prev = NULL;
    delete temp;
  }

  else if (position == length)
  {
    Node *temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    temp->prev = NULL;
    delete temp;
  }
  else
  {
    Node *prev = NULL;
    Node *curr = head;
    // Node *next = head->next;
    while (position != 1)
    {
      prev = curr;
      curr = curr->next;
      position--;
    }
    Node *next = curr->next;
    prev->next = next;
    curr->prev = NULL;
    curr->next = NULL;
    next->prev = prev;
    delete curr;
  }
}

int main()
{

  Node *head = NULL;
  Node *tail = NULL;
  insertAtHead(head, tail, 50);
  insertAtHead(head, tail, 40);
  insertAtHead(head, tail, 30);
  insertAtHead(head, tail, 20);
  insertAtHead(head, tail, 10);
  insertAtTail(head, tail, 60);
  insertAtPosition(head, tail, 100, 2);
  insertAtTail(head, tail, 70);
  printNode(head);
  cout << endl;
  deleteNode(head, tail, 5);
  printNode(head);

  return 0;
}
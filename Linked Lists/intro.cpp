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
    // cout << "Default ctor" << endl;
  }

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
    // cout << "param ctor";
  }
};

void insertAtTail(Node *&tail, int data)
{
  if (tail == NULL)
  {
    Node *temp = new Node(data);
    tail = temp;
  }

  else
  {
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
  }
}

// here we know that tail is at fifth index, now lets create tail for generic code:

void createTail(Node *&tail, Node *head)
{
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  // jab ye loop khatam hoga tab temp pointer last nde pe khada hoga, then equate it to tail
  tail = temp;
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

    // create a new node
    Node *temp = new Node(data);
    // attach new node to head node
    temp->next = head;
    // update head
    head = temp;
  }
}

void printLL(Node *head)
{
  int length = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " -> ";
    length++;
    temp = temp->next;
  }
  cout << endl;
  cout << "Length of LL is : " << length << endl;
}

int getLength(Node *head)
{
  Node *temp = head;
  int length = 0;
  while (temp != NULL)
  {
    length++;
    temp = temp->next;
  }
  return length;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int pos)
{
  int length = getLength(head);
  Node *temp = new Node(data);
  Node *prev = NULL;
  Node *curr = head;
  if (pos <= 1)
  {
    insertAtHead(head, tail, data);
  }
  else if (pos > length)
  {
    insertAtTail(tail, data);
  }

  else
  {

    while (pos != 1)
    {
      prev = curr;
      curr = curr->next;
      pos--;
    }
    prev->next = temp;
    temp->next = curr;

    if (curr == NULL)
    {
      tail = temp;
    }
  }
}

int main()
{

  Node *head = NULL;
  Node *tail = NULL;

  insertAtHead(head, tail, 10);
  insertAtHead(head, tail, 20);
  insertAtHead(head, tail, 30);

  insertAtTail(tail, 50);

  insertAtPosition(head, tail, 100, 6);

  // Node a;                     // static Node creation, default constructor cuz no parameter passed
  // Node *first = new Node(10); // Dynamic Node creation
  // Node *second = new Node(20);
  // Node *third = new Node(30);
  // Node *fourth = new Node(40);
  // Node *fifth = new Node(50);

  // first->next = second;
  // second->next = third;
  // third->next = fourth;
  // fourth->next = fifth;

  // Node *head = first;
  // Node *tail = fifth;
  // cout << "Printing LL :" << endl;
  // printLL(head);
  // insertAtHead(head, tail, 0);
  // insertAtTail(tail, 60);
  printLL(head);
  return 0;
}
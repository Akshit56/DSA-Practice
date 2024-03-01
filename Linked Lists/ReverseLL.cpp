#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node()
  {
    next->data = 0;
    this->next = NULL;
  }
  Node(int data)
  {
    this->data = data;
  }
};

void insertAtHead(Node *&head, int data)
{
  Node *temp = new Node(data);
  temp->next = head;
  head = temp;
}

void printNode(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
}

void reverse(Node *&head)
{
  Node *prev = NULL;
  Node *curr = head;
  while (curr != NULL)
  {
    Node *temp = curr->next; // cuz next line me curr ke aage ka data lost ho rha hai isliye save kar liya
    curr->next = prev;
    prev = curr;
    curr = temp;
  }
  head = prev; // prev first node hai ab
               // curr is pointing at NULL
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
  reverse(head);
  cout << endl;
  printNode(head);
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  Node *prev;
  int val;
  Node *next;

  Node(int val) {
    this->prev = NULL;
    this->val = val;
    this->next = NULL;
  }
};

void printForward(Node *head) {
  Node *temp = head;

  while (temp != NULL) {
    cout << temp->val << " ";
    temp = temp->next;
  }

  cout << endl;
}
void printBackward(Node *tail) {
  Node *temp = tail;

  while (temp != NULL) {
    cout << temp->val << " ";
    temp = temp->prev;
  }

  cout << endl;
}

void insertAtHead(Node *&head, Node *&tail, int val) {

  Node *newNode = new Node(val);
  if (head == NULL) {
    head = tail = newNode;
    return;
  }

  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}

int main() {
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *tail = new Node(40);

  head->next = a;
  a->prev = head;
  a->next = b;
  b->prev = a;
  b->next = tail;
  tail->prev = b;

  insertAtHead(head, tail, 100);
  printForward(head);
  printBackward(tail);
  return 0;
}
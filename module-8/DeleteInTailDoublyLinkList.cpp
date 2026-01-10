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

void deleteAtTail(Node *&head, Node *&tail) {
  Node *deleteNode = tail;

  tail = tail->prev;
  delete deleteNode;
  if (tail == NULL) {
    head = NULL;
    return;
  }
  tail->next = NULL;
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

  deleteAtTail(head, tail);
  printForward(head);
  printBackward(tail);
  return 0;
}
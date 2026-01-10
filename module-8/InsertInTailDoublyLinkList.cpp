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

void insertAtTail(Node *&head, Node *&tail, int val) {
  Node *newNode = new Node(val);

  if (head == NULL) {
    head = tail = newNode;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
}

int main() {
  Node *head = NULL;
  // Node *a = new Node(20);
  // Node *b = new Node(30);
  Node *tail = NULL;

  // head->next = a;
  // a->prev = head;
  // a->next = b;
  // b->prev = a;
  // b->next = tail;
  // tail->prev = b;

  insertAtTail(head, tail, 50);
  printForward(head);
  printBackward(tail);
  return 0;
}
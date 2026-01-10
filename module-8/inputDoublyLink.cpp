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
  Node *tail = NULL;

  int val;
  while (true) {
    cin >> val;
    if (val == -1) {
      break;
    }
    insertAtTail(head, tail, val);
  }

  printForward(head);
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int val;
  Node *next;

  Node(int val) {
    this->val = val;
    this->next = NULL;
  }
};

void insertAtTail(Node *&head, Node *&tail, int val) {
  Node *newNode = new Node(val);

  if (head == NULL) {
    head = tail = newNode;
    return;
  }

  tail->next = newNode;
  tail = newNode;
}

int print_max(Node *head) {
  if (head == NULL)
    return INT_MIN; // safety

  int ma = head->val;
  head = head->next;

  while (head) {
    ma = max(ma, head->val);
    head = head->next;
  }

  return ma;
}

int main() {
  Node *head = NULL;
  Node *tail = NULL;

  int val;
  while (cin >> val && val != -1) {
    insertAtTail(head, tail, val);
  }

  int res = print_max(head);

  cout << res << endl;

  return 0;
}
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

void insert_at_tail(Node *&head, Node *&tail, int val) {
  Node *newNode = new Node(val);

  if (head == NULL) {
    head = newNode;
    tail = newNode;
    return;
  }

  tail->next = newNode;
  tail = tail->next;
}

void print_list(Node *head) {
  Node *temp = head;

  while (temp != NULL) {
    cout << temp->val << endl;
    temp = temp->next;
  }
}

void delete_any_position(Node *&head, int idx) {

  Node *temp = head;
  for (int i = 1; i < idx; i++) {
    temp = temp->next;
  }

  Node *deleteNode = temp->next;
  temp->next = temp->next->next;

  delete deleteNode;
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
    insert_at_tail(head, tail, val);
  }
  int choose;
  cin >> choose;
  delete_any_position(head, choose);
  print_list(head);
  return 0;
}
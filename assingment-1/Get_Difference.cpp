#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  long long int val;
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

int max_value(Node *head) {
  if (head == NULL) {
    return INT_MIN;
  }

  long long int mx = head->val;
  head->next;
  while (head) {
    mx = max(mx, head->val);
    head = head->next;
  }

  return mx;
}
int min_value(Node *head) {
  if (head == NULL) {
    return INT_MIN;
  }

  long long int mn = head->val;
  head->next;
  while (head) {
    mn = min(mn, head->val);
    head = head->next;
  }
  return mn;
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

  int def = max_value(head) - min_value(head);

  cout << def << endl;
  return 0;
}
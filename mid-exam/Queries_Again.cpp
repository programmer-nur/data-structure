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

void insertAtAnyPosition(Node *&head, Node *&tail, int idx, int val) {
  Node *newNode = new Node(val);
  if (idx == 0) {
    newNode->next = head;
    if (head != NULL)
      head->prev = newNode;
    head = newNode;
    if (tail == NULL)
      tail = newNode;
    return;
  }

  Node *tmp = head;
  for (int i = 1; i < idx; i++) {
    if (tmp == NULL)
      return;
    tmp = tmp->next;
  }

  newNode->next = tmp->next;
  newNode->prev = tmp;
  if (tmp->next != NULL)
    tmp->next->prev = newNode;
  tmp->next = newNode;

  if (newNode->next == NULL)
    tail = newNode;
}

void printForward(Node *head) {
  Node *temp = head;

  cout << "L" << " " << "->";
  while (temp != NULL) {
    cout << " " << temp->val;
    temp = temp->next;
  }

  cout << endl;
}

void printBackward(Node *tail) {
  Node *temp = tail;

  cout << "R" << " " << "->";
  while (temp != NULL) {
    cout << " " << temp->val;
    temp = temp->prev;
  }

  cout << endl;
}

int getSize(Node *head) {
  int count = 0;
  Node *tmp = head;

  while (tmp != nullptr) {
    count++;
    tmp = tmp->next;
  }

  return count;
}
int main() {
  Node *head = NULL;
  Node *tail = NULL;

  int q;
  cin >> q;

  while (q--) {
    int x, v;
    cin >> x >> v;

    int size = getSize(head);
    if (x > size) {
      cout << "Invalid" << endl;
      continue;
    }
    insertAtAnyPosition(head, tail, x, v);
    printForward(head);
    printBackward(tail);
  }

  return 0;
}
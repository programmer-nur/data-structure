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
                                                                         
void insertAtAnyPos(Node *&head, Node *&tail, int idx, int val, int size) { 

  if (idx < 0 || idx > size)     
    return;

  Node *newNode = new Node(val);
  // for head insert
  if (idx == 0) {
    newNode->next = head;
    head = newNode;
    if (size == 0) {
      tail = newNode;
    }
    return;
  }

  Node *temp = head;
  for (int i = 1; i < idx; i++) {
    temp = temp->next;
  }

  newNode->next = temp->next;
  temp->next = newNode;
  // update tail if insert in last or tail postion
  if (idx == size) {
    tail = newNode;
  }
}

int getSize(Node *&head) {
  int count = 0;
  Node *temp = head;
  while (temp) {
    count++;
    temp = temp->next;
  }

  return count;
}

void print_list(Node *head) {
  while (head) {
    cout << head->val << " ";
    head = head->next;
  }
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

  int res = getSize(head);
  int q;
  cin >> q;

  while (q--) {
    int pos, value;
    cin >> pos >> value;

    if (pos < 0 || pos > res) {
      cout << "Invalid";
    } else {
      insertAtAnyPos(head, tail, pos, value, res);
      res++;
      print_list(head);
    }
    cout << endl;
  }
  return 0;
}
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
    cout << temp->val << " ";
    temp = temp->next;
  }
}
void find_dup(Node *&head, bool &isFound) {

  int feq[101] = {0};
  Node *temp = head;
  while (temp != NULL) {
    feq[temp->val]++;

    if (feq[temp->val] > 1) {
      isFound = true;
      break;
    };
    temp = temp->next;
  }
};

void remove_dup(Node *head) {
  int feq[1001] = {0};
  
  Node *temp = head;
  Node *temp2 = NULL;

  while (temp != NULL) {
    if (feq[temp->val] == 0) {
      feq[temp->val]++;
      temp2 = temp;
      temp = temp->next;
    } else {
      temp2->next = temp->next;
      delete temp;
      temp = temp2->next;
    }
  };
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
  int choose;
  cin >> choose;
  remove_dup(head);
  print_list(head);
  return 0;
}
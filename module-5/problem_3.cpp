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

void print_middle(Node *head) {
  if (head == NULL)
    return;

  Node *slow = head;
  Node *fast = head;
  Node *prev = NULL;

  while (fast != NULL && fast->next != NULL) {
    fast = fast->next->next;
    prev = slow;
    slow = slow->next;
  }

  // Even number of nodes → two middle values
  if (fast == NULL) {
    cout << prev->val << " " << slow->val << endl;
  }
  // Odd number of nodes → one middle value
  else {
    cout << slow->val << endl;
  }
}

int main() {

  Node *head = new Node(5);
  head->next = new Node(4);
  head->next->next = new Node(3);
  head->next->next->next = new Node(5);
  head->next->next->next->next = new Node(8);
  head->next->next->next->next->next = new Node(12);
  head->next->next->next->next->next->next = new Node(12);
  head->next->next->next->next->next->next->next = new Node(9);

  print_middle(head);

  return 0;
}
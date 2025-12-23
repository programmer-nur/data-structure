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

void is_sorted(Node *head, bool &isSort) {
  if (head == NULL || head->next == NULL) {
    isSort = true;
    return;
  }

  Node *temp = head;

  while (temp->next != NULL) {
    if (temp->val > temp->next->val) {
      isSort = false;
      return;
    }
    temp = temp->next;
  }

  isSort = true;
}

int main() {

  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(6);
  head->next->next->next = new Node(4);

  bool isSort = false;
  is_sorted(head, isSort);
  if (isSort)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}
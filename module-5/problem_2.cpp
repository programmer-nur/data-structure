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
int main() {

  Node *head = new Node(5);
  Node *two = new Node(4);
  Node *three = new Node(3);
  Node *four = new Node(5);
  Node *five = new Node(8);
  Node *six = new Node(12);
  Node *tail = new Node(9);

  head->next = two;
  two->next = three;
  three->next = four;
  four->next = five;
  five->next = six;
  six->next = tail;

  bool isFound = false;
  find_dup(head, isFound);
  if (isFound == true) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
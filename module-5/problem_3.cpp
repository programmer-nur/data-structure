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

void print_middle(Node *&head) {

  Node *temp = head;
  while (temp != NULL) {
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

  print_middle(head);

  return 0;
}
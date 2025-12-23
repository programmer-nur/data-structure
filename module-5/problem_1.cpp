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

void count_total_node(Node *head, int &count) {

  while (head != NULL) {
    count++;
    head = head->next;
  }
};
int main() {

  Node *head = new Node(5);
  Node *two = new Node(5);
  Node *three = new Node(5);
  Node *four = new Node(5);
  Node *five = new Node(5);
  Node *six = new Node(5);
  Node *tail = new Node(5);

  head->next = two;
  two->next = three;
  three->next = four;
  four->next = five;
  five->next = six;
  six->next = tail;

  int count = 0;
  count_total_node(head, count);
  cout << count << endl;
  return 0;
}
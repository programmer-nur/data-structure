#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  long long int val;
  Node *next;

  Node(long long int val) {
    this->val = val;
    this->next = NULL;
  }
};

void insertAtHead(Node *&head, Node *&tail, long long int val) {
  Node *newNode = new Node(val);
  newNode->next = head;
  head = newNode;
  if (tail == NULL) {
    tail = newNode;
  }
}

void insertAtTail(Node *&head, Node *&tail, long long int val) {
  Node *newNode = new Node(val);
  if (head == NULL) {
    head = tail = newNode;
    return;
  }

  tail->next = newNode;
  tail = newNode;
}

void deleteAtHead(Node *&head, Node *&tail) {
  if (head == NULL) {
    return;
  }
  Node *deleteNote = head;
  head = head->next;
  if (head == NULL) {
    tail = NULL;
  }
  delete deleteNote;
}

void deleteAtAnyPostion(Node *&head, Node *&tail, long long int pos) {
  if (head == NULL) {
    return;
  }
  Node *temp = head;

  for (int i = 0; i < pos - 1 && temp->next != NULL; i++) {
    temp = temp->next;
  }

  if (temp->next == NULL) {
    return;
  }

  Node *deleteNote = temp->next;
  temp->next = temp->next->next;

  if (deleteNote == tail) {
    tail = temp;
  }

  delete deleteNote;
}

void insertAtAnyPos(Node *&head, Node *&tail, int idx, long long int val,
                    int &size) {

  if (idx == 0) {
    insertAtHead(head, tail, val);
    size++;
    return;
  } else if (idx == 1) {
    insertAtTail(head, tail, val);
    size++;
    return;
  } else if (idx == 2 && val < size) {
    if (val == 0) {
      deleteAtHead(head, tail);
      size--;
    } else {
      deleteAtAnyPostion(head, tail, val);
      size--;
    }
  }
  return;
}

void printList(Node *head) {
  if (head == NULL) {
    return;
  }
  cout << head->val;
  head = head->next;
  while (head) {
    cout << " " << head->val;
    head = head->next;
  }
}

int main() {
  Node *head = NULL;
  Node *tail = NULL;

  int res = 0;
  int q;
  cin >> q;
  while (q--) {
    int x;
    long long int v;
    cin >> x >> v;

    insertAtAnyPos(head, tail, x, v, res);
    printList(head);

    cout << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void reverse_linked_list(Node* &head, Node* curr) {
    // base case
    if (curr->next == NULL) {
        head = curr;
        return;
    }

    reverse_linked_list(head, curr->next);

    curr->next->next = curr;
    curr->next = NULL;
}

void print_list(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    
    Node* oldHead = head;

    int val;
    while (cin >> val && val != -1) {
        insert_at_tail(head, tail, val);
    }
    reverse_linked_list(head, head);  
    tail = oldHead;

    print_list(head);

    return 0;
}

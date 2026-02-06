#include <bits/stdc++.h>
using namespace std;
class Node {
public:
  int val;
  Node *left;
  Node *right;

  Node(int val) {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *inputTree() {
  int val;
  cin >> val;
  Node *root;
  if (val == -1)
    root = NULL;
  else
    root = new Node(val);

  queue<Node *> q;
  if (root)
    q.push(root);

  while (!q.empty()) {
    Node *p = q.front();
    q.pop();

    int l, r;
    cin >> l >> r;

    Node *myLeft, *myRight;

    if (l == -1)
      myLeft = NULL;
    else
      myLeft = new Node(l);
    if (r == -1)
      myRight = NULL;
    else
      myRight = new Node(r);

    p->left = myLeft;
    p->right = myRight;

    if (p->left)
      q.push(p->left);
    if (p->right)
      q.push(p->right);
  }

  return root;
}

void leftBoundary(Node *root, vector<int> &res) {
  Node *temp = root->left;
  while (temp != NULL) {
    res.push_back(temp->val);
    if (temp->left)
      temp = temp->left;
    else
      temp = temp->right;
  }
}

void rightBoundary(Node *root, vector<int> &res) {
  Node *temp = root->right;
  while (temp != NULL) {
    res.push_back(temp->val);
    if (temp->right)
      temp = temp->right;
    else
      temp = temp->left;
  }
}

int main() {
  vector<int> left, right;
  Node *root = inputTree();
  if (root == NULL)
    return 0;

  leftBoundary(root, left);
  rightBoundary(root, right);

  for (int i = left.size() - 1; i >= 0; i--) {
    cout << left[i] << " ";
  }

  cout << root->val << " ";
  for (int i = 0; i < right.size(); i++) {
    cout << right[i] << " ";
  }
  return 0;
}
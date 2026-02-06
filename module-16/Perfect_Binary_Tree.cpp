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

int maxDepth(Node *root) {
  if (root == NULL)
    return 0;

  if (root->left == NULL && root->right == NULL)
    return 1;

  int l = maxDepth(root->left);
  int r = maxDepth(root->right);

  return max(l, r) + 1;
}
int countNotes(Node *root) {
  if (root == NULL)
    return 0;
  int l = countNotes(root->left);
  int r = countNotes(root->right);

  return l + r + 1;
}

int main() {
  Node *root = inputTree();
  int totalNotes = countNotes(root);
  int d = pow(2, maxDepth(root)) - 1;

  if (d == totalNotes)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
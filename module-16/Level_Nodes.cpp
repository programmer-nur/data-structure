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

void leafNotes(Node *root, vector<int> &v) {
  if (root == NULL)
    return;
  if (root->left == NULL && root->right == NULL)
    v.push_back(root->val);
  leafNotes(root->right, v);
  leafNotes(root->left, v);
}

void nodeLevel(Node *root, vector<int> &v, int levelVal, int &count) {
  queue<pair<Node *, int>> q;

  if (root)
    q.push({root, 0});

  while (!q.empty()) {
    pair<Node *, int> parent = q.front();
    q.pop();

    Node *node = parent.first;
    int level = parent.second;
    if (level == levelVal)
      v.push_back(node->val);

    if (node->left)
      q.push({node->left, level + 1});
    if (node->right)
      q.push({node->right, level + 1});
    count = level;
  }
}

int main() {
  vector<int> res;
  Node *root = inputTree();
  int levelVal;
  cin >> levelVal;
  int count = 0;
  nodeLevel(root, res, levelVal, count);

  if (levelVal > count) {
    cout << "Invalid" << endl;
  } else {
    for (int val : res) {
      cout << val << " ";
    }
  }

  return 0;
}
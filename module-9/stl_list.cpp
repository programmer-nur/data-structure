#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {10, 20, 30};
  list<int> l(v.begin(), v.end());

  //   for (auto it = l.begin(); it != l.end(); it++) {
  //     cout << *it << endl;
  //   }

  l.resize(6,50);
  for (int val : l) {
    cout << val << endl;
  }
  return 0;
}
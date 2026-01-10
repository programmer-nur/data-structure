#include <bits/stdc++.h>
using namespace std;

int main() {
  list<int> l = {10, 20, 30, 40, 50, 70, 30, 60, 10};
  //   l.remove(10);
  //   l.sort(greater<int>());
  l.sort();
  l.unique();
  for (int val : l) {
    cout << val << endl;
  }
  return 0;
}
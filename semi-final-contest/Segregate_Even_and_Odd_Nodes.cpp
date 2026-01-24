#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  stack<int> evenSt;
  stack<int> oddSt;
  stack<int> resQue;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x % 2 == 0) {
      evenSt.push(x);
    } else {
      oddSt.push(x);
    }
  }

  while (!oddSt.empty()) {
    resQue.push(oddSt.top());
    oddSt.pop();
  }
  while (!evenSt.empty()) {
    resQue.push(evenSt.top());
    evenSt.pop();
  }

  while (!resQue.empty()) {
    cout << resQue.top() << " ";
    resQue.pop();
  }
  return 0;
}
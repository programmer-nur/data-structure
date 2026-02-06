#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int main() {
  // max priority
  priority_queue<int> pq;
  //   min priority
  //   priority_queue<int, vector<int>, greater<int>> pq;

  pq.push(10);
  pq.push(5);
  pq.push(30);

  while (!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
  }

  return 0;
}
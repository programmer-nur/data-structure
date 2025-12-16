#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  //   O(1)
  cin >> n;

  //   O(n)
  for (int i = 0; i < n; i++) {
    cout << i << " ";
  } //   O(n)
  for (int i = 0; i < n; i++) {
    cout << i << " ";
  }

  return 0;
}
// O(n + n) == O(2n) == O(n);
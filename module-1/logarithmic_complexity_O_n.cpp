#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i * 2) {
    cout << i << endl;
  }

  return 0;
}

// kono loop ar increment jodi * diye bare (i*2) ba decrement ar jodi / hoye kome (i /2) tahole seata ke amra O(logN) logarithmic complexity boli
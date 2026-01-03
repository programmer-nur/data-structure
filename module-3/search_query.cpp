#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());
  int q;
  cin >> q;

  while (q--) {
    int val;
    cin >> val;

    bool findIt = false;
    int l = 0;
    int r = n - 1;

    while (l <= r) {
      int mid = (l + r) / 2;
      if (a[mid] == val) {
        findIt = true;
        break;
      } else if (a[mid] > val) {
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }

    if (findIt) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
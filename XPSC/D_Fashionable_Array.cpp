#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(a.begin(), a.end());

    // Already fashionable
    if ((mn + mx) % 2 == 0) {
      cout << 0 << '\n';
      continue;
    }

    // Count how many times min and max appear
    int cntMin = 0, cntMax = 0;
    for (int x : a) {
      if (x == mn)
        cntMin++;
      if (x == mx)
        cntMax++;
    }

    cout << min(cntMin, cntMax) << '\n';
  }
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main() {
  int tc = 1;
  cin >> tc;

  while (tc--) {
    int n;
    cin >> n;
    vector<int> a(n + 1);

    for (int i = 0; i <= n; i++) {
      cin >> a[i];
    }

    int mn = 1000000;

    for (int i = 0; i < n; i++) {
      int loudness = max(a[i], a[i + 1]);
      mn = min(mn, loudness);
    }

    cout << mn << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, A, B;
    cin >> n >> A >> B;

    vector<int> T(n);

    for (int i = 0; i < n; i++) {
      cin >> T[i];
    }

    bool probo = false;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
      if (T[i] < A) {
        if (!probo) {
          probo = true;
          cnt++;
        }
      } else if (T[i] > B) {
        if (probo)
          probo = false;
      }
    }

    cout << cnt << endl;
  }

  return 0;
}
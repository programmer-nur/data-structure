#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  bool isDup = false;
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    if (v[i] == v[i - 1]) {
      isDup = true;
      break;
    }
  }

  if (isDup) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
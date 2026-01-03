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
  vector<int> feq(10001, 0);

  for (int i = 0; i < n; i++) {
    int val = a[i];
    feq[val]++;
  }

  int mm = 0;
  for (int i = 1; i <= 10001; i++) {
    if (feq[i] > 0) {
      mm = max(mm, i);
    }
  }

  cout << mm;
  return 0;
}
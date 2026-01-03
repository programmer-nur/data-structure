#include <bits/stdc++.h>
using namespace std;

void recursive(vector<long long int> &ps, int n, int i) {
  if (i == n) {
    return;
  }

  long long int val = ps[i];

  recursive(ps, n, i + 1);
  cout << val << " ";
}

int main() {
  int n;
  cin >> n;

  vector<long long int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  vector<long long int> ps(n);
  ps[0] = v[0];

  for (int i = 1; i < n; i++) {
    ps[i] = ps[i - 1] + v[i];
  }

  recursive(ps, n, 0);

  return 0;
}
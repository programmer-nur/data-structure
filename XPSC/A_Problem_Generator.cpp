#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    int freq[7] = {0};
    int count = 0;
    for (char c : s) {
      freq[c - 'A']++;
    }

    for (int i = 0; i < 7; i++) {
      if (freq[i] < m)
        count += m - freq[i];
    }

    cout << count << endl;
  }

  return 0;
}
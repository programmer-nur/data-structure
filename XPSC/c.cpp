#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    // Sort the array
    sort(a.begin(), a.end());

    // Count distinct values and their frequencies
    vector<int> freq;
    int count = 1;

    for (int i = 1; i < n; i++) {
      if (a[i] == a[i - 1]) {
        count++;
      } else {
        freq.push_back(count);
        count = 1;
      }
    }
    freq.push_back(count); // last group

    // Decision
    if (freq.size() == 1) {
      cout << "YES\n";
    } else if (freq.size() > 2) {
      cout << "NO\n";
    } else {
      if (abs(freq[0] - freq[1]) <= 1)
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> freq(26, 0);

  for (char c : s) {
    freq[c - 'a']++;
  }

  bool findOne = false;
  for (char c : s) {
    if (freq[c - 'a'] > 0 && freq[c - 'a'] < 2) {
      cout << c << endl;
      findOne = true;
      break;
    }
  }

  if (!findOne) {
    cout << -1 << endl;
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<long long> freq(26, 0);

  for (char val : s) {
    freq[val - 'a']++;
  }

  for (int i = 0; i < freq.size(); i++) {
    if (freq[i] > 0) {
      cout << char('a' + i) << " : " << freq[i] << endl;
    }
  }

  return 0;
}
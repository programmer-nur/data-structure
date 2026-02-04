#include <bits/stdc++.h>
using namespace std;

// bool isAnagram(string s, string t) {
//   sort(s.begin(), s.end());
//   sort(t.begin(), t.end());

//   return s == t;
// }
bool isAnagram(string s, string t) {
  vector<int> freq1(26, 0);
  vector<int> freq2(26, 0);

  for (int i = 0; i < s.size(); i++) {
    freq1[s[i] - 'a']++;
  }
  for (int i = 0; i < t.size(); i++) {
    freq2[t[i] - 'a']++;
  }

  bool flag = true;

  for (int i = 0; i < 26; i++) {
    if (freq1[i] != freq2[i]) {
      break;
    }
  }
  return flag;
}
int main() {
  string s = "anagram";
  string t = "nagaram";
  isAnagram(s, t);

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool isChar(char c) { return c >= 'a' && c <= 'z'; }

bool isDigit(char c) { return c >= '0' && c <= '9'; }

int main() {
  string s;
  int m;

  cin >> s >> m;

  string temp = "";

  for (int i = 0; i < s.size(); i++) {
    if (isChar(s[i])) {
      temp += s[i];
    } else if (isDigit(s[i])) {
      int cnt = s[i] - '0';
      char last = temp.back();

      temp.append(cnt - 1, last);
    }
  }

  cout << temp[m - 1] << endl;
  return 0;
}
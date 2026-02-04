#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "((()))";
  stack<int> st;

  for (auto c : s) {
    if (!st.empty() && st.top() == '(' && c == ')') {
      st.pop();
    } else {
      st.push(c);
    }
  }

  return st.size();
}
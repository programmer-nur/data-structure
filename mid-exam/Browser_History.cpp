#include <bits/stdc++.h>
using namespace std;

void findOne(string s) {}

int main() {

  string s;
  list<string> history;

  while (cin >> s) {
    if (s == "end")
      break;
    history.push_back(s);
  }

  int q;
  cin >> q;
  cin.ignore();

  string check;
  while (q--) {
    string line;
    getline(cin, line);

    stringstream ss(line);
    string word;
    ss >> word;
    if (word == "visit") {
      ss >> word;

      auto it = find(history.begin(), history.end(), word);
      if (it != history.end()) {
        cout << *it << endl;
        check = word;
      } else {
        cout << "Not Available" << endl;
      }
    } else if (word == "next") {
      auto it = find(history.begin(), history.end(), check);
      auto nxt = next(it);
      if (nxt != history.end()) {
        cout << *nxt << endl;
        check = *nxt;
      } else {
        cout << "Not Available" << endl;
      }
    } else {
      auto it = find(history.begin(), history.end(), check);
      if (it != history.begin()) {
        auto prv = prev(it);
        cout << *prv << endl;
        check = *prv;
      } else {
        cout << "Not Available" << endl;
      }
    }
  }

  return 0;
}
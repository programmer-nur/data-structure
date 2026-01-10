#include <bits/stdc++.h>
using namespace std;

int main() {
  list<int> l = {10, 20, 30, 40, 50, 60, 70, 80};

  //   l2 = l;
  //   l.pop_back();
  //   l.pop_front();
  //   l.insert(next(l.begin(), 2), {100, 50});

  //   l.erase(next(l.begin(), 3), next(l.begin(), 5));

  //   replace(l.begin(), l.end(), 20, 100);

  //   auto it = find(l.begin(), l.end(), 20);

  //   if (it == l.end()) {
  //     cout << "NOt";
  //   } else {
  //     cout << "YEs";
  //   }

  for (int val : l) {
    cout << val << endl;
  }
  return 0;
}
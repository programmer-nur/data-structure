#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    long long int left1, left2;

    long long int a, b, c;
    cin >> a >> b >> c;

    left1 = abs(a - 1);
    left2 = abs((b - c)) + abs((c - 1));

    if (left1 < left2) {
      cout << 1 << endl;
    } else if (left1 > left2) {
      cout << 2 << endl;
    } else {
      cout << 3 << endl;
    }
  }

  return 0;
}
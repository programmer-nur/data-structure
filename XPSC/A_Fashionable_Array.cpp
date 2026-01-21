#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];

    sort(a, a + n);
    int mn = a[0];
    int mm = a[n - 1];

    if (mn % 2 == mm % 2)
      cout << 0 << endl;
    else {
      int i = 0, cntMin = 0;
      while (a[i] % 2 != mm % 2) {
        i++;
        cntMin++;
      }
      int j = n - 1, cntMax = 0;
      while (a[j] % 2 != mn % 2) {
        j--;
        cntMax++;
      }
      cout << min(cntMin, cntMax) << '\n';
    }
  }
}

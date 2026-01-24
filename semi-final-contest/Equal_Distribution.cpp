#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long int k;

  cin >> n >> k;
  long long int studentRec = k / n;
  long long int remChocolates = k % n;
  cout << studentRec << " " << remChocolates << endl;
  return 0;
}
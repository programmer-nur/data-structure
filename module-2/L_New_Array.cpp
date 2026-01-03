#include <bits/stdc++.h>
using namespace std;

void printNewArray(vector<int>& A, vector<int>& B) {
  for (int x : B) {
    cout << x << " ";
  }

  for (int x : A) {
    cout << x << " ";
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> A(n), B(n);

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> B[i];
  }
  printNewArray(A, B);

  return 0;
}
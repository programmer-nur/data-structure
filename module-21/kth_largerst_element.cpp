#include <bits/stdc++.h>
using namespace std;

#define ll long long;

// int main() {

//   vector<int> v = {3, 2, 1, 5, 6, 4};
//   int k = 2;

//   sort(v.begin(), v.end());

//   return v[v.size() - k];
// }

class Solution {
public:
  int findKthLargest(vector<int> &nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int num : nums) {
      minHeap.push(num);
      if (minHeap.size() > k) {
        minHeap.pop();
      }
    }

    return minHeap.top();
  }
};

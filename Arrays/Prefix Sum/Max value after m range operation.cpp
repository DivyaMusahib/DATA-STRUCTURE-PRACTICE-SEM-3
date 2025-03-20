// https://www.geeksforgeeks.org/problems/max-value-after-m-range-operation4300/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int findMax(int n, vector<int>& a, vector<int>& b, vector<int>& k) {
          vector<int>arr(n+1, 0);
          int m = a.size();
          for(int i=0; i<m; i++) {
              arr[a[i]] += k[i];
              arr[b[i]+1] -= k[i];
          }
          for(int i=1; i<n; i++) arr[i] += arr[i-1];
          return *max_element(arr.begin(), arr.end());
      }
};  

int main() {

}
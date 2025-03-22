// https://www.geeksforgeeks.org/problems/index-of-first-1-in-a-sorted-array-of-0s-and-1s4048/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int firstIndex(vector<int> &arr) {
          int lo = 0 , hi = arr.size()-1;
          int ans = -1;
          while(lo <= hi) {
              int mid = lo + (hi-lo)/2;
              if(arr[mid] == 1) {
                  ans = mid;
                  hi = mid -1;
              } else {
                  lo = mid + 1;
              }
          }
          return ans;
      }
};

class Solution {
    public:
      int firstIndex(vector<int> &arr) {
          int ans = lower_bound(arr.begin(), arr.end(), 1) - arr.begin();
          if(ans == arr.size()) ans = -1;
          return ans;
      }
};

int main() {

}
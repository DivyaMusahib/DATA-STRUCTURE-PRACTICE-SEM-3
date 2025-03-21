// https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
  
      int findFloor(vector<int>& arr, int x) {
          int lo = 0 , hi = arr.size()-1;
          int ans = -1;
          while(lo <= hi) {
              int mid = lo + (hi-lo)/2;
              if(arr[mid] <= x) {
                  lo = mid + 1;
                  ans = mid;
              } else {
                  hi = mid -1;
              }
          }
          return ans;
      }
};  

int main() {
    
}
// https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int maxLen(vector<int>& arr) {
          int i = 0 , sum = 0 , n = arr.size() , ans = 0;
          map<int,int>mp;
          mp[0] = -1;
          for(; i<n; i++) {
              // cout << sum << " ";
              sum += arr[i];
              if(mp.find(sum) != mp.end()) {
                  ans = max(ans , i - mp[sum]);
              } else {
                  mp[sum] = i;
              }
          }
          return ans;
      }
};

int main() {

}
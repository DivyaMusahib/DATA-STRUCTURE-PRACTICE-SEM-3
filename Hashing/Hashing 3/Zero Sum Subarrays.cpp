// https://www.geeksforgeeks.org/problems/zero-sum-subarrays1825/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int findSubarray(vector<int> &arr) {
          int  n = arr.size(), sum = 0 , ans = 0;
          map<int,int>mp;
          mp[0] = 1;
          for(int i=0; i<n; i++) {
              sum += arr[i];
              if(mp.find(sum) != mp.end()) ans += mp[sum];
              mp[sum]++;
          }
          return ans;
      }
};

int main() {

}
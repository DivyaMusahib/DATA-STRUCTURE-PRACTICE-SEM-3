// https://www.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int maxWater(vector<int> &arr) {
          int n = arr.size();
          vector<int>preMax(n,0) , suffMax(n,0);
          for(int i=1; i<n; i++) preMax[i] = max(arr[i-1] , preMax[i-1]);
          for(int i=n-2; i>=1; i--) suffMax[i] = max(arr[i+1] , suffMax[i+1]);
          int ans = 0;
          for(int i=0; i<n; i++) {
              int idealWaterLvl = min(suffMax[i] , preMax[i]);
              int realWaterLvl = max(0 , idealWaterLvl - arr[i]);
              ans += realWaterLvl;
          }
          return ans;
          
      }
};

int main() {

}
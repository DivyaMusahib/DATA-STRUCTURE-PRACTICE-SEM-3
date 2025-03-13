#include<bits/stdc++.h>
using namespace std;

// recursive -> TC O(n) , SC O(n + n) n is vector space and n is recursion stack
class Solution {
    private:
      int func(int i, int n, vector<int>&dp, vector<int>&cost) {
          if(i <= 1) return dp[i] = 0;
          if(dp[i] == -1) {
              dp[i] = min(func(i-1, n, dp, cost) + cost[i-1] , func(i-2, n, dp, cost) + cost[i-2]);
          }
          return dp[i];
      }
    public:
      int minCostClimbingStairs(vector<int>& cost) {
          int n = cost.size();
          vector<int>dp(n , -1);
          if(n==1) return cost[0];
          return min(func(n-1, n, dp, cost)+cost[n-1] , func(n-2, n, dp, cost)+cost[n-2]);
      }
};

// iterative -> TC O(n) , SC O(n)
class Solution {
    public:
      int minCostClimbingStairs(vector<int>& cost) {
          int n = cost.size();
          vector<int>costTillx(n, 0);
          for(int i=2; i<n; i++) {
              costTillx[i] = min(costTillx[i-1] + cost[i-1] , costTillx[i-2] + cost[i-2]);
          }
          if(n==1) return cost[0];
          int ans = min(costTillx[n-1]+cost[n-1] , costTillx[n-2]+cost[n-2]);
          return ans;
    }
};

// iterative space optimised -> TC O(n) , SC O(1)
class Solution {
    public:
      int minCostClimbingStairs(vector<int>& cost) {
          int n=cost.size();
          if(n==1) return cost[0];
          int prev2=cost[0];
          int prev1=cost[1];
          for(int i=2;i<n;i++){
              int curr=cost[i]+min(prev1,prev2);
              prev2=prev1;
              prev1=curr;
          }
          return min(prev1,prev2);
    }
};

int main() {

}
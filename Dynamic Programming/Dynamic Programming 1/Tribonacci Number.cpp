// https://www.geeksforgeeks.org/problems/tribonacci-number/1
#include<bits/stdc++.h>
using namespace std;

// recursive -> TC O(n) , SC O(n + n) n is vector space and n is recursion stack
class Solution {
    private:
      int func(int num , vector<int>&dp) {
          if(num == 0) return 0;
          if(num <= 2) return 1;
          if(dp[num] == - 1) {
              dp[num] = func(num-1, dp) + func(num-2, dp) + func(num-3, dp);
          }
          return dp[num];
      }
    public:
      int nthTribonacci(int n) {
          vector<int>dp(n+1, -1);
          return func(n, dp);
      }
};

// iterative -> TC O(n) , SC O(n)
class Solution {
    public:
      int nthTribonacci(int n) {
          if(n<=1) return n;
          if(n== 2) return 1;
          vector<int>dp(n+1);
          dp[0] = 0; dp[1] = 1; dp[2] = 1;
          for(int i=3; i<=n; i++) {
              dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
          }
          return dp[n];
      }
};

// iterative space optimised -> TC O(n) , SC O(1)
class Solution {
    public:
      int nthTribonacci(int n) {
          if(n<=1) return n;
          if(n== 2) return 1;
          vector<int>a = {0,1,1};
          for(int i=3; i<=n; i++) {
              int curr = a[0] + a[1] + a[2];
              a[0] = a[1]; 
              a[1] = a[2];
              a[2] = curr;
          }
          return a[2];
      }
};

int main() {

}
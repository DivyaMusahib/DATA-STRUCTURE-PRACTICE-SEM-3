// https://www.geeksforgeeks.org/problems/friends-pairing-problem5425/1
#include<bits/stdc++.h>
using namespace std;

// recursive -> TC O(n) , SC O(n + n) n is vector space and n is recursion stack
class Solution {
    private:
      int func(int n , vector<int>&dp) {
          if(n<=2) return dp[n] = n;
          if(dp[n] != -1) return dp[n];
          return dp[n] = func(n-1, dp) + (n-1)*func(n-2, dp);
      }
    public:
      int countFriendsPairings(int n) {
          vector<int>dp(n+1, -1);
          return func(n , dp);
      }
};

// iterative -> TC O(n) , SC O(n)
class Solution {
    public:
      int countFriendsPairings(int n) {
          vector<int>dp(n+1, -1);
          dp[0] = 1, dp[1] = 1;
          for(int i=2; i<=n; i++) dp[i] = dp[i-1] + (i-1)*dp[i-2];
          return dp[n];
      }
};

// iterative space optimised -> TC O(n) , SC O(1)
class Solution {
    public:
      int countFriendsPairings(int n) {
          int prev2 = 1, prev1 = 1;
          for(int i=2; i<=n; i++) {
              int curr = prev1 + (i-1)*prev2;
              prev2 = prev1;
              prev1 = curr;
          }
          return prev1;
      }
};

int main() {

}
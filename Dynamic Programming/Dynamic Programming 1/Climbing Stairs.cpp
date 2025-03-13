// https://leetcode.com/problems/climbing-stairs/description/
#include<bits/stdc++.h>
using namespace std;

// recursive -> TC O(n) , SC O(n + n) n is vector space and n is recursion stack
class Solution {
    private:
        int func(int n , vector<int>&dp) {
            if(n <= 1) return 1;
            if(dp[n] == -1) {
                dp[n] = func(n-1, dp) + func(n-2, dp);
            }
            return dp[n];
        }
    public:
        int climbStairs(int n) {
            vector<int>dp(n+1, -1);
            return func(n , dp);
        }
};

// iterative -> TC O(n) , SC O(n)
class Solution {
    public:
    int climbStairs(int n) {
        vector<int>dp(n+1, -1);
        dp[0] = 1; dp[1] = 1;
        for(int i=2; i<=n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};

// iterative space optimised -> TC O(n) , SC O(1)
class Solution {
    public:
        int climbStairs(int n) {
            if(n == 0) return 1;
            int last = 1, secLast = 1;
            for(int i=2; i<=n; i++) {
                int curr = last + secLast;
                secLast = last;
                last = curr;
            }
            return last;
        }
};

int main() {

}
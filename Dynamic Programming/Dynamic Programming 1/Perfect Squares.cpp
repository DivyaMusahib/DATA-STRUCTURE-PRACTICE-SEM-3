// https://leetcode.com/problems/perfect-squares/description/
#include<bits/stdc++.h>
using namespace std;

// recursive -> TC O(n) , SC O(n + n) n is vector space and n is recursion stack
class Solution {
    private:
        int func(int num , vector<int>&dp) {
            if(num == 0) return 0; 
            if(dp[num] == 1e5) {
                for(int i=1; (i*i)<= num; i++) {
                    dp[num] = min(dp[num] , func(num - i*i, dp) + 1);
                }
            }
            return dp[num];
        }
    public:
        int numSquares(int n) {
            vector<int>dp(n+1, 1e5);
            return func(n , dp);
        }
};

// iterative -> TC O(n) , SC O(n)
class Solution {
    public:
        int numSquares(int n) {
            vector<int>dp(n+1, INT_MAX);
            dp[0] = 0;
            for(int i=1; i<=n; i++) {
                for(int j = 1; (j*j)<=i; j++ ) {
                    dp[i] = min(dp[i] , dp[i - j*j] + 1);
                }
            }
            return dp[n];
        }
};

int main() {

}
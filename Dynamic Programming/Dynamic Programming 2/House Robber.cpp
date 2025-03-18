// https://leetcode.com/problems/house-robber/description/
#include<bits/stdc++.h>
using namespace std;

// recursive -> TC O(n) , SC O(n + n) n is vector space and n is recursion stack
class Solution {
    private:
        int chori(int i , vector<int>&nums, vector<int>&dp) {
            if(i < 0) return 0;
            if(dp[i] != -1) return dp[i];
            int take = nums[i] + chori(i-2, nums , dp);
            int notTake = chori(i-1, nums , dp);
            return dp[i] = max(take , notTake);
        }
    public:
        int rob(vector<int>& nums) {
            int n = nums.size();
            vector<int>dp(n, -1);
            return chori(n-1, nums , dp);
        }
};

// iterative -> TC O(n) , SC O(n)
class Solution {
    public:
        int rob(vector<int>& nums) {
            int n = nums.size();
            vector<int>dp(n, -1);
            dp[0] = nums[0];
            if(n>1) dp[1] = max(nums[0] , nums[1]);
            for(int i=2; i<n; i++) {
                dp[i] = max(dp[i-1] , dp[i-2]+nums[i]);
            }
            return dp[n-1];
        }
};

// iterative space optimised -> TC O(n) , SC O(1)
class Solution {
    public:
        int rob(vector<int>& nums) {
            int n = nums.size();
            if(n == 1) return nums[0];
            vector<int>dp(n, -1);
            int prev2 = nums[0] , prev = max(nums[0] , nums[1]);
            for(int i=2; i<n; i++) {
                int curr = max(prev , nums[i] + prev2);
                prev2 = prev;
                prev = curr;
            }
            return prev;
        }
};

int main() {

}
// https://leetcode.com/problems/house-robber-ii/
#include<bits/stdc++.h>
using namespace std;

// recursive -> TC O(n) , SC O(n + n) n is vector space and n is recursion stack
class Solution {
    private:
        int chori1(int i , vector<int>&nums, vector<int>&dp) {
            if(i < 0) return 0;
            if(dp[i] != -1) return dp[i];
            int take = nums[i] + chori1(i-2, nums , dp);
            int notTake = chori1(i-1, nums , dp);
            return dp[i] = max(take , notTake);
        }
        int chori2(int i , vector<int>&nums, vector<int>&dp) {
            if(i <= 0) return 0;
            if(dp[i] != -1) return dp[i];
            int take = nums[i] + chori2(i-2, nums , dp);
            int notTake = chori2(i-1, nums , dp);
            return dp[i] = max(take , notTake);
        }
    public:
        int rob(vector<int>& nums) {
            int n = nums.size();
            if(n==1) return nums[0];
            vector<int>dp1(n, -1);
            vector<int>dp2(n, -1);
            int ans1 = chori1(n-2, nums, dp1);
            int ans2 = chori2(n-1, nums, dp2);
            return max(ans1 ,ans2);
        }
};

// iterative -> TC O(n) , SC O(n)
class Solution {
    public:
        int rob(vector<int>& nums) {
            int n = nums.size();
            vector<int>dp1(n, 0);
            dp1[0] = nums[0];
            if(n>1) dp1[1] = max(nums[0] , nums[1]);
            for(int i=2; i<n-1; i++) {
                dp1[i] = max(dp1[i-1] , dp1[i-2]+nums[i]);
            }
            vector<int>dp2(n, -1);
            if(n>1) dp2[1] = nums[1];
            if(n>2) dp2[2] = max(nums[1] , nums[2]);
            for(int i=3; i<n; i++) {
                dp2[i] = max(dp2[i-1] , dp2[i-2]+nums[i]);
            }
            if(n==1) return nums[0];
            return max(dp1[n-2]  , dp2[n-1]);
        }
};

// iterative space optimised -> TC O(n) , SC O(1)
class Solution {
    public:
        int rob(vector<int>& nums) {
            int n = nums.size();
            if(n == 1) return nums[0];
            if(n == 2) return max(nums[0] , nums[1]);
            
            int prev1 = max(nums[0] , nums[1]) , prev2 = nums[0];
            for(int i=2; i<n-1; i++) {
                int curr = max(prev1 , prev2 + nums[i]);
                prev2 = prev1;
                prev1 = curr;
            }
            
            int prev11 = max(nums[1] , nums[2]) , prev22 = nums[1];
            for(int i=3; i<n; i++) {
                int curr = max(prev11 , prev22 + nums[i]);
                prev22 = prev11;
                prev11 = curr;
            }
            return max(prev1 , prev11);
        }
};


int main() {

}
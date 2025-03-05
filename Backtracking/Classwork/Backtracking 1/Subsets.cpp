// https://leetcode.com/problems/subsets/
// all possible subset (power set)
#include<bits/stdc++.h>
using namespace std;

class Solution {

    private:
        void printSubset(vector<vector<int>>&ans , vector<int>&nums , int ind , vector<int>&currVec){
            if(ind == nums.size()) {
                ans.push_back(currVec);
                return;
            }
            
            // take
            currVec.push_back(nums[ind]);
            printSubset(ans, nums , ind+1 , currVec);
            currVec.pop_back();
    
            // notTake
            printSubset(ans , nums , ind+1 , currVec);
            return;
        }
    
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            vector<int>currVec;
            vector<vector<int>> ans ;
            printSubset(ans , nums, 0 , currVec);
            return ans;
        }
};

int main() {

}
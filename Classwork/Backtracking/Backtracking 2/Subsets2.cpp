// https://leetcode.com/problems/subsets-ii/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {

    private:
        void printSubset(set<vector<int>>&ansSet , vector<int>&nums , int ind , vector<int>&currVec){
            if(ind == nums.size()) {
                ansSet.insert(currVec);
                return;
            }
            
            // take
            currVec.push_back(nums[ind]);
            printSubset(ansSet , nums , ind+1 , currVec);
            currVec.pop_back();
    
            // notTake
            printSubset(ansSet , nums , ind+1 , currVec);
            return;
        }
    
    
    public:
        vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            set<vector<int>> ansSet;
            sort(nums.begin(), nums.end());
            vector<int>currVec;
            printSubset(ansSet , nums, 0 , currVec);
            vector<vector<int>> ans;
            for(auto it : ansSet) {
                ans.push_back(it);
            }
            return ans;
        }
};

int main(){

}
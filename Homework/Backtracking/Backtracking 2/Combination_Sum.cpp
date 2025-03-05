// https://leetcode.com/problems/combination-sum/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    // from backtracking
    private:
        void getCombinationSum(int ind , vector<vector<int>>&ansVec, vector<int> &candidates , int target , int sum , vector<int> currVec){    cout << ind << "\n";
            if (sum > target) return ;
            if(ind == candidates.size()) {
                if(sum == target) ansVec.push_back(currVec);
                return;
            }
            // take
            currVec.push_back(candidates[ind]);
            getCombinationSum(ind , ansVec , candidates , target , sum + candidates[ind] , currVec);
            currVec.pop_back();
            
            // not take
            getCombinationSum(ind+1 , ansVec , candidates , target , sum , currVec);
        }
    public:
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<vector<int>> ansVec;
            vector<int>currVec;
            getCombinationSum(0 , ansVec , candidates , target , 0 , currVec);
            return ansVec;
        }
};

int main() {

}
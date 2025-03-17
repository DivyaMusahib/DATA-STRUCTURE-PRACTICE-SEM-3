// https://leetcode.com/problems/contains-duplicate-ii/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool containsNearbyDuplicate(vector<int>& nums, int k) {
            unordered_map<int,int>mp;
            int n = nums.size();
            for(int i=0; i<n; i++) {
                if(mp.find(nums[i]) != mp.end()) {
                    if((i - mp[nums[i]]) <= k) return true;
                } 
                mp[nums[i]] = i;
            }
            return false;
        }
};

int main() {

}
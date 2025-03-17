// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int countKDifference(vector<int>& nums, int k) {
            int ans = 0 , n = nums.size();
            unordered_map<int, int>mp;
            for(int j=0; j<n; j++) {
                int find1 = k + nums[j];
                int find2 = -k + nums[j];
                if(mp.count(find1)) ans += mp[find1];
                if(mp.count(find2)) ans += mp[find2];
                mp[nums[j]]++;
            }
            return ans;
        }
};

int main() {

}
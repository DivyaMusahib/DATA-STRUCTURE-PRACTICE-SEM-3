// https://leetcode.com/problems/contiguous-array/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findMaxLength(vector<int>& nums) {
            int sum = 0 , n = nums.size() , ans = 0;
            unordered_map<int,int>mp;
            mp[0] = -1;
            for(int i=0; i<n; i++) {
                nums[i] == 1 ? sum++ : sum--;
                if(mp.find(sum) == mp.end()) mp[sum] = i;
                else ans = max(ans , i - mp[sum]);
            }        
            return ans;
        }
};

int main() {

}
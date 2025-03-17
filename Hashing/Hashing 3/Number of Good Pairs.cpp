// https://leetcode.com/problems/number-of-good-pairs/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int numIdenticalPairs(vector<int>& nums) {
            multiset<int>st;
            int n = nums.size() , ans = 0;
            for(int i=0; i<n; i++) {
                ans += st.count(nums[i]);
                st.insert(nums[i]);
            }
            return ans;
        }
};

int main() {

}
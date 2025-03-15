// https://leetcode.com/problems/contains-duplicate/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            int n = nums.size();
            set<int>st(nums.begin(), nums.end());
            return n != st.size();
        }
};

int main() {

}
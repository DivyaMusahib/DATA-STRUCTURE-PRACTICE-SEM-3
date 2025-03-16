// https://leetcode.com/problems/intersection-of-two-arrays/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            unordered_set<int>st , st2;
            for(auto it: nums1) st.insert(it);
            for(auto it: nums2) if(st.find(it)!=st.end())st2.insert(it);
            return vector<int>(st2.begin(), st2.end());
        }
};

int main() {

}
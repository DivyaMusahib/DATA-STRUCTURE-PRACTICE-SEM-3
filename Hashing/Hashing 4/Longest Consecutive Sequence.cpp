// https://leetcode.com/problems/longest-consecutive-sequence/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            set<int>st;
            for(auto it : nums) st.insert(it);
            int last = INT_MIN , count = 0, ans = 0;
            for(auto it : st) {
                if(last != INT_MIN){
                    if((it - last) == 1) count++;
                    else count = 1;
                } else {
                    count = 1;
                }
                last = it;
                ans = max(ans , count);
            }
            ans = max(ans , count);
            return ans;
        }
};

int main() {

}
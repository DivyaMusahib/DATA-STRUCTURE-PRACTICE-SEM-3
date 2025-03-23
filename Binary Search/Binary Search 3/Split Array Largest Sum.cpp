// https://leetcode.com/problems/split-array-largest-sum/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        bool check(int subSum , vector<int>&nums, int k) {
            int count = 1, sum = 0;
            for(int i=0; i<nums.size(); i++) {
                if((sum + nums[i]) > subSum){
                    count ++;
                    sum = nums[i];
                } else {
                    sum += nums[i];
                }
            }
            return count <= k;
        }
    public:
        int splitArray(vector<int>& nums, int k) {
            int lo = *max_element(nums.begin(), nums.end());
            int hi = accumulate(nums.begin(), nums.end(), 0);
            int ans = lo;
            while(lo < hi) {
                int mid = lo + (hi-lo)/2;
                if(check(mid , nums , k)) {
                    hi = mid;
                } else {
                    lo = mid + 1;
                }
            }
            return lo;
        }
};

int main() {

}
// https://leetcode.com/problems/single-element-in-a-sorted-array/description/ 
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int singleNonDuplicate(vector<int>& nums) {
            int n = nums.size();
            int lo = 0 , hi = n-1;
            while(lo < hi) {
                int mid = lo + (hi-lo)/2;
                if(nums[mid] == nums[mid+1]) {
                    mid ++;
                }
                if(mid%2 == 1) lo = mid+1;
                else hi = mid -1;
            }
            return nums[lo];
        }
};

int main() {

}
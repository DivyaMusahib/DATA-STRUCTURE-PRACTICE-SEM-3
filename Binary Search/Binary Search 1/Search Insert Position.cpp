// https://leetcode.com/problems/search-insert-position/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int lo = 0 , hi = nums.size();
            while(lo < hi) {
                int mid = lo + (hi-lo)/2 ;
                if(nums[mid] < target) lo = mid+1;
                else hi = mid;  
            }
            return hi; 
        }
};

int main() {

}
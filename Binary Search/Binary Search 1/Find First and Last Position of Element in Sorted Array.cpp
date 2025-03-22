// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int n = nums.size();
            if(n==0) return {-1,-1};
            int firstPos = -1;
            int lo = 0 , hi = n-1;
            while(lo < hi) {
                int mid = lo + (hi-lo)/2;
                if(nums[mid] < target) lo = mid + 1;
                else hi = mid; 
            }
            if(nums[hi] == target) firstPos = hi;
            int secPos = -1;
            lo = 0 , hi = n-1;
            while(lo <= hi) {
                int mid = lo + (hi-lo)/2;
                if(nums[mid] < target) lo = mid+1;
                else if(nums[mid] > target) hi = mid-1;
                else {
                    secPos = mid;
                    lo = mid + 1;
                }
            }
            return {firstPos , secPos};
        }
};

class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int n = nums.size();
            int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
            int lastplus1 = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
            if(first == n || nums[first]!=target) return {-1,-1};
            return {first , lastplus1-1};
        }
};

int main() {

}
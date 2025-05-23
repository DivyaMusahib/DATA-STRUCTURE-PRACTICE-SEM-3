// https://leetcode.com/problems/kth-largest-element-in-an-array/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findKthLargest(vector<int>& nums, int k) {
            priority_queue<int, vector<int>, greater<int>>pq;
            for(int i=0; i<k; i++) {
                pq.push(nums[i]);
            }        
            for(int i=k; i<nums.size(); i++) {
                pq.push(nums[i]);
                pq.pop();
            }
            return pq.top();
        }
};

int main() {

}
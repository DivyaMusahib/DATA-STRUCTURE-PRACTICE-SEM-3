// https://leetcode.com/problems/rotate-array/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            k = k%nums.size();
            reverse(nums.begin(),nums.end());
            reverse(nums.begin(),nums.begin()+k);
            reverse(nums.begin()+k,nums.end());         
        }
};

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            k = k % n;
            vector<int> rotated(n);
    
            for (int i = 0; i < n; i++) {
                rotated[(i + k) % n] = nums[i];
            }
    
            for (int i = 0; i < n; i++) {
                nums[i] = rotated[i];
            }        
        }
};

int main() {

}
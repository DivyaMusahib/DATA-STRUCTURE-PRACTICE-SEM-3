// https://leetcode.com/problems/two-sum/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& arr, int target) {
            unordered_map<int, int>mp;
            int n = arr.size();
            for(int i=0; i<n; i++) {
                int left = target - arr[i];
                if(mp.find(left) != mp.end()) return {i, mp[left]};
                mp[arr[i]] = i;
            }
            return {-1,-1};        
        }
};

int main() {

}
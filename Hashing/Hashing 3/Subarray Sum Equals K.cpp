// https://leetcode.com/problems/subarray-sum-equals-k/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int subarraySum(vector<int>& arr, int k) {
            int  n = arr.size(), sum = 0 , ans = 0;
            unordered_map<int,int>mp;
            mp[0] = 1;
            for(int i=0; i<n; i++) {
                sum += arr[i];
                if(mp.find(sum-k) != mp.end()) ans += mp[sum-k];
                mp[sum]++;
            }
            return ans;
            
        }
};

int main() {

}
// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        int countPos(vector<int>&arr) {
            int lo = 0 , hi = arr.size()-1;
            int ans = hi;
            while(lo <= hi) {
                int mid = lo + (hi-lo)/2;
                if(arr[mid] < 0) {
                    ans = mid;
                    hi = mid-1;
                } else if(arr[mid] >=0) {
                    lo = mid +1;
                }
            }
            return lo;
        }
    public:
        int countNegatives(vector<vector<int>>& grid) {
            int n = grid.size() , m = grid[0].size();
            int ans = 0;
            for(auto it : grid) {
                ans += (m - countPos(it));
            }
            return ans;
        }
};

int main() {

}
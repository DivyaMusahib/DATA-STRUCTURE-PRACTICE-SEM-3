// https://leetcode.com/problems/koko-eating-bananas/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        bool check(vector<int>&piles, int mid , int h) {
            int sum = 0;
            for(auto it : piles) {
                sum += (it+mid-1)/mid;
            }
            return sum <= h;
        }
    public:
        int minEatingSpeed(vector<int>& piles, int h) {
            int lo = 1, hi = *max_element(piles.begin(), piles.end());
            while(lo < hi) {
                int mid = lo + (hi-lo) /2;
                if(check(piles, mid , h)) {
                    hi = mid;
                } else {
                    lo = mid + 1;
                }
            }
            return hi;
        }
};

int main() {

}
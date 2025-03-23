// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        bool check(int vajan , vector<int>& weights, int days) {
            int count = 1;
            int sum = 0;
            for(int i=0; i<weights.size(); i++) {
                if(sum + weights[i] > vajan) {
                    count ++;
                    sum = weights[i];
                } else {
                    sum += weights[i];
                }
            }
            return count <= days;
        }
    public:
        int shipWithinDays(vector<int>& weights, int days) {
            int lo = *max_element(weights.begin(), weights.end());
            int hi = accumulate(weights.begin(), weights.end(), 0);
            while(lo < hi) {
                int mid = lo + (hi-lo)/2;
                if(check(mid , weights , days)){
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
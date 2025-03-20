// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n = prices.size();
            vector<int>suffMax(n);
            suffMax[n-1] = prices[n-1];
            for(int i=n-2; i>=0; i--) {
                suffMax[i] = max(suffMax[i+1] , prices[i]);
            }
            int ans = 0;
            for(int i=0; i<n-1; i++) {
                ans = max(ans , suffMax[i+1] - prices[i]);
            }
            return ans;
        }
};

int main() {

}
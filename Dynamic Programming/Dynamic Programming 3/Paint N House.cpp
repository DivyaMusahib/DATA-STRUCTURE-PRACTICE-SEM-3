// https://www.geeksforgeeks.org/problems/distinct-coloring--170645/1
#include<bits/stdc++.h>
using namespace std;

// recursive -> TC O(n) , SC O(n + n) n is vector space and n is recursion stack
class Solution{   
    private:
        long long int func(int ind, int color, int r[], int g[], int b[] , vector<vector<long long int>> &dp) {
            if(ind == 0) {
                if(color == 0) return dp[0][0] = r[0];
                if(color == 1) return dp[0][1] = g[0];
                if(color == 2) return dp[0][2] = b[0];
            }
            if(dp[ind][color] != -1) return dp[ind][color];
            long long int ans = 1e18;
            for(int i=0; i<3; i++) {
                if(i!=color) {
                    ans = min(ans , func(ind-1, i , r, g, b, dp));
                } 
            }
            if(color == 0) ans += r[ind];
            if(color == 1) ans += g[ind];
            if(color == 2) ans += b[ind];
            return dp[ind][color] = ans;
        }
    public:
        long long int distinctColoring(int N, int r[], int g[], int b[]){
            vector<vector<long long int>>dp(N, vector<long long int>(3, -1));
            long long int ans = min({func(N-1, 0, r, g, b, dp) , func(N-1, 1, r, g, b, dp), func(N-1, 2, r, g, b, dp)}); 
            return ans;
        }
};

// iterative -> TC O(n) , SC O(n)
class Solution{   
    public:
        long long int distinctColoring(int N, int r[], int g[], int b[]){
            vector<vector<long long int>>dp(N , vector<long long int>(3, 0));
            dp[0][0] = r[0]; dp[0][1] = g[0]; dp[0][2] = b[0];
            for(int i=1; i<N; i++) {
                dp[i][0] = min(dp[i-1][1] , dp[i-1][2]) + r[i];
                dp[i][1] = min(dp[i-1][0] , dp[i-1][2]) + g[i];
                dp[i][2] = min(dp[i-1][0] , dp[i-1][1]) + b[i];
            }
            return min({dp[N-1][0] , dp[N-1][1] , dp[N-1][2]});
        }
};

// iterative space optimised -> TC O(n) , SC O(1)
class Solution{   
    public:
        long long int distinctColoring(int N, int r[], int g[], int b[]){
            long long int lastRed = r[0] , lastGreen = g[0] , lastBlue = b[0];
            for(int i=1; i<N; i++) {
                long long int currRed = min(lastGreen , lastBlue) + r[i];
                long long int currBlue = min(lastGreen , lastRed) + b[i];
                long long int currGreen = min(lastRed , lastBlue) + g[i];
                lastRed = currRed; lastGreen = currGreen; lastBlue = currBlue;
            }
            return min({lastRed , lastGreen , lastBlue});
        }
};

int main() {

}
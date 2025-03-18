// https://www.geeksforgeeks.org/problems/cutted-segments1642/1
#include<bits/stdc++.h>
using namespace std;

// recursive dp ->TC-O(n) , SC-O(n+n) (recursion stack)
class Solution {
    private:
      int count(int n, int x, int y, int z, vector<int>&dp) {
          if(n < 0) return INT_MIN;
          if(n == 0) return 0;
          if(dp[n] != -1) return dp[n];
          int countX = count(n-x , x, y, z, dp);
          int countY = count(n-y , x, y, z, dp);
          int countZ = count(n-z , x, y, z, dp);
          if (countX >= 0) countX++;
          if (countY >= 0) countY++;
          if (countZ >= 0) countZ++;
          return dp[n] = max({countX, countY , countZ});
      }
    public:
      // Function to find the maximum number of cuts.
      int maximizeTheCuts(int n, int x, int y, int z) {
          vector<int>dp(n+1, -1);
          int ans = count(n , x, y, z, dp);
          return max(ans , 0);
      }
};

// iterative dp ->TC-O(n) , SC-O(n)
class Solution {
    public:
      // Function to find the maximum number of cuts.
      int maximizeTheCuts(int n, int x, int y, int z) {
          vector<int>dp(n+1, 0);
          int mini = min({x,y,z});
          if(x<=n) dp[x] = 1;
          if(y<=n) dp[y] = 1;
          if(z<=n) dp[z] = 1;
          for(int i=mini+1; i<=n; i++) {
              int countX = 0, countY = 0, countZ = 0;
              if(i>=x) countX = dp[i-x];
              if(i>=y) countY = dp[i-y];
              if(i>=z) countZ = dp[i-z];
              if(countX>0) countX++;
              if(countY>0) countY++;
              if(countZ>0) countZ++;
              dp[i] = max({dp[i], countX, countY, countZ});
          }
          return dp[n];
      }
};

int main() {

}
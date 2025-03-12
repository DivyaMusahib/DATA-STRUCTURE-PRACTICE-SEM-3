// https://leetcode.com/problems/fibonacci-number/
#include<bits/stdc++.h>
using namespace std;

// recursive dp ->TC-O(n) , SC-O(n+n) (recursion stack)
// class Solution {
//     private:
//         int func(int n , vector<int>&dp) {
//             if(n <= 1) return n;
//             if(dp[n] != -1) return dp[n];
//             return dp[n] = func(n-1, dp) + func(n-2, dp);
//         }
//     public:
//         int fib(int n) {
//             vector<int>dp(n+1, -1);
//             return func(n , dp);
//         }
// };

// shortcut recursion ->TC-O(n) , SC-O(n + n) (recursion stack)
// class Solution {  
//     private:
//         vector<int>dp = vector<int>(31, -1);
//     public:
//         int fib(int n) {
//             if(n <= 1)return n;
//             if(dp[n] != -1) return dp[n];
//             return dp[n] = fib(n-1) + fib(n-2);
//         }
// };


// iterative dp ->TC-O(n) , SC-O(n)
// class Solution {
//     public:
//         int fib(int n) {
//             vector<int>dp(n+1, 0);
//             if(n>=1) dp[1] = 1;
//             for(int i=2; i<=n; i++) dp[i] = dp[i-1] + dp[i-2];
//             return dp[n];
//         }
// }; 

// iterative space optimised ->TC-O(n) , SC-O(1)
// class Solution {
//     public:
//         int fib(int n) {
//             if(n <= 1) return n;
//             int last = 1, secLast = 0;
//             for(int i=2; i<=n; i++) {
//                 int curr = last + secLast;
//                 secLast = last;
//                 last = curr;
//             } 
//             return last;
//         }
// };

int main() {

}
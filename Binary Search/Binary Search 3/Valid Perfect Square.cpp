// https://leetcode.com/problems/valid-perfect-square/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isPerfectSquare(int x) {
            int lo  = 1 , hi = x;
            int ans = 1;
            while(lo <= hi) {
                int mid = lo + (hi-lo)/2;
                if(mid > x/mid) hi = mid -1;
                else {
                    ans = mid;
                    lo = mid +1;
                }
            }
            long long num = (long long)x;
            long long sq = ans * ans * 1LL;
            return num == sq;;
        }
};

int main() {

}
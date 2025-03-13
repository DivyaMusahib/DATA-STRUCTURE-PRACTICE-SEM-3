// https://www.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int countWays(int n) {
          if(n == 0) return 0;
          int last = 1, secLast = 1;
          for(int i=2; i<=n; i++) {
              int curr = last + secLast;
              secLast = last;
              last = curr;
          }
          return last;
      }
};

int main() {

}
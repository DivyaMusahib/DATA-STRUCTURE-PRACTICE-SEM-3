// https://www.geeksforgeeks.org/problems/factorial5739/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int factorial(int n) {
          if(n == 0) return 1;
          return n* factorial(n-1);
      }
};

int main() {

}
// https://www.geeksforgeeks.org/problems/prime-number2314/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      bool isPrime(int n) {
          for(int i=2; i*i <= n; i++) {
              if(n% i == 0) return false;
          }
          return true;
      }
};

int main() {

}
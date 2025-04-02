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

class Solution {
    public:
      bool isPrime(int n) {
          // seive 
          vector<bool>arr(n+1, true);
          arr[0] = arr[1] = false;
          for(int i=2; i*i <= n; i++) {
              if(arr[i] == true) {
                for(int j=i*i;j<=n; j+=i) {
                    arr[j] =false;
                }
              }
          }
          return arr[n];
      }
};

int main() {

}
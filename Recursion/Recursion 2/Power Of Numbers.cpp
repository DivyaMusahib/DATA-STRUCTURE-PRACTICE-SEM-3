// https://www.geeksforgeeks.org/problems/power-of-numbers-1587115620/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
      int reverse(int n , int num) {
          if(n== 0) return num; 
          int last = n%10;
          num = num*10 + last;
          return reverse(n/10 , num);
      }
      
      int pow(int base , int power) {
          if(power == 0) return 1;
          return base * (pow(base , power-1));
      }
      
    public:
      int reverseExponentiation(int n) {
          int reverseNum = reverse(n , 0);
          int ans = pow(n , reverseNum);
          return ans;
      }
};

int main() {

}
// https://www.geeksforgeeks.org/problems/n-digit-numbers-with-digits-in-increasing-order5903/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        void func(int num , int count , int n , vector<int>&ans){
            if(count == n) {
                ans.push_back(num);
                return;
            }
            for(int i=1; i<=9; i++) {
                if(num%10 < i) func(num*10 + i , count+1 , n , ans);
            }
            return;
        }
    
    public:
      vector<int> increasingNumbers(int n) {
          vector<int>ans;
          if(n == 1) ans.push_back(0);
          for(int i=1; i<=9; i++) {
              func(i, 1 , n , ans);
          }
          return ans;
      }
};

int main() {

}
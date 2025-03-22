// https://www.geeksforgeeks.org/problems/juggler-sequence3930/0
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
      void func(long long n , vector<long long> &ans) {
          ans.push_back(n);
          if(n == 1) return;
          long long even = pow(n , 1.0/2.0);
          long long odd = pow(n , 3.0/2.0);
          if(n%2) return func(odd , ans);
          else return func(even , ans);
      }
    public:
      vector<long long> jugglerSequence(long long n) {
          vector<long long>ans;
          func(n , ans);
          return ans;
      }
};

int main() {

}
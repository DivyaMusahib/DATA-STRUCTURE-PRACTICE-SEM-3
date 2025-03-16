// https://www.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      // Complete this function
      // Function to check whether there is a subarray present with 0-sum or not.
      bool subArrayExists(vector<int>& arr) {
          int sum = 0;
          set<int>st;
          st.insert(0);
          for(auto it : arr) {
              sum += it;
              if(st.find(sum) != st.end()) return true;
              st.insert(sum);
          }
          return false;
      }
};

int main() {

}
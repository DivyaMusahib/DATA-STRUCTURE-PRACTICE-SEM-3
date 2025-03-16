// https://www.geeksforgeeks.org/problems/array-subset-of-another-array2317/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      // Function to check if b is a subset of a
      bool isSubset(vector<int> &a, vector<int> &b) {
          multiset<int>st(a.begin(), a.end());
          for(auto it : b) {
              if(st.find(it) == st.end()) return false;
              else st.erase(st.find(it));
          }
          return true;
      }
};

int main() {

}
// https://www.geeksforgeeks.org/problems/absolute-distinct-count5118/0
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int distinctCount(vector<int>& arr) {
          set<int>st;
          for(auto it : arr) if(it >0) st.insert(it);
          return st.size();
      }
};

int main() {

}
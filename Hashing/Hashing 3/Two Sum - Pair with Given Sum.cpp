// https://www.geeksforgeeks.org/problems/key-pair5616/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      bool twoSum(vector<int>& arr, int target) {
          set<int>st;
          int n = arr.size();
          for(int i=0; i<n; i++) {
              int left = target - arr[i];
              if(st.find(left) != st.end()) return true;
              st.insert(arr[i]);
          }
          return false;
      }
};

int main() {

}
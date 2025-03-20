// https://www.geeksforgeeks.org/problems/average4856/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> prefixAvg(vector<int> &arr) {
          int n = arr.size();
          vector<int>ans;
          for(int i=1; i<n; i++) arr[i] += arr[i-1];
          for(int i=0; i<n; i++) ans.push_back(arr[i] / (i+1));
          return ans;
      }
};

int main() {

}
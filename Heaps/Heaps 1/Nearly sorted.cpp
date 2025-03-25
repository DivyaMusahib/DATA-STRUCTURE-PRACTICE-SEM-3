// https://www.geeksforgeeks.org/problems/nearly-sorted-1587115620/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      void nearlySorted(vector<int>& arr, int k) {
          int n = arr.size();
          priority_queue<int, vector<int>, greater<int>>pq;
          for(int i=0; i<=k; i++) {
              pq.push(arr[i]);
          }
          for(int i=0; i<n; i++) {
              arr[i] = pq.top();
              pq.pop();
              if(i+k+1 < n) pq.push(arr[i+k+1]);
          }
          return ;
      }
};

int main() {

}
// https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int minCost(vector<int>& arr) {
          priority_queue<int>pq;
          for(auto it : arr) pq.push(-it);
          int ans = 0;
          while(pq.size()!=1) {
              int sum = pq.top();
              pq.pop();
              sum += pq.top();
              pq.pop();
              ans -= sum;
              pq.push(sum);
          }
          return ans;
      }
};

int main() {

}
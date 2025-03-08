// https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      // Function to detect cycle in a directed graph.
      bool isCyclic(vector<vector<int>> &adj) {
          int count = 0;
          int n = adj.size();
          vector<int>indegree(n,0);
          for(int i=0; i<n; i++) {
              for(auto it : adj[i]) {
                  indegree[it]++;
              }
          }
          queue<int>q;
          for(int i=0; i<n; i++) if(indegree[i]==0) q.push(i);
          while(!q.empty()) {
              int node = q.front();
              q.pop();
              count ++;
              for(auto it : adj[node]) {
                  indegree[it] --;
                  if(indegree[it] == 0) q.push(it);
              }
          }
          return count != n;
          
      }
};

int main() {

}
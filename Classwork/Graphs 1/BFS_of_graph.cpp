// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> bfsOfGraph(vector<vector<int>> &adj) {
          int n = adj.size();
          vector<int> vis(n , 0);
          vector<int>ans;
          queue<int>q;
          q.push(0);
          vis[0] = 1;
          while(!q.empty()) {
              int node = q.front();
              ans.push_back(node);
              q.pop();
              for(auto it : adj[node]) {
                  if(vis[it]) continue;
                  vis[it] = 1;
                  q.push(it);
              }
          }
          return ans;
      }
};

int main() {

}
// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
      void dfs(int node , vector<vector<int>> &adj , vector<int>&vis , vector<int>&ans) {
          vis[node] = 1;
          ans.push_back(node);
          for(auto child : adj[node]) {
              if(vis[child]) continue;
              dfs(child, adj , vis , ans);
          }
      }
    public:
      // Function to return a list containing the DFS traversal of the graph.
      vector<int> dfsOfGraph(vector<vector<int>>& adj) {
          int n = adj.size();
          vector<int>vis(n , 0);
          vector<int>ans;
          dfs(0, adj , vis, ans);
          return ans;
      }
};

int main() {

}
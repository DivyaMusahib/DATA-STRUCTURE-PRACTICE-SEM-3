// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
      void dfs(int node , vector<vector<int>> &adj , vector<int>&vis , int &count) {
          vis[node] = 1;
          for(auto it : adj[node]) {
              count++;
              if(vis[it]) continue;
              dfs(it, adj , vis , count);
          }
      }
    public:
      // Function to detect cycle in an undirected graph.
      bool isCycle(vector<vector<int>>& adj) {
          int n = adj.size();
          // number of nodes = n
          // num of total edges + num of component -1  = n -1 (tree)
          // numEdges = n - numComp
          int numEdges = 0, numComponent = 0 ;
          vector<int>vis(n , 0);
          for(int i=0; i<n; i++) {
              if(vis[i]) continue;
              numComponent++;
              int count = 0;
              dfs(i , adj , vis , count);
              numEdges += count;
          }
          numEdges /= 2;
          if(numEdges == (n - numComponent)) return false;
          return true;
      }
};

int main() {

}
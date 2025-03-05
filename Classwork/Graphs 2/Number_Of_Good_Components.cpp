// https://www.geeksforgeeks.org/problems/number-of-good-components--170647/0
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
      void dfs(int node , int& numNodes , int& numEdges, vector<vector<int>>&g, vector<int>&vis) {
          vis[node] = 1;
          numNodes++;
          for(auto it : g[node]) {
              numEdges++;
              if(vis[it]) continue;
              dfs(it , numNodes , numEdges , g , vis);
          }
      }
  
    public:
      int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
          vector<vector<int>> g(v+1);
          for(auto it : edges) {
              g[it[0]].push_back(it[1]);
              g[it[1]].push_back(it[0]);
          }
          
          vector<int>vis(v+1, 0);
              
          int ans = 0;
          for(int i=1; i<=v ; i++) {
              if(vis[i]) continue;
              int numNodes = 0;
              int numEdges = 0;
              dfs(i, numNodes, numEdges,  g, vis);
              numEdges = numEdges >> 1;
              if(numEdges == ((numNodes)*(numNodes-1))/2) {
                  ans++;
              }
          }
          return ans;
      }
};  

int main() {

}
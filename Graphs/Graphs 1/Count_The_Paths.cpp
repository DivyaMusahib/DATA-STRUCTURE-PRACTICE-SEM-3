// https://www.geeksforgeeks.org/problems/count-the-paths4332/0
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
      void dfs(vector<vector<int>>&adj , int node , int &ans , int destination) {
          if(node == destination){
              ans ++;
              return;
          }
          for(auto child : adj[node]) {
              dfs(adj , child , ans , destination);
          }
      }
      
    public:
      int possible_paths(vector<vector<int>> &edges, int n, int start, int destination) {
          vector<vector<int>> adj(n);
          for(auto it : edges) {
              adj[it[0]].push_back(it[1]);
          }
          int ans = 0;
          dfs(adj , start , ans , destination);
          return ans;
      }
  };

int main() {
    
}
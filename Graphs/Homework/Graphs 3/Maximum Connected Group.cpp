// https://www.geeksforgeeks.org/problems/maximum-connected-group/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
    void dfs(int i, int j, int n, int m, vector<vector<int>>&grid , vector<vector<int>>&vis , int ind , int &count) {
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j] == 0 || vis[i][j]!=0) return;
        count++;
        vis[i][j] = ind;
        dfs(i+1, j, n, m, grid, vis, ind, count);
        dfs(i-1, j, n, m, grid, vis, ind, count);
        dfs(i, j+1, n, m, grid, vis, ind, count);
        dfs(i, j-1, n, m, grid, vis, ind, count);
    }
  
    public:
      int MaxConnection(vector<vector<int>>& grid) {
          vector<int>numNodeInCC(250001,0);
          // 500 * 500 = 250001
          int n = grid.size();
          int m = grid[0].size();
          vector<vector<int>> vis(n , vector<int>(m , 0));
          int ind = 1;
          int ans = 0;
          for(int i=0; i<n; i++) {
              for(int j=0; j<m; j++) {
                  if(grid[i][j] == 1) {
                      int count = 0;
                      dfs(i , j , n, m, grid, vis, ind, count);
                      numNodeInCC[ind] = count;
                      ind++;
                      ans = max(ans , count);
                  }
              }
          }
          for(int i=0; i<n; i++) {
              for(int j=0; j<m; j++) {
                  if(grid[i][j] == 0) {
                      set<int>st;
                      if(i>0) st.insert(vis[i-1][j]);
                      if(i<n-1) st.insert(vis[i+1][j]);
                      if(j>0) st.insert(vis[i][j-1]);
                      if(j<m-1) st.insert(vis[i][j+1]);
                      int temp = 1;
                      for(auto it : st) {
                          temp += numNodeInCC[it];
                      }
                      ans = max(ans , temp);
                  }
              }
          }
          return ans;
      }
};

int main() {

}
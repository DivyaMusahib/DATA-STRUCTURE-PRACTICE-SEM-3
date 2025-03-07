// https://www.geeksforgeeks.org/problems/find-number-of-closed-islands/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        void dfs(int i, int j, int n, int m, vector<vector<int>>&grid){
            if(!(i>=0 && j>=0 && i<n && j<m && grid[i][j] == 1)) return;
            grid[i][j] = 0;
            dfs(i-1, j, n, m, grid);
            dfs(i+1, j, n, m, grid);
            dfs(i, j-1, n, m, grid);
            dfs(i, j+1, n, m, grid);
        }
    public:
    int closedIslands(vector<vector<int>>& grid, int N, int M) {
        int ans = 0;
        int n = N, m = M;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if((i==0 || i==n-1 || j==0 || j==m-1) && grid[i][j] == 1) {
                    dfs(i, j, n, m, grid);
                } 
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1) {
                    ans++;
                    dfs(i, j, n, m, grid);
                } 
            }
        }
        return ans;
    }
};

int main() {

}
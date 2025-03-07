// https://leetcode.com/problems/number-of-islands/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        // method - 1
        void dfs(int i, int j, int n, int m, vector<vector<char>>&grid){
            grid[i][j] = '0';
            if(i>=1 && grid[i-1][j]=='1') dfs(i-1, j, n, m, grid);    
            if(i<n-1 && grid[i+1][j]=='1') dfs(i+1, j, n, m, grid);    
            if(j>=1 && grid[i][j-1]=='1') dfs(i, j-1, n, m, grid);    
            if(j<m-1 && grid[i][j+1]=='1') dfs(i, j+1, n, m, grid);    
        }
    
        // method - 2
        // void dfs(int i, int j, int n, int m, vector<vector<char>>&grid){
        //     if(i<0 || j<0 || i>=n || j>=m || grid[i][j]=='0') return;
        //     grid[i][j] = '0';
        //     dfs(i-1, j, n, m, grid);    
        //     dfs(i+1, j, n, m, grid);    
        //     dfs(i, j-1, n, m, grid);    
        //     dfs(i, j+1, n, m, grid);    
        // }
        
        // method - 3
        // bool isValid(int x, int y , int n, int m) {
        //     return x>=0 && y>=0 && x<n && y<m ;
        // }
    
        // vector<int>dx = {-1 , 1 , 0 , 0};
        // vector<int>dy = {0 , 0 , 1 , -1};
    
        // void dfs(int i, int j, int n, int m, vector<vector<char>>&grid){
        //     grid[i][j] = '0';
        //     for(int k=0; k<4; k++) {
        //         int newX = i + dx[k];
        //         int newY = j + dy[k];
        //         if(isValid(newX, newY, n , m) && grid[newX][newY] == '1') dfs(newX, newY, n, m, grid);
        //     }
        // }
    
    public:
        int numIslands(vector<vector<char>>& grid) {
            int n = grid.size() , m = grid[0].size();
            vector<vector<bool>>vis(n , vector<bool>(m , false));
            int ans = 0;
            for(int i=0; i<n; i++) {
                for(int j=0; j<m; j++) {
                    if(grid[i][j]=='1') {
                        dfs(i, j, n, m, grid);
                        ans ++;
                    }
                }
            }
            return ans;        
        }
};

int main() {

}
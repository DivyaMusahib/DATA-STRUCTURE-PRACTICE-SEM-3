// https://leetcode.com/problems/rotting-oranges/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int orangesRotting(vector<vector<int>>& grid) {
            int n = grid.size(), m = grid[0].size();
            vector<vector<int>> time(n , vector<int>(m, -1));       
    
            queue<vector<int>> q;
            for(int i=0; i<n; i++) {
                for(int j=0; j<m; j++) {
                    if(grid[i][j] == 2) {
                        q.push({i,j, 0});
                    }
                }
            }
    
            while(!q.empty()) {
                int i = q.front()[0];
                int j = q.front()[1];
                int t = q.front()[2];
                time[i][j] = t;
                q.pop();
    
                if(i>0 && grid[i-1][j] == 1) {
                    grid[i-1][j] = 2;
                    q.push({i-1, j, t+1});
                } 
                if(i<n-1 && grid[i+1][j] == 1) {
                    grid[i+1][j] = 2;
                    q.push({i+1, j, t+1});
                } 
                if(j>0 && grid[i][j-1] == 1) {
                    grid[i][j-1] = 2;
                    q.push({i, j-1, t+1});
                } 
                if(j<m-1 && grid[i][j+1] == 1) {
                    grid[i][j+1] = 2;
                    q.push({i, j+1, t+1});
                } 
            }
            int ans = 0;
            for(int i=0; i<n; i++) for(int j=0; j<m; j++) {
                ans = max(ans , time[i][j]);
                if(grid[i][j] == 1) {
                    return -1;
                }
            }
            return ans;
        }
};

int main() {

}
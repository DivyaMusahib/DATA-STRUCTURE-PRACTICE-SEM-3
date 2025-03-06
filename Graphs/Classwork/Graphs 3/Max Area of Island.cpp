// https://leetcode.com/problems/max-area-of-island/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        bool isValid(int x, int y , int n, int m) {
            return x>=0 && y>=0 && x<n && y<m ;
        }
    public:
        int maxAreaOfIsland(vector<vector<int>>& grid) {
            int n = grid.size(), m = grid[0].size();
            int ans = 0;
            
            vector<int>dx = {-1 , 1 , 0 , 0};
            vector<int>dy = {0 , 0 , 1 , -1};
            
            for(int i=0; i<n; i++) {
                for(int j=0; j<m; j++) {
                    int temp = 0;
                    if(grid[i][j] == 1) {
                        queue<pair<int,int>>q;
                        q.push({i,j});
                        grid[i][j] = 0;
                        while(!q.empty()) {
                            int x = q.front().first;
                            int y = q.front().second;                        
                            temp++;
                            q.pop();
                            for(int k=0; k<4; k++) {
                                int newX = x + dx[k];
                                int newY = y + dy[k];
                                if(isValid(newX, newY, n , m) && grid[newX][newY] == 1){
                                    q.push({newX, newY});
                                    grid[newX][newY] = 0;
                                }
                            }                
                        }
                    }
                    ans = max(ans , temp);
                }
            }        
            return ans;
        }
};

int main() {

}
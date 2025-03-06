// 
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        void dfs(int i, int j, int n, int m, vector<vector<int>>&land, int &maxi_x, int &maxi_y) {
            if(i>=n || j>=m || land[i][j] == 0 ) return ;
            land[i][j] = 0;
            maxi_x = max(maxi_x , i);
            maxi_y = max(maxi_y , j);
            dfs(i+1, j, n, m, land, maxi_x, maxi_y);
            dfs(i, j+1, n, m, land, maxi_x, maxi_y);
        }
    public:
        vector<vector<int>> findFarmland(vector<vector<int>>& land) {
            vector<vector<int>>ans;
            int n = land.size(), m = land[0].size();
            for(int i=0; i<n; i++) {
                for(int j=0; j<m; j++) {
                    if(land[i][j] == 1) {
                        int maxi_x = i, maxi_y = j;
                        dfs(i, j, n, m, land, maxi_x, maxi_y);
                        ans.push_back({i, j, maxi_x, maxi_y});
                    }
                }
            }
            return ans;
        }
};

int main() {

}
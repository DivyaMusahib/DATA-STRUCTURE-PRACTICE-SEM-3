// https://leetcode.com/problems/count-the-number-of-complete-components/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        void dfs(int node , vector<vector<int>> &adj , vector<int>&vis , int &countEdge, int &countNode) {
            countNode ++;
            vis[node] = 1;
            for(auto it : adj[node]) {
                countEdge++;
                if(vis[it]) continue;
                dfs(it, adj , vis , countEdge ,countNode);
            }
        }
    public:
        int countCompleteComponents(int n, vector<vector<int>>& edges) {
            vector<vector<int>> adj(n);
            for(auto it : edges) {
                adj[it[0]].push_back(it[1]);
                adj[it[1]].push_back(it[0]);
            }
            int ans = 0;
            vector<int>vis(n , 0);
            for(int i=0; i<n; i++) {
                if(vis[i]) continue;
                int countNode = 0 , countEdge = 0;
                dfs(i , adj , vis , countEdge , countNode);
                countEdge /= 2;
                if(countEdge == ((countNode)*(countNode-1)) / 2) ans++;
            }
            return ans;
        }
};

int main() {

}
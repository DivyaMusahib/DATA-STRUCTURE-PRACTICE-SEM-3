// https://leetcode.com/problems/number-of-provinces/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findCircleNum(vector<vector<int>>& isConnected) {
            int n = isConnected.size();
            vector<vector<int>> g(n);
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(isConnected[i][j] == 1 && i!=j) {
                        g[i].push_back(j);
                    }
                }
            }
            vector<int> vis(n , 0);
            int ans = 0;
            for(int i=0; i<n; i++) {
                if(vis[i]) continue;
                ans ++;
                queue<int> q;
                q.push(i);
                vis[i] = 1;
                while(!q.empty()) {
                    int node = q.front();
                    q.pop();
                    for(auto it : g[node]) {
                        if(vis[it]) continue;
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
            return ans;
        }
};

int main() {

}
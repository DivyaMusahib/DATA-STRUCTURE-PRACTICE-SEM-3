// https://leetcode.com/problems/find-if-path-exists-in-graph/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
            vector<vector<int>> adj(n);
            vector<bool> vis(n , false);
            for(auto edge : edges) {
                adj[edge[0]].push_back(edge[1]);
                adj[edge[1]].push_back(edge[0]);
            }
            queue<int>q;
            q.push(source);
            vis[source] = true;
            while(!q.empty()) {
                int node = q.front();
                q.pop();
                for(auto child : adj[node]) {
                    if(vis[child]) continue;
                    vis[child] = true;
                    q.push(child);
                }
            }
            for(auto it : vis) cout << it << " ";
            return vis[destination];
        }
};

int main() {

}
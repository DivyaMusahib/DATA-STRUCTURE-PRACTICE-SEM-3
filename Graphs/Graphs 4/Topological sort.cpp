// https://www.geeksforgeeks.org/problems/topological-sort/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> topologicalSort(vector<vector<int>>& adj) {
          int n = adj.size();
          vector<int>incoming(n, 0);
          for(int i=0; i<n; i++) {
              for(auto it : adj[i]) {
                  incoming[it] ++;
              }
          }
          
          queue<int>q;
          for(int i=0; i<n; i++) {
              if(incoming[i] == 0) q.push(i);
          }
          
          vector<int>ans;
          while(!q.empty()) {
              int node = q.front();
              q.pop();
              ans.push_back(node);
              
              for(auto it : adj[node]) {
                  incoming[it]--;
                  if(incoming[it] == 0) q.push(it);
              }
          }
          return ans;
      }
};

class Solution {
    private:
      void dfs(int node, vector<vector<int>>&adj , vector<int>&vis, stack<int>&st) {
          vis[node] = 1;
          for(auto it : adj[node]) {
              if(vis[it]) continue;
              dfs(it, adj, vis, st);
          }
          st.push(node);
      }
    public:
      vector<int> topologicalSort(vector<vector<int>>& adj) {
          int n = adj.size();
          stack<int>st;
          vector<int>vis(n, 0);
          for(int i=0; i<n; i++) {
              if(vis[i]) continue;
              dfs(i , adj, vis, st);
          }
          vector<int>ans;
          while(!st.empty()) {
              ans.push_back(st.top());
              st.pop();
          }
          return ans;
      }
};

int main() {

}
// https://leetcode.com/problems/course-schedule-ii/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
            vector<vector<int>> g(n);
            for(auto it : prerequisites) {
                g[it[1]].push_back(it[0]);
            }
            vector<int>indegree(n,0);
            for(int i=0; i<n; i++) {
                for(auto it : g[i]) {
                    indegree[it]++;
                }
            }
            queue<int>q;
            for(int i=0; i<n; i++) {
                if(indegree[i] == 0) q.push(i);
            }
            vector<int>ans;
            while(!q.empty()) {
                int node = q.front();
                q.pop();
                ans.push_back(node);
                for(auto it : g[node]) {
                    indegree[it] --;
                    if(indegree[it] == 0) q.push(it);
                }
            }
            return ans;
        }
};

int main() {

}
// https://leetcode.com/problems/relative-ranks/description/
#include<bits/stdc++.h>
using namespace std;

// without heap using sorting
class Solution {
    public:
        vector<string> findRelativeRanks(vector<int>& score) {
            int n = score.size();
            vector<pair<int,int>>arr(n);
            for(int i=0; i<n; i++){
                arr[i].first = score[i];
                arr[i].second = i;
            }
    
            sort(arr.rbegin(),arr.rend());
    
            vector<string>ans(n);
            for(int i=0; i<n; i++){
                if(i==0) ans[arr[i].second] = "Gold Medal";
                else if(i==1) ans[arr[i].second] = "Silver Medal";
                else if(i==2) ans[arr[i].second] = "Bronze Medal";
                else ans[arr[i].second] = to_string(i+1);
            }
    
            return ans;
            
        }
};

// with heap
class Solution {
    public:
        vector<string> findRelativeRanks(vector<int>& score) {
            priority_queue<pair<int,int>>pq;
            int n = score.size();
            for(int i=0; i<n; i++) {
                pq.push({score[i], i});
            }
            int rank = 1;
            vector<string>ans(n);
            while(!pq.empty()) {
                int ind = pq.top().second;
                pq.pop();
                if(rank == 1) {
                    ans[ind] = "Gold Medal";
                } else if(rank == 2) {
                    ans[ind] = "Silver Medal";
                } else if(rank == 3) {
                    ans[ind] = "Bronze Medal";
                } else {
                    string rankStr = to_string(rank);
                    ans[ind] = rankStr;
                }
                rank++;
            }
            return ans;
        }
};

int main() {

}
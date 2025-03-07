// https://www.geeksforgeeks.org/problems/snake-and-ladder-problem4816/1
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int minThrow(int N, int arr[]){
            map<int,int> snake , ladder;
            for(int i=0; i<2*N; i+=2) {
                if(arr[i] < arr[i+1]) ladder[arr[i]] = arr[i+1];
                else snake[arr[i]] = arr[i+1];
            }
            int ans = N;
            queue<pair<int, int>> q;
            q.push({1,0});
            vector<int> vis(31, 0);
            while(!q.empty()) {
                int curr = q.front().first ;
                int move = q.front().second;
                if(curr == 30) {
                    ans = move;
                    break;
                }
                q.pop();
                for(int i=1; i<=6; i++) {
                    int go = curr + i;
                    if(go > 30) continue;
                    if(snake.find(go) != snake.end()) continue;
                    if(ladder.find(go) != ladder.end() && vis[ladder[go]]==0) {
                        q.push({ladder[go] , move+1});
                        vis[ladder[go]] = 1;
                        continue;    
                    }
                    
                    if(vis[go] == 0){
                        q.push({go , move+1});
                        vis[go] = 1;
                    }
                }
            }
            return ans;
        }
    };

int main() {

}
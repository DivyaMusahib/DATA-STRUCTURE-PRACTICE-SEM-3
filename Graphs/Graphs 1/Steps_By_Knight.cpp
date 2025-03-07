// https://www.geeksforgeeks.org/problems/steps-by-knight5927/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        bool isValid(int x , int y, int n) {
            return x>=0 && x<=n && y>=0 && y<=n;
        }
    
        vector<int>posX = {1,  1, -1, -1, 2,  2, -2, -2};
        vector<int>posY = {2, -2,  2, -2, 1, -1,  1, -1};
    
    public:
        int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N) {   
            vector<vector<int>> vis(N+1 , vector<int>(N+1 , 0));
            vector<int> temp = {KnightPos[0] , KnightPos[1] , 0};
            queue<vector<int>> q;
            q.push(temp);
            vis[temp[0]][temp[1]] = 1;
            while(!q.empty()) {
                int currX = q.front()[0];
                int currY = q.front()[1];
                int lvl = q.front()[2];
                if(currX == TargetPos[0] && currY == TargetPos[1]) {
                    return lvl;
                }
                q.pop();
                
                for(int i=0; i<8; i++) {
                    int newX = currX + posX[i];
                    int newY = currY + posY[i];
                    
                    if(isValid(newX , newY , N) && vis[newX][newY] == 0) {
                        vis[newX][newY] = 1;
                        q.push({newX , newY , lvl+1});
                    }
                }
            }
            return 0;
        }
};

int main() {

}
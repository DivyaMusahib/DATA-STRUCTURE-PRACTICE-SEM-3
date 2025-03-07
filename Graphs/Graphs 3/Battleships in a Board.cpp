// https://leetcode.com/problems/battleships-in-a-board/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
    
        bool isValid(int x, int y, int n, int m, vector<vector<char>>&board) {
            return x>=0 && y>=0 && x <n && y<m && board[x][y] == 'X';
        }
    
    public:
        int countBattleships(vector<vector<char>>& board) {
            int ans = 0;
            vector<int>dx = {1, -1, 0, 0};
            vector<int>dy = {0, 0, 1, -1};
            int n = board.size() , m = board[0].size();
            for(int i=0; i<n; i++) {
                for(int j=0; j<m; j++) {
                    if(board[i][j] == 'X') {
                        ans++;
                        board[i][j] = '.';
                        queue<pair<int,int>>q;
                        q.push({i,j});
                        while(!q.empty()) {
                            int x = q.front().first;
                            int y = q.front().second;
                            q.pop();
                            for(int k=0; k<4; k++) {
                                int newX = x + dx[k]; 
                                int newY = y + dy[k]; 
                                if(isValid(newX, newY, n, m, board)) {
                                    board[newX][newY] = '.';
                                    q.push({newX, newY});
                                }
                            }
                        }
                    }
                }
            }
            return ans;
        }
};

int main() {

}
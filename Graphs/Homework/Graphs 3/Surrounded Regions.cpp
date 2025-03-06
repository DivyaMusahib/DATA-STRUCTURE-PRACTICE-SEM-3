// https://leetcode.com/problems/surrounded-regions/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        void dfs(int i, int j, int n, int m, vector<vector<char>>&board) {
            if(i<0 || i>=n || j<0 || j>=m || board[i][j]!='O') return ;
                
            board[i][j] = 'D';
            dfs(i-1, j, n, m, board);
            dfs(i+1, j, n, m, board);
            dfs(i, j+1, n, m, board);
            dfs(i, j-1, n, m, board);
        }
    public:
        void solve(vector<vector<char>>& board) {
            int n = board.size(), m = board[0].size();
            for(int i=0; i<n; i++) {
                for(int j=0; j<m; j++) {
                    if(i==0 || i==n-1 || j==0 || j==m-1) {
                        dfs(i, j, n, m, board);
                    }
                }
            }   
            for(int i=0; i<n; i++) for(int j=0; j<m; j++) {
                if(board[i][j] == 'D') board[i][j] = 'O';
                else if(board[i][j] == 'O') board[i][j] = 'X';
            }     
            return ;
        }
};

int main() {

}
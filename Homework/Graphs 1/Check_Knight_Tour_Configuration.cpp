// https://leetcode.com/problems/check-knight-tour-configuration/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private :
        bool isValid(int x , int y , int n) {
            return x>=0 && x<n && y>=0 && y<n;
        }
    
    public:
        bool checkValidGrid(vector<vector<int>>& grid) {
            int count = 0;
            int n = grid.size();
            if(grid[0][0] != 0) return false;
            int currX = 0 , currY = 0;
            
            vector<int>dx = {1,  1, -1, -1, 2,  2, -2, -2};
            vector<int>dy = {2, -2,  2, -2, 1, -1,  1, -1};
    
            while(true) {
                if(count == (n*n -1)) break;
                count ++;
                bool ans = false;
                for(int i=0; i<8; i++) {
                    int newX = currX + dx[i];
                    int newY = currY + dy[i];
    
                    if(isValid(newX , newY , n) && grid[newX][newY] == count) {
                        currX = newX; 
                        currY = newY;
                        ans = true;
                        break;
                    } 
                }
                if(ans == false) return false;
            }
            return true;
        }
    };

int main() {

}
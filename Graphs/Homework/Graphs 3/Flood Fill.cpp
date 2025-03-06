// https://leetcode.com/problems/flood-fill/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
            if(image[sr][sc] == color) return image;
            int toChangeColor = image[sr][sc];
            int n = image.size() , m = image[0].size();
            queue<pair<int,int>>q;
            q.push({sr,sc});
            while(!q.empty()) {
                int currX = q.front().first;
                int currY = q.front().second;
                q.pop();
                image[currX][currY] = color;
                if(currX > 0   && image[currX-1][currY] == toChangeColor) q.push({currX-1 , currY}); 
                if(currX < n-1 && image[currX+1][currY] == toChangeColor) q.push({currX+1 , currY}); 
                if(currY > 0   && image[currX][currY-1] == toChangeColor) q.push({currX , currY-1}); 
                if(currY < m-1 && image[currX][currY+1] == toChangeColor) q.push({currX , currY+1}); 
            }       
            return image;
        }
};

int main() {

}
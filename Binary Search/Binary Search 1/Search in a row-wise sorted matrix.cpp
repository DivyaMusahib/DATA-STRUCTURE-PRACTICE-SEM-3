// https://www.geeksforgeeks.org/problems/search-in-a-row-wise-sorted-matrix/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      bool searchRowMatrix(vector<vector<int>> &mat, int x) {
          int n = mat.size(), m = mat[0].size();
          for(int i=0; i<n; i++) {
              int lo = 0 , hi = m-1;
              while(lo <= hi) {
                  int mid = lo + (hi-lo)/2;
                  if(mat[i][mid] < x) lo = mid + 1;
                  else if(mat[i][mid] > x) hi = mid - 1;
                  else return true;
              }
          }
          return false;
      }
};

class Solution {
    public:
      bool searchRowMatrix(vector<vector<int>> &mat, int x) {
          int n = mat.size(), m = mat[0].size();
          for(int i=0; i<n; i++) {
              if(binary_search(mat[i].begin(), mat[i].end(), x)) return true;
          }
          return false;
      }
};

int main() {

}
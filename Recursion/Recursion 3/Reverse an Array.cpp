// https://www.geeksforgeeks.org/problems/reverse-an-array/0
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
      void rev(int i, int n, vector<int>&arr) {
          if(i >= n/2) return;
          swap(arr[i] , arr[n-i-1]);
          rev(i+1, n, arr);
      }
    public:
      void reverseArray(vector<int> &arr) {
          int n = arr.size();
          rev(0, n, arr);
      }
};

int main() {

}
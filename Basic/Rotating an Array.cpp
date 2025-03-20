// https://www.geeksforgeeks.org/problems/reversal-algorithm5340/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      void leftRotate(vector<int>& arr, int d) {
          int n = arr.size();
          reverse(arr.begin(), arr.end());
          reverse(arr.begin(), arr.begin()+n-d);
          reverse(arr.begin()+n-d , arr.end());
      }
};

int main() {

}
// https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      void reverseInGroups(vector<int> &arr, int k) {
          int n = arr.size();
          for(int i=0; i<n; i+=k) {
              int left = i;
              int right = min(i + k - 1, n - 1);
              while (left < right) swap(arr[left++], arr[right--]);
          }
      }
};

int main() {

}
// https://www.geeksforgeeks.org/problems/who-will-win-1587115621/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      bool searchInSorted(vector<int>& arr, int k) {
          int lo = 0 , hi = arr.size()-1;
          while((hi - lo) > 0) {
              int mid = lo + (hi-lo) /2 ;
              if(arr[mid]>=k) hi = mid;
              else lo = mid+1;
          }
          return arr[lo] == k;
      }
};

class Solution {
    public:
      bool searchInSorted(vector<int>& arr, int k) {
          return binary_search(arr.begin(), arr.end() , k);
      }
};  

int main() {

}
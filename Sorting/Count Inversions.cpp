// https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private: 
      int merge(vector<int>&arr , int l , int mid , int r) {
          vector<int>temp;
          int cnt = 0;
          int i = l , j = mid+1;
          while(i<=mid || j<= r) {
              if(i == mid+1) {
                  temp.push_back(arr[j++]);
              } else if(j == r+1) {
                  temp.push_back(arr[i++]);
              } else if(arr[i] > arr[j]) {
                  cnt += (mid - i + 1);
                  temp.push_back(arr[j++]);
              } else {
                  temp.push_back(arr[i++]);
              }
          }
          for(int i=l; i<=r; i++) {
              arr[i] = temp[i-l];
          }
          return cnt;
      }
      int mergeSort(vector<int>&arr , int l , int r) {
          if(l>=r) return 0;
          int mid = l + (r-l)/2;
          int cnt = mergeSort(arr, l , mid);
          cnt += mergeSort(arr, mid+1 , r);
          cnt += merge(arr, l, mid, r);
          return cnt;
      }
    public:
      int inversionCount(vector<int> &arr) {
          return mergeSort(arr , 0 , arr.size()-1);
      }
};

int main() {

}
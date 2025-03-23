// https://www.geeksforgeeks.org/problems/merge-sort/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
      void merge(vector<int>&arr, int l, int mid , int r) {
          vector<int>temp(r-l+1);
          int x = 0 , i = l, j = mid+1;
          while(i<=mid || j<=r) {
              if(i == mid+1) temp[x++] = arr[j++];
              else if(j == r+1) temp[x++] = arr[i++];
              else if(arr[i] > arr[j]) temp[x++] = arr[j++];
              else temp[x++] = arr[i++];
          }
          for(int i=l ; i<=r; i++) {
              arr[i] = temp[i-l];
          }
      }
    public:
      void mergeSort(vector<int>& arr, int l, int r) {
          if(l >= r) return ;
          int mid = l + (r-l)/2;
          mergeSort(arr, l, mid);
          mergeSort(arr, mid+1, r);
          merge(arr, l, mid , r);
      }
};

int main() {

}
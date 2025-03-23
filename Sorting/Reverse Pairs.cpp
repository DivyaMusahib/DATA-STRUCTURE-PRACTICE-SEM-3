// https://leetcode.com/problems/reverse-pairs/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        int countPairs(vector<int>&arr , int l , int mid , int r) {
            int cnt = 0;
            int j = mid+1;
            for(int i=l; i<=mid; i++) {
                while (j <= r && arr[i] > 2LL * arr[j]) j++;
                cnt += (j - (mid + 1));
            }
            return cnt;
        }
        void merge(vector<int>&arr , int l , int mid , int r) {
            vector<int>temp;
            int cnt = 0;
            int i = l , j = mid+1;
            while(i<=mid || j<= r) {
                if(i == mid+1) {
                    temp.push_back(arr[j++]);
                } else if(j == r+1) {
                    temp.push_back(arr[i++]);
                } else if(arr[i] > arr[j]) {
                    temp.push_back(arr[j++]);
                } else {
                    temp.push_back(arr[i++]);
                }
            }
            for(int i=l; i<=r; i++) {
                arr[i] = temp[i-l];
            }
        }
        int mergeSort(vector<int>&arr , int l , int r) {
            if(l>=r) return 0;
            int mid = l + (r-l)/2;
            int cnt = mergeSort(arr, l , mid);
            cnt += mergeSort(arr, mid+1 , r);
            cnt += countPairs(arr , l , mid , r);
            merge(arr, l, mid, r);
            return cnt;
        }
    public:
        int reversePairs(vector<int>& nums) {
            return mergeSort(nums , 0 , nums.size()-1);
        }
};

int main() {

}
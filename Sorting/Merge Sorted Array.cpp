// https://leetcode.com/problems/merge-sorted-array/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            vector<int>temp(n+m);
            int x = 0, i = 0, j= 0;
            while(i<m || j<n) {
                if(i == m) temp[x++] = nums2[j++];
                else if(j == n) temp[x++] = nums1[i++];
                else if(nums1[i] > nums2[j]) temp[x++] = nums2[j++];
                else temp[x++] = nums1[i++];
            }
            nums1 = temp;
        }
};

int main() {

}
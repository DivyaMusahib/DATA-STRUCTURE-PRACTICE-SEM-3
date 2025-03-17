// https://leetcode.com/problems/find-lucky-integer-in-an-array/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findLucky(vector<int>& arr) {
            map<int,int>mp;
            for(auto it : arr) mp[-it]++;
            for(auto it : mp) if(-it.first == it.second) return -it.first;
            return -1;       
        }
};

int main() {

}
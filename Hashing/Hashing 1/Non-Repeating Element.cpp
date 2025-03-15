// https://www.geeksforgeeks.org/problems/non-repeating-element3958/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int firstNonRepeating(vector<int>& arr) {
          unordered_map<int,int>mp;
          for(auto it : arr) mp[it]++;
          for(auto it : arr) if(mp[it] == 1) return it;
          return 0;
      }
};

int main() {

}
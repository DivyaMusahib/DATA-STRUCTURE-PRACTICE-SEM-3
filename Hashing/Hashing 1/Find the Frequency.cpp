// https://www.geeksforgeeks.org/problems/find-the-frequency/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int findFrequency(vector<int> arr, int x) {
          map<int, int>mp;
          for(auto it : arr) mp[it]++;
          return mp[x];
      }
};

int main() {

}
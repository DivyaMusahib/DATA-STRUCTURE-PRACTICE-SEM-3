// https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> countDistinct(vector<int> &arr, int k) {
          map<int,int>mp;
          vector<int>ans;
          for(int i=0; i<k; i++) {
              mp[arr[i]]++;
          }
          ans.push_back(mp.size());
          for(int i=k; i<arr.size(); i++) {
              mp[arr[i]]++;
              mp[arr[i-k]]--;
              if(mp[arr[i-k]] <= 0) mp.erase(arr[i-k]);
              ans.push_back(mp.size());
          }
          return ans;
      }
};

int main() {

}
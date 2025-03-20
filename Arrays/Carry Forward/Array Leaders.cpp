// https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        int leader = arr[n-1];
        vector<int>ans;
        ans.push_back(leader);
        for(int i=n-2; i>=0; i--) {
            if(arr[i] >= leader) {
                leader = max(leader , arr[i]);
                ans.push_back(leader);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {

}
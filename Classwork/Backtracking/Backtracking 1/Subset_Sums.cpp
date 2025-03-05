// https://www.geeksforgeeks.org/problems/subset-sums2234/0
// sum of all subsets
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
      void printSubsetSum(vector<int>&ans , vector<int>&arr , int ind , int currSum){
          if(ind == arr.size()) {
              ans.push_back(currSum);
              return;
          }
          // take 
          printSubsetSum(ans , arr, ind+1, currSum + arr[ind]);
          // notTake
          printSubsetSum(ans , arr, ind+1, currSum);
          return;
      }
      
    public:
      vector<int> subsetSums(vector<int>& arr) {
          vector<int>ans;
          printSubsetSum(ans , arr , 0 , 0);
          return ans;
      }
};

int main(){

}
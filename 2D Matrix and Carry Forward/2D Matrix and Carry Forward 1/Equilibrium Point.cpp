// https://www.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int totalSum = accumulate(arr.begin(), arr.end(), 0);
        int currSum = 0;
        for(int i=0; i<arr.size(); i++) {
            if(currSum == (totalSum - arr[i] - currSum)) return i;
            currSum += arr[i];
        }
        return -1;
    }
};

int main() {

}
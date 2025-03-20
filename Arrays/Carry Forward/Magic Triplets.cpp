// https://www.geeksforgeeks.org/problems/magic-triplets4003/1
#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	int countTriplets(vector<int>nums){
	    int n = nums.size();
	    int ans = 0;
	    for(int i=0; i<n; i++) {
	       int curr = nums[i];
	       int cntLeft = 0 , cntRight = 0;
	       for(int j=i-1; j>=0; j--) if(nums[j] < curr) cntLeft++;
	       for(int j=i+1; j<n;  j++) if(nums[j] > curr) cntRight++;
	       ans += (cntLeft * cntRight);
	    }
	    return ans;
	}
};

int main() {

}
// https://www.geeksforgeeks.org/problems/find-distinct-elements--130928/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int distinct(vector<int>& arr) {
            set<int>st;
            for(auto it : arr) st.insert(it);
            return st.size();
        }      
};

int main() {

}
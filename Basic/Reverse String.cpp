// https://leetcode.com/problems/reverse-string/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void reverseString(vector<char>& s) {
            for(int i=0; i<= (s.size()-1)/2; i++){
                swap(s[i],s[s.size()-1-i]);
            }        
        }
};

class Solution {
    public:
        void reverseString(vector<char>& s) {
            reverse(s.begin(), s.end());
            return;
        }
};

int main() {

}
// https://leetcode.com/problems/valid-anagram/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isAnagram(string s, string t) {
            map<char,int>mp;
            for(auto it : s) mp[it]++;
            for(auto it : t) {
                if(mp.find(it) == mp.end()) return false;        
                else {
                    mp[it]--;
                    if(mp[it] <= 0) mp.erase(it);
                }
            }
            return mp.size() == 0;
        }
};

int main() {

}
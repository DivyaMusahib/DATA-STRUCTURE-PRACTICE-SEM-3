// https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
// dailpad - given number string output possible letter string
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private :
        void printPossibleString(string &s , int ind , int n , string digits, vector<vector<char>> &arr , vector<string> &ans){
            if(ind == n) {
                ans.push_back(s);
                return;
            }
            int num = digits[ind] - '0';
            for(auto it : arr[num]) {
                char ch = it;
                s += ch;
                printPossibleString(s, ind+1, n , digits, arr , ans);
                s.pop_back();
            }
        }
    
    public:
        vector<string> letterCombinations(string digits) {
            int n = digits.size();
            vector<string>ans;
            string s = "";
            vector<vector<char>> arr;
            arr.push_back({'!'});
            arr.push_back({'!'});
            arr.push_back({'a' , 'b' , 'c'});
            arr.push_back({'d' , 'e' , 'f'});
            arr.push_back({'g' , 'h' , 'i'});
            arr.push_back({'j' , 'k' , 'l'});
            arr.push_back({'m' , 'n' , 'o'});
            arr.push_back({'p' , 'q' , 'r' , 's'});
            arr.push_back({'t' , 'u' , 'v'});
            arr.push_back({'w' , 'x' , 'y', 'z'});
            printPossibleString(s, 0, n , digits, arr, ans);      
            for(auto it : ans) cout << it << " ";
            return ans;
        }
};

int main() {

}
// https://leetcode.com/problems/generate-parentheses/description/
// generate valid parenthesis given num of pairs
#include<bits/stdc++.h>
using namespace std;

class Solution {
    
    private:
        void printAllParenthesis(int openCount , int closeCount , string s,  int n , vector<string>&ansVec){
            if(openCount < closeCount || openCount > n) return ;
            if(openCount == n && closeCount == n) {
                ansVec.push_back(s);
                return;
            }
            printAllParenthesis(openCount+1 , closeCount , s + "(" , n , ansVec);
            printAllParenthesis(openCount , closeCount+1 , s + ")" , n , ansVec);
        }
    
    public:
        vector<string> generateParenthesis(int n) {
            vector<string>ansVec;
            string s = "";
            printAllParenthesis(0, 0, s, n , ansVec);
            return ansVec;
        }
};

int main() {

}
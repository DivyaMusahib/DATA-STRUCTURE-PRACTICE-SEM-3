// https://www.geeksforgeeks.org/problems/stuti-and-her-problem5846/1
#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    int func(int n , int s) {
        if(n == 0) return s-1;
        if(n < 0 ) return -1;
        return func(n-s, s+1);
    }
        
	public:
   	int find(int n){
   	    return func(n, 1);
   	}    
};

int main() {

}
// https://www.geeksforgeeks.org/problems/number-of-factors1435/1
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int countFactors(int N){
            int ans = 0;
            for(int i=1; i<=N; i++) {
                if((N%i) == 0) ans++;
            }
            return ans;
        }
};

int main() {

}
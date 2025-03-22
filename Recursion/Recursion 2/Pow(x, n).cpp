// https://leetcode.com/problems/powx-n/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        double pow(double base , int power) {
            if(power == 0) return 1.0;
            double temp = pow(base , power/2);
            if(power%2 == 0) return temp*temp;
            else return temp * temp * base;
        }
    public:
        double myPow(double x, int n) {
            if(n < 0) x = 1.0/x;
            return pow(x, n);
        }
};

int main() {

}
// https://www.geeksforgeeks.org/problems/gf-series3535/0
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        long long func(int n) {
            if(n == 0) return 0;
            if(n == 1) return 1;
            return (func(n-2)*func(n-2)*1LL) - (func(n-1)*1LL);
        }
    public:
        void gfSeries(int n) {
            for(int i=0; i<n; i++) {
                long long ans = func(i);
                cout << ans << " ";
            }
            cout << endl;
        }
};

int main() {

}
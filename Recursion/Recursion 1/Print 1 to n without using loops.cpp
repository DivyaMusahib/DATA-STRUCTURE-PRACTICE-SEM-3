// https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      void printTillN(int n) {
          if(n == 0) return ;
          printTillN(n-1);
          cout << n << " ";
      }
};  

int main() {

}
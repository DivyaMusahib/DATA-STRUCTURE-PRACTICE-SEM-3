// https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/0
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      void printNos(int N) {
          if(N == 0) return ;
          cout << N << " ";
          return printNos(N-1);
      }
};
  
int main() {

}
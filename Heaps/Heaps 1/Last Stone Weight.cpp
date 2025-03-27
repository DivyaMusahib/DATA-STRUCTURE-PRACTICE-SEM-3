// https://leetcode.com/problems/last-stone-weight/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int lastStoneWeight(vector<int>& stones) {
            priority_queue<int>pq(stones.begin(), stones.end());
            while(pq.size() > 1) {
                int first = pq.top();
                pq.pop();
                int second = pq.top();
                pq.pop();
                (first-second)!=0 ? pq.push(first-second) : void();
            }
            return ((pq.size() != 0) ? pq.top() : 0 );
        }
};

int main() {

}
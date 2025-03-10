// https://www.geeksforgeeks.org/problems/height-of-binary-tree/1
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
    
        Node(int val) {
            data = val;
            left = right = NULL;
        }
    };
    
    class Solution {
      private:
        int heightFunc(Node *node) {
            if(node == NULL) return 0;
            int l = heightFunc(node->left);
            int r = heightFunc(node->right);
            return max(l,r) + 1;
        }
      public:
        int height(Node* node) {
            return heightFunc(node) -1 ;
        }
};

int main() {

}
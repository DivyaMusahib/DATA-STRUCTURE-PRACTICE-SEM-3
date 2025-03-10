// https://www.geeksforgeeks.org/problems/size-of-binary-tree/1
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution {
  private:
    int preSize(Node* node) {
        if(node == nullptr) return 0;
        int l = preSize(node->left);
        int r = preSize(node->right);
        return l + r + 1;
    }
    
  public:
    int getSize(Node* node) {
        return preSize(node);
    }
};

int main() {

}
// https://www.geeksforgeeks.org/problems/sum-of-leaf-nodes/1
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution {
  public:
    int leafSum(Node* node) {
        if(node == NULL) return 0;
        if(node->left == nullptr && node->right == nullptr) return node->data;
        int l = leafSum(node->left);
        int r = leafSum(node->right);
        return l+ r;
    }
};

int main() {

}
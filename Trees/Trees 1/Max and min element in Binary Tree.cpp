// https://www.geeksforgeeks.org/problems/max-and-min-element-in-binary-tree/1
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
    public:
        int findMax(Node *root) {
            if(root == nullptr) return INT_MIN;
            int l = findMax(root->left);
            int r = findMax(root->right);
            return max({l, r, root->data});
        }
        int findMin(Node *root) {
            if(root == nullptr) return INT_MAX;
            int l = findMin(root->left);
            int r = findMin(root->right);
            return min({l, r, root->data});
        }
};

int main() {

}
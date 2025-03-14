// https://leetcode.com/problems/binary-tree-preorder-traversal/description/
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        vector<int>ans;
        void pre(struct TreeNode* root) {
            if(root == nullptr) return ;
            ans.push_back(root->val);
            pre(root->left);
            pre(root->right);
        }
    
        vector<int> preorderTraversal(TreeNode* root) {
            pre(root);
            return ans;
        }
};

int main() {

}
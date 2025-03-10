// https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1
#include<bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
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
    private :
      int sumFunc(Node *node) {
          if(node == nullptr) return 0;
          int l = sumFunc(node->left);
          int r = sumFunc(node->right);
          int curr = node->data;
          return l + r + curr;
      }
    public:
      int sumBT(Node* root) {
          return sumFunc(root);
      }
};
  
int main() {

}
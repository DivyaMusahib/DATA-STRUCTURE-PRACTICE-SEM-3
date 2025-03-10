// https://www.geeksforgeeks.org/problems/binary-tree-representation/1
#include<bits/stdc++.h>
using namespace std;

struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}

class Solution{
    public:
        void create_tree(node* root, vector<int> &vec){
            // root = newNode(vec[0]); 
            struct node *two = newNode(vec[1]); 
            struct node *three = newNode(vec[2]); 
            struct node *four = newNode(vec[3]); 
            struct node *five = newNode(vec[4]); 
            struct node *six = newNode(vec[5]); 
            struct node *seven = newNode(vec[6]); 
            root-> left = two;
            root-> right = three;
            two-> left = four;
            two-> right = five;
            three-> right = seven;
            three-> left = six;
        }
    
};

int main() {

}
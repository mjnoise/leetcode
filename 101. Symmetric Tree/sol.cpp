#include<bits/stdc++.h>
//Definition for a binary tree node.
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
    bool mirror(TreeNode* left, TreeNode* right){
        if(left == NULL && right == NULL){
            return true;
        }
        if(left && right && left ->val == right->val){
            return mirror(left->left, right->right) && mirror(left->right, right->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
       return mirror(root->left, root->right);
    }
};
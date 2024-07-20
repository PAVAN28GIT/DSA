// https://leetcode.com/problems/balanced-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* node){
        if(node == NULL){
            return NULL;
        }
        int left = height(node->left);
        int right = height(node->right);
        if(left == -1 || right == -1){
            return -1;
        }
        if(abs(left-right) > 1){
            return -1;
        }
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        bool leftb = isBalanced(root->left);
        bool rightb = isBalanced(root->right);
        int lh = height(root->left);
        int rh = height(root->right);
        if(abs(lh-rh) > 1 ){
            return false;
        }
        if(!leftb || !rightb){
            return false;
        }
        return true;

    }
};

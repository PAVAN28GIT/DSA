// Given the root of a binary tree, invert the tree, and return its root.

// given a binary tree.. u shld swap left and right childrens of all nodes..and return the root node
// swap from bottom u will get

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        if(root->left == NULL && root->right == NULL){
            return root;
        }
        TreeNode* leftn = invertTree(root->left);
        TreeNode* rightn = invertTree(root->right);
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        return root;
    }
};

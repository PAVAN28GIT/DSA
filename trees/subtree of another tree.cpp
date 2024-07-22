// Given the roots of two binary trees root and subRoot, 
// return true if there is a subtree of root with the same structure and node values of subRoot and false otherwise.

// A subtree of a binary tree tree is a tree that consists of a node in tree and all of this node's descendants. 
// The tree tree could also be considered as a subtree of itself.


// link for question : https://leetcode.com/problems/subtree-of-another-tree/description/



class Solution {
public:

    bool equal(TreeNode* a, TreeNode* b){
        if (a == NULL && b == NULL) return true;
        if(a == NULL || b == NULL) return false;
        if(a->val!=b->val)
            return false;
        
        bool left = equal(a->left, b->left);
        bool right = equal(a->right, b->right);
        if(left && right )
            return true;
        
        return false;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if(subRoot == NULL)return true;
        if(root == NULL)return false;
        if(equal(root,subRoot)){
            return true;
        }
        bool left = isSubtree(root->left,subRoot);
        bool right = isSubtree(root->right,subRoot);
        return left || right;
     
    }
};

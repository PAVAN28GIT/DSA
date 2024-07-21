// problem : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

// youtubr : https://www.youtube.com/watch?v=_-QHfMDde90

// recurse and keep going... if u find root == p or q , return that root..
// if both left and right are null , return null,
// if one of them (left/right) is not null, then return other 
// if both are not null.. u find answer ..return that 

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || root == p || root == q) return root;

        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);
        
        if(left && right){ // found LCA
            return root;
        }
        if(right == NULL && left == NULL){
            return NULL;
        }
        // when u find one of the lce 
        if(left !=NULL && right == NULL){ 
            return left;
        }
        if(right !=NULL && left == NULL){
            return right; 
        }
        
        return root;
    }
};

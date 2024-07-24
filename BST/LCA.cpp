// problem : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/



//LCA for BST -> O(H) height ...time complexity 
// u see if both p and q are bigger than root , if yes return left subtree
// if both p and q are lesser than root , return right subtree
// else return root ...... because else means either u have root = p or root = q or u have p and q in either side of that root



class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL)return NULL;
         if (root->val > p->val && root->val > q->val)
            return lowestCommonAncestor(root->left, p, q);
        else if (root->val < p->val && root->val < q->val)
            return lowestCommonAncestor(root->right, p, q);
        else return root;
    }
};


// LCA for Binary Tree

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || root == p || root == q)return root;
        if(root->left == NULL && root->right == NULL) return NULL;

        
        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);
        if(left == NULL)return right;
        if(right == NULL) return left;
        if(left && right) return root;
        return root;

    }
};

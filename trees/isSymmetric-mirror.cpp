class Solution {
public:

    bool mirror(TreeNode* lf,TreeNode* rt){
        if(lf == NULL && rt == NULL) return true;
        if (lf == NULL || rt == NULL ) return false;

        bool val = lf->val == rt->val;
        bool left =  mirror(lf->left,rt->right) ;
        bool right = mirror(lf->right,rt->left);
        return left && right && val;
    }
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return NULL;
        return mirror(root->left,root->right);
    }
};

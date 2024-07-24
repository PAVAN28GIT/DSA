//problem : https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/


class Solution {
public:
    TreeNode* insert(TreeNode*& root, int val){
        if(root==NULL) return NULL;
        TreeNode* cur = root;
        while(true){
            if (val < cur->val){
                if(cur->left == NULL){
                    cur->left = new TreeNode(val);
                    break;
                }else{
                    cur = cur->left;
                }

            }else{
                if(cur->right == NULL){
                    cur->right = new TreeNode(val);
                    break;
                }else{
                    cur = cur->right;
                }

            }
    }
    return root;
}
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = new TreeNode(preorder[0]);
        for(int i =1;i<preorder.size();i++){
            insert(root,preorder[i]);
        }
        return root;
    }
};


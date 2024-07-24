// using while (true) 
//compare is val is greater of lesser than cur node.. then check if left/right is null if yes put it there, no then make that as cur node and go further searching

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

//Given the roots of two binary trees p and q, write a function to check if they are the same or not.

//Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p== NULL && q == NULL){
            return true;
        }
        if(p== NULL && q != NULL){
            return false;
        }
        if(p!= NULL && q == NULL){
            return false;
        }
        bool left = isSameTree(p->left , q->left);
        bool right = isSameTree(p->right , q->right);

        bool value = p->val == q->val;

        if(left && right && value){
            return true;
        }
        else{
            return false;
        }
    }
};

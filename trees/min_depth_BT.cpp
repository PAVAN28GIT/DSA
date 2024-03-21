//The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.



class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL){
            return 0;
        }

        if(root->left == NULL){
            return minDepth(root->right)+1;
        }
        if(root->right == NULL){
            return minDepth(root->left)+1;
        }

        int left = minDepth(root->left);
        int right = minDepth(root->right);

        return min(left,right)+1;        
    }
};

// Given the root of a binary tree, return the length of the diameter of the tree.

// The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

// The length of a path between two nodes is represented by the number of edges between them.



#include<utility>

class Solution {
public:
    // pair<int,int> = diameter , height

    pair<int,int> fast(TreeNode* root){
        if(root == NULL){
            return make_pair(0,0);
        }
        
        pair<int,int> left = fast(root->left);
        pair<int,int> right = fast(root->right);
        
        int op1 = left.first; //left_d
        int op2 = right.first; //right_d
        int op3 = left.second+right.second+1; 

        pair<int,int> ans;
        ans.first = max(op1,max(op2,op3));
        ans.second = max(left.second , right.second)+1;
        return ans;
    }
    // int height(TreeNode* root){
    //     if(root == NULL){
    //         return 0;
    //     }
    //     int left = height(root->left);
    //     int right = height(root->right);
    //     int ans = max(left,right)+1;
    //     return ans;

    // }

    // right | left | left+right+1

    int diameterOfBinaryTree(TreeNode* root) {

        pair<int,int> ans = fast(root);
        return ans.first-1;
    //     if(root == NULL ){
    //         return 0;
    //     }

    //     int left_d = diameterOfBinaryTree(root->left);
    //     int right_d = diameterOfBinaryTree(root->right);
    //     int op3 = height(root->left) + height(root->right);

    

    //     int ans = max(left_d,max(right_d,op3));
    //     return ans;
     }
};

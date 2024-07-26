// problem : https://leetcode.com/problems/binary-tree-maximum-path-sum/description/

// solution :  https://www.youtube.com/watch?v=WszrfSwMz58&list=PLkjdNRgDmcc0Pom5erUBU4ZayeU9AyRRu&index=18
// CRAZY PROBLEM...... 


class Solution {
public:
    int maxpath(TreeNode* root, int& maxi){
        if(root == NULL){
            return 0;
        }
        int left = maxpath(root->left,maxi);
        int right = maxpath(root->right,maxi);

        if (left < 0) left=0;
        if (right < 0) right =0;
        maxi = max(maxi, ( left+right+root->val) );
        return max(left,right)+root->val; 

    }
    int maxPathSum(TreeNode* root) {

        int maxi = INT_MIN;
        maxpath(root, maxi);
        return maxi;
              
    }
};

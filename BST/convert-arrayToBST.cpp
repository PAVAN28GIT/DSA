// problem : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

//converting sorted array to binary search tree



class Solution {
public:
    TreeNode* create(TreeNode*& root, int low, int high,vector<int> nums){
        if(low>high){
            return NULL;
        }
        int mid = (low+high)/2;
        root = new TreeNode(nums[mid]);
        root->left = create(root->left,low,mid-1,nums);
        root->right = create(root->right,mid+1,high,nums);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = NULL;
        create(root,0,nums.size()-1,nums);
        return root;
        
    }
};

// problems : https://leetcode.com/problems/count-good-nodes-in-binary-tree/

// i did on my own 


class Solution {
public:
    TreeNode* findcount(TreeNode* root, int& count,vector<int>& cur_max){
        if(root == NULL)return NULL;
        int prev_max = cur_max.back();

        cur_max.push_back(max(root->val,prev_max));

        if(root->val >= prev_max){
            count++;
        }
        TreeNode* left = findcount(root->left,count,cur_max);
        TreeNode* right = findcount(root->right,count,cur_max);
        cur_max.pop_back();
        return root;
        
    }
    int goodNodes(TreeNode* root) {
        if(root == NULL)return 0;

        int count =0;
        vector<int> cur_max;      
        cur_max.push_back(root->val);

        findcount(root, count,cur_max);
        return count;
    }
};

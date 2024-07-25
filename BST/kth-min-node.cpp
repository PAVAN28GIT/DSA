// problem : https://leetcode.com/problems/kth-smallest-element-in-a-bst/

// if kth largest is asked........find total no of nodes... n then find (n-k)th smallest node

class Solution {
public:
// inorder ... left , update res , right
    int solution(TreeNode* root,int& k , int& res){
        if(root == NULL || k==0) return 0;
        solution(root->left, k,res);
        if(k>0){
            res = root->val;
            k--;
        }
        solution(root->right,k,res);
        
        return 0;
    }
    int kthSmallest(TreeNode* root, int k) {
        int res = root->val;
        solution(root,k,res);
        return res;
    }
};

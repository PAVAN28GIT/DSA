/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 //youtube link : https://www.youtube.com/watch?v=ffE1xj51EBQ
 
class Solution {
public:
    int findpos(int element,vector<int>& inorder){
        for(int i = 0;i<inorder.size();i++){
            if(inorder[i] == element){
                return i;
            }
        }
        return -1;
    }

    TreeNode* solve (vector<int>& preorder, vector<int>& inorder, int &index,int inorderStart,int inorderEnd){
        if(index>= preorder.size() || inorderStart > inorderEnd){
            return NULL;
        }
        
        int element = preorder[index++];
        int pos = findpos(element,inorder);
        TreeNode* root = new TreeNode(element);

        root->left = solve(preorder,inorder,index,inorderStart,pos-1);
        root->right = solve(preorder,inorder,index,pos+1,inorderEnd);  // inorderEnd gets updated everytime...trace properly u will understand
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preorderindex = 0 ;
        int end = inorder.size();
        return solve(preorder,inorder,preorderindex,0,end);

    }
};

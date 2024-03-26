// Given the roots of two binary trees root and subRoot, 
// return true if there is a subtree of root with the same structure and node values of subRoot and false otherwise.

// A subtree of a binary tree tree is a tree that consists of a node in tree and all of this node's descendants. 
// The tree tree could also be considered as a subtree of itself.


// link for question : https://leetcode.com/problems/subtree-of-another-tree/description/



solution : 


#include<queue>

class Solution {

// traverse in root tree..untill u find subroot ..
//once u find it traverse in both simultaneously comparing the values
public:

    TreeNode* Lvlorder(TreeNode* root,TreeNode* subRoot){
        if(root == NULL || subRoot == NULL){
            return NULL;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if (temp->val == subRoot->val){
                if(compare(temp,subRoot)){
                    return temp;                   
                }
                
            }
            if (temp->left) { // Checking if left child exists
                q.push(temp->left);
            }
            if (temp->right) { // Checking if right child exists
                q.push(temp->right);
            }
        }
        
        return NULL;
    }
    bool compare(TreeNode* node1, TreeNode* node2){
        if(node1 == NULL && node2 == NULL){
            return true;
        }
        if(node1 == NULL && node2!= NULL || node1 != NULL && node2 ==NULL){
            return false;
        }
        bool op1 = compare(node1->left,node2->left);
        bool op2 = compare(node1->right,node2->right);
        bool op3 = node1->val == node2->val;

        if (op1 && op2 && op3 ){
            return true;
        }else{
            return false;
        }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        TreeNode* node = Lvlorder(root,subRoot);
        if(node == NULL){
            return false;
        }
        else{
            return true;
        }
    }
};


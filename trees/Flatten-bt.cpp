// prob : 

// for moris traversal remeber 2 cases
// if(curr_root->left == NULL) go to right
// else go to the rightmost node of left subtree 
    // if right of that node is null ..... create a thread to   current root
    // else (means already node has thread) so remove that thread and move current_root to right


//post preorder : coming from reverse
class Solution {
public:

    TreeNode* prev = NULL;
    void flatten(TreeNode* root) {
        if(root == NULL)return ;
        flatten(root->right);
        flatten(root->left);
        root->left = NULL;
        root->right = prev;
        prev = root;
    }
};


// BRURTE FORCE : 
// 1. copy all nodes from current tree into queue in preorder way 
// 2. change the tree .. keep adding nodes from queue into right side of root
class Solution {
public:

    void preorder(TreeNode* root,queue<int>& preord){
        if(root == NULL)return;
        preord.push(root->val);
        preorder(root->left,preord);
        preorder(root->right,preord);

    }
    void construct(TreeNode*& root, queue<int> preord){    
        while(!preord.empty()){
            int a = preord.front();
            root->left = NULL;
            TreeNode* temp = new TreeNode(a);
            root->right = temp ;
            root = root->right;
            preord.pop();
        }
    }
    void flatten(TreeNode* root) {
        if(root== NULL) return ;
        queue<int> preord;
        preorder(root,preord);
        preord.pop();
        construct (root,preord);
       
    }
};

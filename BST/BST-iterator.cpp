// problem : https://leetcode.com/problems/binary-search-tree-iterator/


class BSTIterator {
public:
    stack<TreeNode*> st;
    BSTIterator(TreeNode* root) {
       pushleft(root);
    }
    void pushleft(TreeNode* root){       
       while(root!= NULL){
        st.push(root);
        root = root->left;
       }
    }
    
    int next() {
        if(st.empty()) return 0;
        TreeNode* temp = st.top();
        st.pop();
        int x = temp->val;
        pushleft(temp->right);
        return x;
    }
    
    bool hasNext() {
        if(st.empty())return false;
        else return true;
    }
};

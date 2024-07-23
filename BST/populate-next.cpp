//problem : https://leetcode.com/problems/populating-next-right-pointers-in-each-node/
//i did on my own ..after seeing hint in discussion 

// think how to connect ......try drawing connection line backtracking to parent 
class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL)return NULL;
        if(root->left && root->right){
            if(root->next!=NULL){
                root->right->next = root->next->left;
            }
            root->left->next = root->right;

        }        
        Node* left = connect(root->left);
        Node* right = connect(root->right);
        return root;
    }
};

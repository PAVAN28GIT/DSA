// problem :

// define a range for each node ..each node can have only a range of value in BST ...

// left node can be btwn  [ low , root->val)
// right node can be btwn ( root->val , high ]


// int           =  4 bytes, [-2,147,483,648 to 2,147,483,647]
// long          =  4 bytes, [-2,147,483,648 to 2,147,483,647] (platform-dependent, could be 8 bytes on some systems)
// long long     =  8 bytes, [-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807]
// float         =  4 bytes, [1.2E-38 to 3.4E+38] (approximate range)
// double        =  8 bytes, [2.3E-308 to 1.7E+308] (approximate range)
// long double   =  16 bytes, [3.4E-4932 to 1.1E+4932] (approximate range, platform-dependent)

  
class Solution {
public:
    bool helper(TreeNode* root , long long  low , long long  high){
        if (root == NULL) return true;
        if(root->val <= low || root->val >= high){
            return false;
        }
        bool left = helper(root->left, low,root->val);
        bool right = helper(root->right, root->val, high);
        return left && right;
    }
    bool isValidBST(TreeNode* root) {
        long long low = LLONG_MIN;
        long long  high = LLONG_MAX;
        return helper(root,low,high);
    }
};

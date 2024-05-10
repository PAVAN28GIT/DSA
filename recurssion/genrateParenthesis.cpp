// problem: https://leetcode.com/problems/generate-parentheses/

// crazzzy question

class Solution {
public:

    void trycombo(int open,int close,vector<string>& res,string str){
        if(open ==0 && close ==0){
            res.push_back(str);
            return ;
        }
        if(open>0){
            trycombo(open-1,close,res,str+"(");
        }
        if(close>0 && close>open){
            trycombo(open,close-1,res,str+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        int open = n;
        int close = n;
        trycombo(open,close,res,"");
        return res;
    }
};

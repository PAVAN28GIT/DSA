// problem : https://leetcode.com/problems/evaluate-reverse-polish-notation/description/


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(string tok: tokens){
            if(tok == "+" || tok == "-" ||tok =="*" ||tok =="/"){
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                int c;
                if(tok == "+"){
                    c = a+b;
                }
                else if(tok == "-"){
                    c =b-a;
                }
                else if(tok == "*"){
                    c = a*b;
                }
                else{
                    c = b/a;
                }
                st.push(c);
            }else{
                int num = stoi(tok);
                st.push(num);
            }
        }
    return st.top();
    }
};

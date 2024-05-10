// problem : https://leetcode.com/problems/daily-temperatures/description/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> st;
        st.push(0);
        vector<int> vec(n,0);
        for(int i =1;i<n;i++){
            while(!st.empty()){
                int n = st.top();
                if(temperatures[i]>temperatures[n]){
                    vec[n] = i-n;
                    st.pop();
                }else{
                    break;
                }
            }
            st.push(i);
        }
        return vec;
    }
};

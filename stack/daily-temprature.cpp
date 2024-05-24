// problem : https://leetcode.com/problems/daily-temperatures/description/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int k = temperatures.size();
        stack<int> st;
        vector<int> vec(k,0);

        // st.push(0);
        // for(int i =1;i<k;i++){
        //     while(!st.empty()){
        //         int n = st.top();
        //         if(temperatures[i]>temperatures[n]){
        //             vec[n] = i-n;
        //             st.pop();
        //         }else{
        //             break;
        //         }
        //     }
        //     st.push(i);
        // }
        st.push(k-1);
        for(int i = k-2;i>=0;i--){
            while(!st.empty()){
                int n = st.top();
                if(temperatures[i]>=temperatures[n]){
                    st.pop();
                }
                else{
                    break;
                }
            }
            if(!st.empty()){
                int n = st.top();
                vec[i] = n-i;
            }
            st.push(i);
        }
        return vec;
    }
};

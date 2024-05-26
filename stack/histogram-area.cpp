// HARD

// PROBLEM : https://leetcode.com/problems/largest-rectangle-in-histogram/


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        

        // monotonic stack :  means u will maintain order in elements either ascending or descending..
        // in increasing monotonic stack .... 
        // u keep pushing numbers if its greater than top element... 
        // when u encounter element thats smaller than top element..
        // u pop untill the top element is smaller than new element u want to push and perform operations on all those poped elements...depending on question...

        stack<int> st; // stores indexes 
        int max_area = 0;
        int ind =0;
        while(ind <heights.size()){
            if(st.empty() || heights[ind]>=heights[st.top()]){
                st.push(ind++);
            }
            else{
                int top_ind = st.top();
                st.pop();
                int curr_area = heights[top_ind] * (st.empty() ? ind : ind - st.top() -1);
                max_area = max(max_area, curr_area);

            }
        }
        while(!st.empty()){
                int top_ind = st.top();
                st.pop();
                int curr_area = heights[top_ind] * (st.empty() ? ind : ind - st.top() -1);
                max_area = max(max_area, curr_area);

        }
        return max_area;

    }
};

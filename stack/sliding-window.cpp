// HARD

// probelm : https://leetcode.com/problems/sliding-window-maximum/


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; // stores index
        // in front of dq always the greater element of current window will be stored
        // note : our queue doesnt always contain all elements of current window
        vector<int> result;
        
        for(int i =0;i<nums.size();i++){
            // check if the front of dq is our of window range and pop it 
            if(!dq.empty() && dq.front()<i-k+1){
                dq.pop_front();
            }

            // if there are any element in dq that is smaller than current element pop them front back and push nums[i]
            while(!dq.empty() && nums[dq.back()]< nums[i]){
                dq.pop_back(); 
            }
            // once u remove all smaller elements than current element push current element
            dq.push_back(i);
            if(i>=k-1){
                result.push_back(nums[dq.front()]);
            }
        }
        return result;
    }
};

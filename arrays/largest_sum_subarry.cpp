
    // kadaen's algorithm   ---->   2 pointers ,,,curr and maxtillnow


//Given an integer array nums, find the subarray with the largest sum, and return its sum.

//problem : https://leetcode.com/problems/maximum-subarray/description/


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    


        int maxTillNow = 0;
        int curr = 0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            curr = max(curr+nums[i],nums[i]);
            maxTillNow = max(maxTillNow , curr);
        }
        return maxTillNow;
        
    }
};

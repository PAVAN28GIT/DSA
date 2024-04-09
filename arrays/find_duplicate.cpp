//problem : https://leetcode.com/problems/find-the-duplicate-number/description/

//There is only one repeated number in nums, return this repeated number...
//range of nums is given if n is no of elements in nums them all numbers lie btwn [1,n-1

class Solution {
public:

// using binary search
    int findDuplicate(vector<int>& nums) {
        int left = 1;
        int right = nums.size()-1;           //range of possible numbers
    
        while(left<right){
            int count = 0;
            int mid = left +(right-left)/2;
          
            for(int num:nums){
                if(num<=mid){
                    count++;
                }
            } 
          
            if(count>mid){
                right = mid;
            } 
            else{
                left = mid+1;
            }
        }
        return right;
          

    }


//using simple logic
    // int findDuplicate(vector<int>& nums) {

    //     int n = nums.size();
    //     vector<int> track(n,0);
    //     for(int i = 0 ; i<n;i++){
    //         int n = nums[i];
    //         if(track[n]==1){
    //             return n;
    //         }else{
    //             track[n]=1;
    //         }
    //     }
    //     return 0;
        
    // }
};

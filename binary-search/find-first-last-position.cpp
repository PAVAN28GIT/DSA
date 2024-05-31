// problem : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
    
        int first = -1;
        int last = -1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if (nums[mid] == target){
                first = mid;
                last = mid;
                while(first-1 >=0 && nums[first-1] == target)first -= 1;
                while(last+1 <nums.size() && nums[last+1] == target) last+=1;
                break;
            }
            if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return {first,last};
    }
};

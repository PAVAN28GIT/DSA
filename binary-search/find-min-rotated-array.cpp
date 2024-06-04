// problem : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/?envType=study-plan-v2&envId=binary-search



class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int n = nums.size();
        int high= n-1;
        while(low<high){
            int mid = low+(high-low)/2;
            if(nums[mid]>=nums[high]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return nums[high];
    }
};

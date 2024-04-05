// selection sort - O(n^2)
// bubble sort - O(n^2)

//problem : https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
      
        //inplace sorting - selection sort
        for(int i = 0 ; i<n-1 ; i++){
            int min = i ;
            for(int j = i+1 ;j<n;j++){
                if(nums[j]<nums[min]){
                    min=j;
                }
            }
            swap(nums[min],nums[i]);
        }

        //inplace - bubble sorting

        // for(int i = 1;i<n;i++){
        //     for(int j = 0;j<n-i;j++){
        //         if(nums[j]>nums[j+1]){
        //             swap(nums[j],nums[j+1]);
        //         }
        //     }
        // }
        
    }
};

//problem : https://leetcode.com/problems/two-sum/

//comment is n^2
// non commented is using hash map


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i =0 ;i<nums.size();i++){
            int diff = target - nums[i];
            if(map.count(diff)){
                return {map[diff],i};
            }
            map[nums[i]] = i;
        }

        // for(int i =0;i<nums.size();i++){
        //     int diff = target - nums[i];
        //     for(int j =0;j<nums.size();j++){
        //         if(i!=j){
        //             if(nums[j]==diff){
        //                 return {i,j};
        //             }
        //         }
        //     } 
        // }

        return {};
    }
};

// problem : https://leetcode.com/problems/subarray-sum-equals-k/description/


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> hashmap;     // maps sum to its frequency
        int count =0;
        int sum = 0;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
            if(sum == k){
                count++;
            }
            int diff = sum - k;
            // if difference of sum and k is in hashmap ..then there is subarray with sum =k ending at index i
            if(hashmap.find(diff)!= hashmap.end()){
                count+= hashmap[diff];
            }
            hashmap[sum]++;
        }
        return count;
    }
};

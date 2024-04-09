//problems : https://leetcode.com/problems/majority-element-ii/description/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result ;
        int n = nums.size()/3;
        map<int,int> countMap;
        
        //make frequency vector for each
        for(int num : nums){
            countMap[num]++;
        }
        for(int i = 0 ; i<nums.size();i++){
            if (countMap[nums[i]] > n){
                countMap[nums[i]]/=10;          // quick thinking ..good
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};


// concept

// to create a frequency map for elements of array ..use map

// map<int,int> mymap;
// for(int a : arr){
//     mymap[a]++;
// }

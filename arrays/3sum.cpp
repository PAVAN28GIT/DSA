//problem : https://leetcode.com/problems/3sum/


// 3 pointer approach

// intuition:
// - sort the array
// - u need 3 loops in brute force ..so we need 3 pointers here also.. -> 1 will be loop and other 2 as pointer
// - now these 2 pointer shld be somewhere  btwn i+1 and last.. so lets keep one pointer at i+1 and other at last element
// - now we will find sum of all 3 pointers and if == 0 then push into result vector , if less move j to next and if more than 0 then move k to left

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
  
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());


        for( int i=0 ;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){ // to avoid duplicate 
                continue;
            }
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k] == 0){
                    result.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(nums[j]==nums[j-1] && j<k){ // to avoid duplicates
                        j++;
                    }
                }
                else if (nums[i]+nums[j]+nums[k]<0){         
                    j++;              
                }
                else{
                    k--;
                }
            }
        }
        return result;
    }
};

//   hashset solution : TLE

class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        
        set<vector<int>> st;
        set<int> hashset;

        for(int i = 0 ;i<n;i++){
            hashset.clear();
            for(int j = i+1 ; j<n;j++){
                int diff = -(nums[i]+nums[j]);
                if(hashset.count(diff)){
                    vector<int> temp = {nums[i],nums[j],diff};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};

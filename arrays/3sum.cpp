//problem : https://leetcode.com/problems/3sum/


// 2 pointer solution

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

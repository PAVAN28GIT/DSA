//problem : 


class Solution {
public:

// topics :  hashset 

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

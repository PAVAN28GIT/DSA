//Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

//problem : https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> frq;
        for(int num : nums){
            frq[num]++;
        }

        vector<pair<int,int>> vec(frq.begin(),frq.end());
   
        //sort by value
        sort(vec.begin(), vec.end(), [](const auto &a, const auto &b) {
        return a.second > b.second;
        });

        vector<int>ans;

        for(int i = 0 ;i<k;i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};

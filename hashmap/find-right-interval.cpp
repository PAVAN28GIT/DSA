// problem : https://leetcode.com/problems/find-right-interval/?envType=study-plan-v2&envId=binary-search


// its BINARY SEARCH PROBLEM 




class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        
        int n = intervals.size();
        map<int,int> mp;
        for(int i =0;i<n;i++){
            mp[intervals[i][0]] = i;
        }
        
        vector<int> result;
        for(int i =0;i<n;i++){
            auto it = mp.lower_bound(intervals[i][1]);
            if(it!=mp.end()){
                result.push_back(it->second);
            }else{
                result.push_back(-1);
            }
        }
        return result;
        
    }
};

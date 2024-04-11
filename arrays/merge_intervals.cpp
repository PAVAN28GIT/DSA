// it screwed me up..crazy also easy

// problem : https://leetcode.com/problems/merge-intervals/description/
//solution utube : https://www.youtube.com/watch?v=IexN60k62jo



class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> rslut;
        //1. sort
        sort(intervals.begin(),intervals.end());
        //2. push first element
        rslut.push_back(intervals[0]);

        //2. maintain 2 pointers ...find overlapping...update pointers accordingly
        int i = 0;
        int j = 1;
        while(j<intervals.size()){
            if(rslut[i][1]>=intervals[j][0]){
                if(rslut[i][1]<intervals[j][1]){
                    rslut[i][1] = intervals[j][1];
                }
                j++;
            }
            else{
                rslut.push_back(intervals[j]);
                i++;
            }
        }
        return rslut;
    }   
};

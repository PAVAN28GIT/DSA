// problem :https://leetcode.com/problems/find-k-pairs-with-smallest-sums/description/

// CRAZY PROBLEM

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>pq;
        for(int x : nums1){
            pq.push({x+nums2[0] , 0}); // push sum of each elements of nums1 with first element of nums2 and index of 2nd element in the sum
        }
        vector<vector<int>> result;
        while(k-- && !pq.empty()){
            int sum = pq.top().first;   // smallest sum in pq
            int pos = pq.top().second;  // index of 2nd element..ie from nums2
            pq.pop();
            result.push_back({sum-nums2[pos] , nums2[pos]}); //push nums1 and nums2 pair

            // for the same nums1 element x ..just add the sum of x with next element in nums2 (pos+1) to pq
            if(pos+1 < nums2.size()){
                pq.push( {sum-nums2[pos] + nums2[pos+1] , pos+1 });
            }
            // when u pop 3 smallest pairs this loop will end 
        }        
        return result;
    }
};

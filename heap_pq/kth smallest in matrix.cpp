//problem : https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/


#include<queue>

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        priority_queue<int,vector<int>,greater<int>> min_heap;
        int r = matrix.size();
        int c = matrix[0].size();
       
        for(int i = 0;i<r;i++){
            for(int j=0;j<c;j++){
                min_heap.push(matrix[i][j]);
            }
        }
        for(int i = 0;i<k-1;i++){
            min_heap.pop();
        }
        return min_heap.top();
    }
};

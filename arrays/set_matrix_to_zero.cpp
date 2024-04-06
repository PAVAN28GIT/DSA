//problem : https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void zero(vector<vector<int>>& matrix ,vector<vector<int>> arr){
        int m = matrix.size(); // rows 3
        int n = matrix[0].size();  // col 4

        for(int i = 0 ; i <arr.size();i++){
            int k = arr[i][0]; // row
            int l = arr[i][1];  // col
            //setting colum to 0
            for(int j = 0 ; j<n ; j++){
                matrix[k][j] = 0;
            }
           
            // setting row to 0
            for(int j=0 ; j<m ; j++){
                matrix[j][l] = 0;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); // rows 3
        int n = matrix[0].size();  // col 4
        vector<vector<int>> arr;  
        for(int i = 0 ; i <m ; i++){
            for(int j = 0 ;j<n ; j++){
                if(matrix[i][j] == 0){
                    arr.push_back({i,j});
                }
            }
        }
        zero(matrix,arr);

    }
};

// info ---> remove duplicates;

        // sort(arr.begin(), arr.end()); //sort
        // auto last = unique(arr.begin(), arr.end()); // move duplicates to end
        // erase(last,arr.end()); // erase them

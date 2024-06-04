// problem : https://leetcode.com/problems/search-a-2d-matrix/?envType=study-plan-v2&envId=binary-search



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int m = matrix.size()-1;  
        int n = matrix[0].size()-1; 
        

        if(n==m && m==0){
            if (matrix[0][0]==target){
                return true;
            }
            else{
                return false;
            }
        }
        while(i<=m){
            if (target<=matrix[i][n]){
                int l = 0;
                int h = n;
                while(l<h){
                    int mid = l+(h-l)/2;
                    if(target == matrix[i][mid]){
                        return true;
                        break;
                    }
                    if(target<matrix[i][mid]){
                        h = mid;
                    }
                    else if(target>matrix[i][mid]){
                        l = mid+1;
                    }
                }
                if(target==matrix[i][l]){
                    return true;
                }
            }
            i++;
        }

        return false;
        
    }
};

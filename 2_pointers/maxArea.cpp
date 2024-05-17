// problem : https://leetcode.com/problems/container-with-most-water/


class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxArea =0;
        while(left<right){

            // condition based math
            int len = min(height[left],height[right]);
            int curArea = len*(right -left);
            maxArea = max(maxArea,curArea);  // use max function in all question that ask u maximum value ....

            // move left pointer
            if(height[left]<height[right]){
                left++;
            }
            // move right pointer
            else{
                right--;
            }

        }
        return maxArea;
    }
};

//probelm : https://leetcode.com/problems/kth-largest-element-in-an-array/description/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int ,vector<int>,greater<int>> min_heap;

        for(int i =0 ;i<k ;i++){
            min_heap.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(nums[i]>min_heap.top()){
                min_heap.pop();
                min_heap.push(nums[i]);
            }
        }
        return min_heap.top();
    }
};

//logic :

// u push first k elements to minHeap..so minHeap contains k smallest elements encounterd so far
// and them u compare rest elements with smallest element in heap nd push if outside is greater..


// so at last the minHeap contains k largest element...and minheap.top() is the kth largest element

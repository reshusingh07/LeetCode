class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         priority_queue <int, vector<int>, greater<int>> minHeap;
        int i = 0;
        while(i < k) 
            minHeap.push(nums[i++]);
        
        while( i < nums.size()) {
            if(minHeap.top() <= nums[i]) {
                minHeap.pop();
                minHeap.push(nums[i]);
            }
            i++;
         }
    return minHeap.top();
    }
};

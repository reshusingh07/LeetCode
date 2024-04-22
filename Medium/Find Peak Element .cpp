class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() < 2)   return 0;
        int n = nums.size() - 1;
        if(nums[0] > nums[1])   return 0;
        if(nums[n] > nums[n - 1]) return n;
        int left = 1;
        int right = n - 1;
        int mid;
        while (left <= right) {

            mid = left + (right - left) / 2;
         if(nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1]) 
            return mid;
          else if(nums[mid - 1] > nums[mid])
                right = mid - 1;
            else 
                left = mid + 1;
        }
        return -1;
    }
};

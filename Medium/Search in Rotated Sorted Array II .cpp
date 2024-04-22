class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int start = 0;
        int end = nums.size() - 1;
        int mid = 0;
        while(start <= end) {
            mid =(start + end)/ 2;
           if(nums[mid] == k) return true;
           if(nums[start] == nums[mid] and nums[mid] == nums[end]){
                start++; end--;
                continue;
           }

        if(nums[start] <= nums[mid]) {
            if(nums[start] <= k and k <= nums[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        else {
            if(nums[mid] <= k and k <= nums[end]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
    return false;
    }
};

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1, -1};
        int find = 0;
        bool flag = false;
        int start = 0;
        int end = nums.size() - 1;
      while(start <= end){
        int mid = start + (end - start) / 2;

            if(nums[mid] == target) {
                find = mid;
                flag = true;
                break;
            }
            else if(nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        if(flag) {
            int left = find;
            int right = find;
            while(left > 0 && nums[left] == nums[left - 1]) 
                left--;
            res[0] = left;

            while(right < nums.size() - 1 && nums[right] == nums[right + 1])
                right++;
            
            res[1] = right;
            
            return res;

        }
     
            return res;
    }
};

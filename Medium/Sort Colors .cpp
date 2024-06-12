class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(), left = 0, right = n - 1;
        vector<int> temp(n, 1);

        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) 
                temp[left++] = 0;
            else if(nums[i] == 2) 
                temp[right--] = 2;
        }
        nums = temp;
    }
};

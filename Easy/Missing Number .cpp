class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int actualSum = 0;
        for(auto i : nums) 
            actualSum += i;
        
        int realSum = n *(n + 1) / 2;
        return realSum - actualSum;
    }
};

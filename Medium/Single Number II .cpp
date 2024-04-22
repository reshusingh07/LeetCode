class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int one = 0, two = 0;
        for(int i = 0; i < nums.size(); i++) {
            one = (one ^ nums[i]) & ~ two;
            two = (two ^ nums[i]) & ~ one;
        }
        return one;
    //   sort(nums.begin(), nums.end());
    //   int i = 1;
    //   while(i < nums.size()) {
    //     if(nums[i - 1] != nums[i]) 
    //         return nums[i - 1];
    //             i += 3;
    //   }
    //   return nums[nums.size() - 1];
    }
};

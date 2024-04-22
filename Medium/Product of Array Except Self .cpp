class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int N = nums.size();
        vector<int> left(N);
        vector<int> right(N);

        left[0] = 1;
        for(int i = 1; i < N; i++) 
            left[i] =  left[i - 1]* nums[i-1];
        

        right[N -1] = 1;
        for(int i = N - 2; i >= 0; i--)
            right[i] = right[i + 1] * nums[i+1];
        

        for(int i = 0; i < N; i++) 
            left[i] = left[i] * right[i];
        
        return left;
    }
};
